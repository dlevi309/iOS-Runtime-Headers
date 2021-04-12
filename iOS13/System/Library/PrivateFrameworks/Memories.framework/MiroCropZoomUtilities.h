/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


#import <Memories/Memories-Structs.h>
@interface MiroCropZoomUtilities : NSObject
-(CGRect)rectFromDesiredPosition:(SCD_Struct_Mi19)arg1 outputAspectRatio:(float)arg2 image:(id)arg3 ;
-(CGRect)adjustKBRect:(CGRect)arg1 toContainRect:(CGRect)arg2 withinImageSize:(CGSize)arg3 ;
-(CGRect)horizontallyClampedImageRect:(CGRect)arg1 imageSize:(CGSize)arg2 ;
-(CGRect)verticallyClampedImageRect:(CGRect)arg1 imageSize:(CGSize)arg2 ;
-(BOOL)hasCompletedAnalysis:(id)arg1 ;
-(CGRect)produceCroppingFrameforImage:(id)arg1 withAsset:(id)arg2 ;
-(CGRect)clampImageRect:(CGRect)arg1 toImageSize:(CGSize)arg2 ;
@end

