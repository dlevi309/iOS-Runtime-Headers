/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIImageView.h>

@class UIColor;

@interface VideosExtrasBorderedImageView : UIImageView {

	BOOL _shouldDeferSettingTransform;
	BOOL _shouldUseTransformWhenReplicatingState;
	BOOL _shouldSkipImageWhenReplicatingState;
	CGAffineTransform _deferredTransform;

}

@property (assign,nonatomic) CGAffineTransform deferredTransform;                      //@synthesize deferredTransform=_deferredTransform - In the implementation block
@property (assign,nonatomic) BOOL shouldDeferSettingTransform;                         //@synthesize shouldDeferSettingTransform=_shouldDeferSettingTransform - In the implementation block
@property (assign,nonatomic) BOOL shouldUseTransformWhenReplicatingState;              //@synthesize shouldUseTransformWhenReplicatingState=_shouldUseTransformWhenReplicatingState - In the implementation block
@property (assign,nonatomic) BOOL shouldSkipImageWhenReplicatingState;                 //@synthesize shouldSkipImageWhenReplicatingState=_shouldSkipImageWhenReplicatingState - In the implementation block
@property (nonatomic,copy) UIColor * borderColor; 
@property (assign,nonatomic) double borderWidth; 
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(UIColor *)borderColor;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(double)borderWidth;
-(void)setBorderColor:(UIColor *)arg1 ;
-(void)setBorderWidth:(double)arg1 ;
-(BOOL)shouldDeferSettingTransform;
-(void)setDeferredTransform:(CGAffineTransform)arg1 ;
-(BOOL)shouldSkipImageWhenReplicatingState;
-(BOOL)shouldUseTransformWhenReplicatingState;
-(void)replicateStateFromImageView:(id)arg1 ;
-(CGAffineTransform)deferredTransform;
-(void)setShouldDeferSettingTransform:(BOOL)arg1 ;
-(void)setShouldUseTransformWhenReplicatingState:(BOOL)arg1 ;
-(void)setShouldSkipImageWhenReplicatingState:(BOOL)arg1 ;
@end

