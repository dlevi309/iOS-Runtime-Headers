/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSCache *)imageCache;
-(UIView *)viewForTraitCollection;
-(id)highlightedBarCellBackgroundImageWithColor:(id)arg1 insets:(UIEdgeInsets)arg2 ;
-(id)pocketShadowImageForDarkKeyboard:(BOOL)arg1 fadesToBottom:(BOOL)arg2 drawShadow:(BOOL)arg3 topPadding:(double)arg4 bottomPadding:(double)arg5 height:(double)arg6 ;
-(id)handwritingCellBackgroundImageForDarkKeyboard:(BOOL)arg1 highlighted:(BOOL)arg2 ;
-(id)extensionMaskImage;
-(void)setViewForTraitCollection:(UIView *)arg1 ;
-(void)setImageCache:(NSCache *)arg1 ;
@end

