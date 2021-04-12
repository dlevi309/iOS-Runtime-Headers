/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricKitSource.framework/MetricKitSource
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSDictionary;

@interface MXSourceXPCPayload : NSObject <NSSecureCoding> {

	long long _sourceID;
	NSDate* _datestamp;
	NSDictionary* _metrics;

}

@property (assign) long long sourceID;                  //@synthesize sourceID=_sourceID - In the implementation block
@property (retain) NSDate * datestamp;                  //@synthesize datestamp=_datestamp - In the implementation block
@property (retain) NSDictionary * metrics;              //@synthesize metrics=_metrics - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setMetrics:(NSDictionary *)arg1 ;
-(void)setSourceID:(long long)arg1 ;
-(NSDictionary *)metrics;
-(NSDate *)datestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)sourceID;
-(void)setDatestamp:(NSDate *)arg1 ;
-(id)initWithSourceID:(long long)arg1 withDateStamp:(id)arg2 andMetrics:(id)arg3 ;
@end

