/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIView, NSCache;

@interface UIKeyboardCandidateViewImageRenderer : NSObject {

	UIView* _viewForTraitCollection;
	NSCache* _imageCache;

}

@property (nonatomic,retain) NSCache * imageCache;                                //@synthesize imageCache=_imageCache - In the implementation block
@property (assign,nonatomic,__weak) UIView * viewForTraitCollection;              //@synthesize viewForTraitCollection=_viewForTraitCollection - In the implementation block
+(id)sharedImageRenderer;
-(id)pocketShadowImageForDarkKeyboard:(BOOL)arg1 fadesToBottom:(BOOL)arg2 drawShadow:(BOOL)arg3 topPadding:(double)arg4 bottomPadding:(double)arg5 height:(double)arg6 ;
-(id)init;
-(NSCache *)imageCache;
-(void)setImageCache:(NSCache *)arg1 ;
-(UIView *)viewForTraitCollection;
-(id)highlightedBarCellBackgroundImageWithColor:(id)arg1 insets:(UIEdgeInsets)arg2 ;
-(id)handwritingCellBackgroundImageForDarkKeyboard:(BOOL)arg1 highlighted:(BOOL)arg2 ;
-(id)extensionMaskImage;
-(void)setViewForTraitCollection:(UIView *)arg1 ;
@end

