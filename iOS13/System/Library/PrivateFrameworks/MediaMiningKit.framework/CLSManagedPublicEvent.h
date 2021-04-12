/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, NSDate, NSTimeZone, NSSet;

@interface CLSManagedPublicEvent : NSManagedObject

@property (nonatomic,retain) NSNumber * expectedAttendanceAsNumber; 
@property (assign,nonatomic) unsigned long long muid; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSDate * localStartDate; 
@property (nonatomic,retain) NSDate * localEndDate; 
@property (nonatomic,readonly) NSTimeZone * timeZone; 
@property (assign,nonatomic) long long timeZoneOffset; 
@property (assign,nonatomic) double localStartTime; 
@property (assign,nonatomic) double localEndTime; 
@property (assign,nonatomic) long long expectedAttendance; 
@property (assign,nonatomic) unsigned long long businessItemMuid; 
@property (assign,nonatomic) double businessItemLatitude; 
@property (assign,nonatomic) double businessItemLongitude; 
@property (nonatomic,retain) NSSet * categories; 
@property (nonatomic,retain) NSSet * queryLocations; 
@property (nonatomic,retain) NSSet * performers; 
+(id)entityName;
-(NSTimeZone *)timeZone;
-(long long)expectedAttendance;
-(void)setExpectedAttendance:(long long)arg1 ;
@end

