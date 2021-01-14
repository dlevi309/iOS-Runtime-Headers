/*
* Generated on Thursday, January 14, 2021 at 2:27:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)initWithTimingFunctionRef:(C3DTimingFunctionRef)arg1 ;
-(C3DTimingFunctionRef)c3dTimingFunction;
@end

