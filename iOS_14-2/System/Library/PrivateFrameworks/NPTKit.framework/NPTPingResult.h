/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NPTKit.framework/NPTKit
*/

#import <NPTKit/NPTKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, NSError, NSDictionary;

@interface NPTPingResult : NSObject <NSSecureCoding, NSCopying> {

	NSArray* _pings;
	double _minLatency;
	double _maxLatency;
	double _meanLatency;
	double _standardDeviation;
	double _percentLost;
	NSString* _address;
	NSError* _error;

}

@property (nonatomic,retain) NSArray * pings;                            //@synthesize pings=_pings - In the implementation block
@property (assign) double minLatency;                                    //@synthesize minLatency=_minLatency - In the implementation block
@property (assign) double maxLatency;                                    //@synthesize maxLatency=_maxLatency - In the implementation block
@property (assign) double meanLatency;                                   //@synthesize meanLatency=_meanLatency - In the implementation block
@property (assign) double standardDeviation;                             //@synthesize standardDeviation=_standardDeviation - In the implementation block
@property (assign) double percentLost;                                   //@synthesize percentLost=_percentLost - In the implementation block
@property (nonatomic,retain) NSString * address;                         //@synthesize address=_address - In the implementation block
@property (nonatomic,retain) NSError * error;                            //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSDictionary * asDictionary; 
+(BOOL)supportsSecureCoding;
-(NSDictionary *)asDictionary;
-(NSArray *)pings;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setStandardDeviation:(double)arg1 ;
-(NSString *)address;
-(void)setAddress:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)standardDeviation;
-(void)setPings:(NSArray *)arg1 ;
-(void)populateFields;
-(void)setMinLatency:(double)arg1 ;
-(double)minLatency;
-(double)maxLatency;
-(void)setMaxLatency:(double)arg1 ;
-(void)setMeanLatency:(double)arg1 ;
-(void)setPercentLost:(double)arg1 ;
-(double)calculateStandardDeviation;
-(double)meanLatency;
-(double)percentLost;
-(id)initWithPings:(id)arg1 usingAddress:(id)arg2 ;
@end

