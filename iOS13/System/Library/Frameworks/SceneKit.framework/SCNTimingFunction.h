/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SCNTimingFunction : NSObject <NSSecureCoding> {

	C3DTimingFunctionRef _timingFunction;

}
+(BOOL)supportsSecureCoding;
+(id)functionWithTimingMode:(long long)arg1 ;
+(id)functionWithCAMediaTimingFunction:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTimingFunctionRef:(C3DTimingFunctionRef)arg1 ;
-(C3DTimingFunctionRef)c3dTimingFunction;
@end

