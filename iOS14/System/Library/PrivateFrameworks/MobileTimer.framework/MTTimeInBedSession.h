/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <libobjc.A.dylib/MTSleepSession.h>

@class NSDate, NSArray, NSDictionary, NSString;

@interface MTTimeInBedSession : NSObject <MTSleepSession> {

	BOOL _needsAdditionalProcessing;
	NSDate* _startDate;
	NSDate* _endDate;
	NSArray* _intervals;
	unsigned long long _endReason;
	NSDictionary* _metadata;

}

@property (nonatomic,retain) NSDate * startDate;                          //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                            //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) NSArray * intervals;                         //@synthesize intervals=_intervals - In the implementation block
@property (assign,nonatomic) unsigned long long endReason;                //@synthesize endReason=_endReason - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                     //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic) BOOL needsAdditionalProcessing;              //@synthesize needsAdditionalProcessing=_needsAdditionalProcessing - In the implementation block
@property (nonatomic,readonly) long long sampleType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)timeInBedSessionWithStartDate:(id)arg1 endDate:(id)arg2 intervals:(id)arg3 endReason:(unsigned long long)arg4 metadata:(id)arg5 ;
-(unsigned long long)endReason;
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSString *)description;
-(NSArray *)intervals;
-(void)setIntervals:(NSArray *)arg1 ;
-(void)setEndReason:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 intervals:(id)arg3 endReason:(unsigned long long)arg4 metadata:(id)arg5 ;
-(BOOL)needsAdditionalProcessing;
-(void)setNeedsAdditionalProcessing:(BOOL)arg1 ;
-(long long)sampleType;
-(NSDictionary *)metadata;
@end

