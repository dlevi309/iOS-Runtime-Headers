/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKAction.h>
#import <libobjc.A.dylib/OKActionSwipeExports.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface OKActionSwipe : OKAction <OKActionSwipeExports, NSSecureCoding> {

	unsigned long long _direction;

}

@property (assign,nonatomic) unsigned long long direction;              //@synthesize direction=_direction - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)swipeActionWithLocation:(CGPoint)arg1 direction:(unsigned long long)arg2 touchCount:(unsigned long long)arg3 context:(id)arg4 ;
-(unsigned long long)direction;
-(id)init;
-(void)setDirection:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

