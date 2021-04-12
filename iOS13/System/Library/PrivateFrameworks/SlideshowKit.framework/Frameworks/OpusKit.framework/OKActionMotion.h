/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKAction.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/OKActionMotionExports.h>

@interface OKActionMotion : OKAction <NSSecureCoding, OKActionMotionExports> {

	double _rotationX;
	double _rotationY;
	double _rotationZ;

}

@property (nonatomic,readonly) double rotationX;              //@synthesize rotationX=_rotationX - In the implementation block
@property (nonatomic,readonly) double rotationY;              //@synthesize rotationY=_rotationY - In the implementation block
@property (nonatomic,readonly) double rotationZ;              //@synthesize rotationZ=_rotationZ - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)motionActionWithState:(unsigned long long)arg1 rotationX:(double)arg2 rotationY:(double)arg3 rotationZ:(double)arg4 context:(id)arg5 ;
+(id)motionActionWithState:(unsigned long long)arg1 location:(CGPoint)arg2 touchCount:(unsigned long long)arg3 rotationX:(double)arg4 rotationY:(double)arg5 rotationZ:(double)arg6 context:(id)arg7 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)rotationX;
-(double)rotationY;
-(double)rotationZ;
@end

