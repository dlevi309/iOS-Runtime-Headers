/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate, NSTimeZone, CLSEIVenue, NSSet;

@interface CLSEIEvent : NSManagedObject

@property (assign,nonatomic) long long uuid; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSDate * startDate; 
@property (nonatomic,retain) NSDate * endDate; 
@property (nonatomic,readonly) NSTimeZone * timeZone; 
@property (assign,nonatomic) long long timeZoneOffset; 
@property (assign,nonatomic) double startTime; 
@property (assign,nonatomic) double endTime; 
@property (nonatomic,retain) CLSEIVenue * venue; 
@property (nonatomic,copy) NSSet * artists; 
@property (nonatomic,copy) NSSet * categories; 
-(NSTimeZone *)timeZone;
@end

