/*
* Generated on Thursday, January 14, 2021 at 2:27:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/

#import <DocumentCamera/DocumentCamera-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage;

@interface DCNotesTextureView : UIView {

	UIImage* _image;
	CGSize _phase;

}

@property (nonatomic,retain) UIImage * image;              //@synthesize image=_image - In the implementation block
@property (assign) CGSize phase;                           //@synthesize phase=_phase - In the implementation block
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(CGSize)phase;
-(void)setPhase:(CGSize)arg1 ;
@end

