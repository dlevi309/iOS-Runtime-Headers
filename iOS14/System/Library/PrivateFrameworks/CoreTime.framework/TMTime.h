/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreTime.framework/CoreTime
*/

#import <CoreTime/CoreTime-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface TMTime : NSObject <NSCopying, NSSecureCoding> {

	BOOL _synthesized;
	BOOL _reliability;
	long long _rtc_ns;
	long long _utc_ns;
	double _utcUnc_s;
	double _sf;
	double _sfUnc;
	NSString* _source;

}

@property (assign,nonatomic) double rtc_s; 
@property (assign,nonatomic) double utc_s; 
@property (assign,nonatomic) long long rtc_ns;                                   //@synthesize rtc_ns=_rtc_ns - In the implementation block
@property (assign,nonatomic) long long utc_ns;                                   //@synthesize utc_ns=_utc_ns - In the implementation block
@property (assign,nonatomic) double utcUnc_s;                                    //@synthesize utcUnc_s=_utcUnc_s - In the implementation block
@property (assign,nonatomic) double sf;                                          //@synthesize sf=_sf - In the implementation block
@property (assign,nonatomic) double sfUnc;                                       //@synthesize sfUnc=_sfUnc - In the implementation block
@property (nonatomic,copy) NSString * source;                                    //@synthesize source=_source - In the implementation block
@property (assign,getter=isSynthesized,nonatomic) BOOL synthesized;              //@synthesize synthesized=_synthesized - In the implementation block
@property (assign,nonatomic) BOOL reliability;                                   //@synthesize reliability=_reliability - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)timeWithUtc_s:(double)arg1 utcUnc_s:(double)arg2 rtc_s:(double)arg3 sf:(double)arg4 source:(id)arg5 ;
+(id)timeWithDictionary:(id)arg1 ;
-(void)setUtc_ns:(long long)arg1 ;
-(long long)utc_ns;
-(BOOL)isEquivalent:(id)arg1 ;
-(void)setRtc_ns:(long long)arg1 ;
-(double)sfUnc;
-(double)sf;
-(id)init;
-(void)setUtcUnc_s:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)reliability;
-(double)utc_s;
-(void)setSource:(NSString *)arg1 ;
-(double)utcUnc_s;
-(double)propagatedTimeAtRTC:(double)arg1 ;
-(id)description;
-(void)setSynthesized:(BOOL)arg1 ;
-(double)propagatedUncertaintyAtRTC:(double)arg1 ;
-(id)dictionary;
-(void)setSf:(double)arg1 ;
-(void)setReliability:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)rtc_s;
-(void)setSfUnc:(double)arg1 ;
-(id)initWithUtc_ns:(long long)arg1 utcUnc_s:(double)arg2 rtc_ns:(long long)arg3 sf:(double)arg4 sfUnc:(double)arg5 source:(id)arg6 ;
-(void)setRtc_s:(double)arg1 ;
-(long long)rtc_ns;
-(BOOL)isSynthesized;
-(void)setUtc_s:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(NSString *)source;
@end

