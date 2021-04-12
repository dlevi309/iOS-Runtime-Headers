/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

@class NSDate, NSArray, NSDictionary;


@protocol MTBedtimeSession <NSSecureCoding,NSObject>
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) NSArray * intervals; 
@property (nonatomic,readonly) long long sampleType; 
@property (nonatomic,readonly) NSDictionary * metadata; 
@property (nonatomic,readonly) unsigned long long endReason; 
@property (nonatomic,readonly) BOOL needsAdditionalProcessing; 
@required
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSDictionary *)metadata;
-(unsigned long long)endReason;
-(long long)sampleType;
-(NSArray *)intervals;
-(BOOL)needsAdditionalProcessing;

@end

