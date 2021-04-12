/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)metrics;
-(long long)sourceID;
-(void)setSourceID:(long long)arg1 ;
-(void)setMetrics:(NSDictionary *)arg1 ;
-(void)setDatestamp:(NSDate *)arg1 ;
-(NSDate *)datestamp;
-(id)initWithSourceID:(long long)arg1 withDateStamp:(id)arg2 andMetrics:(id)arg3 ;
@end

