/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSDate;

@interface SARemoveFromActivityStream : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * activityType; 
@property (nonatomic,copy) NSDate * fromDate; 
@property (nonatomic,copy) NSString * streamType; 
@property (nonatomic,copy) NSString * taskType; 
@property (nonatomic,copy) NSDate * toDate; 
@property (nonatomic,copy) NSString * visibility; 
+(id)removeFromActivityStream;
+(id)removeFromActivityStreamWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSDate *)toDate;
-(void)setActivityType:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)visibility;
-(NSString *)activityType;
-(void)setTaskType:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setVisibility:(NSString *)arg1 ;
-(NSString *)taskType;
-(NSString *)streamType;
-(void)setStreamType:(NSString *)arg1 ;
-(void)setFromDate:(NSDate *)arg1 ;
-(NSDate *)fromDate;
-(void)setToDate:(NSDate *)arg1 ;
@end

