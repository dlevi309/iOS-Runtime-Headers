/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OKAction.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/OKActionTransitionExports.h>

@interface OKActionTransition : OKAction <NSSecureCoding, OKActionTransitionExports> {

	float _progress;
	float _velocity;
	unsigned long long _target;

}

@property (nonatomic,readonly) unsigned long long target;              //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) float progress;                         //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) float velocity;                         //@synthesize velocity=_velocity - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)transitionWithState:(unsigned long long)arg1 target:(unsigned long long)arg2 progress:(float)arg3 velocity:(float)arg4 context:(id)arg5 ;
-(float)progress;
-(float)velocity;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)target;
@end

