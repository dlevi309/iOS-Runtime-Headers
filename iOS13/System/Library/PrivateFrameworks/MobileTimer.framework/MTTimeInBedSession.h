/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <libobjc.A.dylib/MTBedtimeSession.h>

@class NSDate, NSArray, NSDictionary, NSString;

@interface MTTimeInBedSession : NSObject <MTBedtimeSession> {

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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long sampleType; 
+(BOOL)supportsSecureCoding;
+(id)timeInBedSessionWithStartDate:(id)arg1 endDate:(id)arg2 intervals:(id)arg3 endReason:(unsigned long long)arg4 metadata:(id)arg5 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)metadata;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(unsigned long long)endReason;
-(void)setEndReason:(unsigned long long)arg1 ;
-(long long)sampleType;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 intervals:(id)arg3 endReason:(unsigned long long)arg4 metadata:(id)arg5 ;
-(NSArray *)intervals;
-(BOOL)needsAdditionalProcessing;
-(void)setNeedsAdditionalProcessing:(BOOL)arg1 ;
-(void)setIntervals:(NSArray *)arg1 ;
@end

