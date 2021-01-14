/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKAction.h>
#import <libobjc.A.dylib/OKActionLongPressExports.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface OKActionLongPress : OKAction <OKActionLongPressExports, NSSecureCoding> {

	unsigned long long _tapCount;
	double _pressDuration;

}

@property (assign,nonatomic) unsigned long long tapCount;              //@synthesize tapCount=_tapCount - In the implementation block
@property (assign,nonatomic) double pressDuration;                     //@synthesize pressDuration=_pressDuration - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)longPressActionWithLocation:(CGPoint)arg1 tapCount:(unsigned long long)arg2 touchCount:(unsigned long long)arg3 pressDuration:(double)arg4 context:(id)arg5 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTapCount:(unsigned long long)arg1 ;
-(unsigned long long)tapCount;
-(void)dealloc;
-(void)setPressDuration:(double)arg1 ;
-(double)pressDuration;
@end

