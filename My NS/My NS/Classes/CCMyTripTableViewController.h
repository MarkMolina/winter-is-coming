//
//  CCTripTableViewController.h
//  My NS
//
//  Created by Mark Molina on 11/10/14.
//  Copyright (c) 2014 CleverCode. All rights reserved.
//

#import "CCTableViewController.h"
#import "CCMyTripInterface.h"
#import "CCMyTripModuleInterface.h"

@interface CCMyTripTableViewController : CCTableViewController <CCMyTripInterface>

@property (nonatomic, weak) id<CCMyTripModuleInterface> eventHandler;

@end
