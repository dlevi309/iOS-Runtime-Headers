/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
*/

#import <WiFiVelocity/WiFiVelocity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class W5PerfConfiguration, NSData, NSNumber;

@interface W5PerfResult : NSObject <NSCopying, NSSecureCoding> {

	W5PerfConfiguration* _configuration;
	NSData* _standardOut;
	NSData* _standardErr;
	NSNumber* _bandwidth;
	NSNumber* _jitter;
	NSNumber* _loss;
	double _start;
	double _end;

}

@property (nonatomic,copy) W5PerfConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy) NSData * standardOut;                             //@synthesize standardOut=_standardOut - In the implementation block
@property (nonatomic,copy) NSData * standardErr;                             //@synthesize standardErr=_standardErr - In the implementation block
@property (nonatomic,copy) NSNumber * bandwidth;                             //@synthesize bandwidth=_bandwidth - In the implementation block
@property (nonatomic,copy) NSNumber * jitter;                                //@synthesize jitter=_jitter - In the implementation block
@property (nonatomic,copy) NSNumber * loss;                                  //@synthesize loss=_loss - In the implementation block
@property (assign,nonatomic) double start;                                   //@synthesize start=_start - In the implementation block
@property (assign,nonatomic) double end;                                     //@synthesize end=_end - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)parseCompletedOutput:(id)arg1 configuration:(id)arg2 ;
-(void)dealloc;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)start;
-(double)end;
-(void)setConfiguration:(W5PerfConfiguration *)arg1 ;
-(W5PerfConfiguration *)configuration;
-(void)setStart:(double)arg1 ;
-(void)setEnd:(double)arg1 ;
-(void)setBandwidth:(NSNumber *)arg1 ;
-(NSNumber *)bandwidth;
-(NSNumber *)jitter;
-(void)setJitter:(NSNumber *)arg1 ;
-(void)setStandardOut:(NSData *)arg1 ;
-(void)setStandardErr:(NSData *)arg1 ;
-(void)setLoss:(NSNumber *)arg1 ;
-(NSData *)standardOut;
-(NSData *)standardErr;
-(NSNumber *)loss;
@end

