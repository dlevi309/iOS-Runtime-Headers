/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/NotesUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage;

@interface NotesTextureView : UIView {

	UIImage* _image;
	CGSize _phase;

}

@property (nonatomic,retain) UIImage * image;              //@synthesize image=_image - In the implementation block
@property (assign) CGSize phase;                           //@synthesize phase=_phase - In the implementation block
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(CGSize)phase;
-(void)setPhase:(CGSize)arg1 ;
@end

