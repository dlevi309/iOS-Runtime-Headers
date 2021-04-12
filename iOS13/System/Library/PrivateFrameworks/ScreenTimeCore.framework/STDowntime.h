/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet;

@interface STDowntime : NSManagedObject

@property (nonatomic,copy) NSString * calendarIdentifier; 
@property (assign,nonatomic) BOOL enabled; 
@property (assign,nonatomic) BOOL canAskForMoreTime; 
@property (nonatomic,copy) NSSet * schedule; 
-(void)setStartHour:(long long)arg1 startMinute:(long long)arg2 endHour:(long long)arg3 endMinute:(long long)arg4 ;
@end

