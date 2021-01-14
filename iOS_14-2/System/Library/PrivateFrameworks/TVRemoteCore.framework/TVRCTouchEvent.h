/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/

#import <TVRemoteCore/TVRemoteCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TVRCTouchEvent : NSObject <NSSecureCoding> {

	double _timestamp;
	long long _finger;
	long long _phase;
	CGPoint _digitizerLocation;

}

@property (nonatomic,readonly) double timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) long long finger;                       //@synthesize finger=_finger - In the implementation block
@property (nonatomic,readonly) long long phase;                        //@synthesize phase=_phase - In the implementation block
@property (nonatomic,readonly) CGPoint digitizerLocation;              //@synthesize digitizerLocation=_digitizerLocation - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)finger;
-(id)description;
-(CGPoint)digitizerLocation;
-(id)initWithCoder:(id)arg1 ;
-(long long)phase;
-(id)_initWithTimestamp:(double)arg1 finger:(long long)arg2 phase:(long long)arg3 digitizerLocation:(CGPoint)arg4 ;
@end

