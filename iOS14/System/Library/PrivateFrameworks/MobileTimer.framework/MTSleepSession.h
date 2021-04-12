/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

@class NSDate, NSArray, NSDictionary;


@protocol MTSleepSession <NSSecureCoding,NSObject>
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) NSArray * intervals; 
@property (nonatomic,readonly) long long sampleType; 
@property (nonatomic,readonly) NSDictionary * metadata; 
@property (nonatomic,readonly) unsigned long long endReason; 
@property (nonatomic,readonly) BOOL needsAdditionalProcessing; 
@required
-(unsigned long long)endReason;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(NSArray *)intervals;
-(BOOL)needsAdditionalProcessing;
-(long long)sampleType;
-(NSDictionary *)metadata;

@end

