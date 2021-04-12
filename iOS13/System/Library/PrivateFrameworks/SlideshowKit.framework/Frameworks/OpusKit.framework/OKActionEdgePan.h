/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKActionPan.h>
#import <libobjc.A.dylib/OKActionEdgePanExports.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface OKActionEdgePan : OKActionPan <OKActionEdgePanExports, NSSecureCoding>
+(BOOL)supportsSecureCoding;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)edgePanActionWithState:(unsigned long long)arg1 location:(CGPoint)arg2 touchCount:(unsigned long long)arg3 translation:(CGPoint)arg4 previousTranslation:(CGPoint)arg5 velocity:(CGPoint)arg6 previousVelocity:(CGPoint)arg7 direction:(unsigned long long)arg8 context:(id)arg9 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

