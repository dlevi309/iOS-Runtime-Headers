/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setVisibility:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)activityType;
-(NSString *)visibility;
-(void)setActivityType:(NSString *)arg1 ;
-(void)setTaskType:(NSString *)arg1 ;
-(NSString *)taskType;
-(id)encodedClassName;
-(NSDate *)toDate;
-(void)setStreamType:(NSString *)arg1 ;
-(NSString *)streamType;
-(NSDate *)fromDate;
-(void)setFromDate:(NSDate *)arg1 ;
-(void)setToDate:(NSDate *)arg1 ;
-(BOOL)requiresResponse;
@end

