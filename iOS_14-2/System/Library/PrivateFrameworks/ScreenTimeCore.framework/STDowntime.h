/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

