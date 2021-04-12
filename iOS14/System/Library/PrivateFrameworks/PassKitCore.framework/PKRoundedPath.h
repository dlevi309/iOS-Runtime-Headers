/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


#import <PassKitCore/PassKitCore-Structs.h>
@interface PKRoundedPath : NSObject {

	CGPathRef _CGPath;

}

@property (readonly) CGPathRef CGPath;              //@synthesize CGPath=_CGPath - In the implementation block
+(id)pathWithRoundedRect:(CGRect)arg1 cornerRadius:(double)arg2 ;
-(CGPathRef)CGPath;
-(id)init;
-(id)initWithRect:(CGRect)arg1 withRoundedCorners:(int)arg2 cornerRadii:(id)arg3 smoothPillShapes:(BOOL)arg4 ;
-(void)addContinuousCornerToPath:(CGPathRef)arg1 trueCorner:(CGPoint)arg2 cornerRadius:(CGSize)arg3 corners:(unsigned long long)arg4 portion:(unsigned long long)arg5 clockwise:(BOOL)arg6 fullRadius:(BOOL)arg7 ;
-(void)dealloc;
@end

