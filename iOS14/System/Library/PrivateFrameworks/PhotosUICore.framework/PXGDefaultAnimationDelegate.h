/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXGAnimationDelegate.h>

@class NSString;

@interface PXGDefaultAnimationDelegate : NSObject <PXGAnimationDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)adjustGeometry:(inout SCD_Struct_PX11*)arg1 style:(inout SCD_Struct_PX14*)arg2 info:(inout SCD_Struct_PX15*)arg3 forTextSpriteAnimatingFromAttributes:(const SCD_Struct_PX75*)arg4 toAttributes:(const SCD_Struct_PX75*)arg5 inRootLayout:(id)arg6 ;
-(void)animation:(id)arg1 adjustGeometries:(inout SCD_Struct_PX11*)arg2 styles:(inout SCD_Struct_PX14*)arg3 infos:(inout SCD_Struct_PX15*)arg4 forSpriteAppearingIntoRootIndexRange:(PXGSpriteIndexRange)arg5 ;
-(id)animation:(id)arg1 doubleSidedAnimatedSpriteIndexesForModifiedSpriteIndexes:(id)arg2 rootLayout:(id)arg3 presentedGeometries:(const SCD_Struct_PX11*)arg4 styles:(const SCD_Struct_PX14*)arg5 infos:(const SCD_Struct_PX15*)arg6 ;
-(void)animation:(id)arg1 adjustGeometries:(inout SCD_Struct_PX11*)arg2 styles:(inout SCD_Struct_PX14*)arg3 infos:(inout SCD_Struct_PX15*)arg4 forSpriteDisappearingFromRootIndexRange:(PXGSpriteIndexRange)arg5 ;
-(void)animation:(id)arg1 prepareWithRootLayout:(id)arg2 viewportShift:(CGPoint)arg3 ;
@end

