/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/CAMAccessibilityHUDItemProvider.h>

@class NSString, UIImageView, CAMSlashView, CAMSlashMaskView;

@interface CAMControlDrawerButton : UIControl <CAMAccessibilityHUDItemProvider> {

	long long _layoutStyle;
	NSString* _contentSize;
	long long _orientation;
	UIImageView* __imageView;
	UIImageView* __backgroundView;
	CAMSlashView* __slashView;
	CAMSlashMaskView* __slashMaskView;

}

@property (nonatomic,readonly) UIImageView * _imageView;                         //@synthesize _imageView=__imageView - In the implementation block
@property (nonatomic,readonly) UIImageView * _backgroundView;                    //@synthesize _backgroundView=__backgroundView - In the implementation block
@property (nonatomic,readonly) CAMSlashView * _slashView;                        //@synthesize _slashView=__slashView - In the implementation block
@property (nonatomic,readonly) CAMSlashMaskView * _slashMaskView;                //@synthesize _slashMaskView=__slashMaskView - In the implementation block
@property (assign,nonatomic) long long layoutStyle;                              //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (nonatomic,readonly) long long controlType; 
@property (getter=isExpandable,nonatomic,readonly) BOOL expandable; 
@property (assign,nonatomic) NSString * contentSize;                             //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) long long orientation;                              //@synthesize orientation=_orientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)buttonSize;
+(id)_backgroundImage;
-(void)setContentSize:(NSString *)arg1 ;
-(UIImageView *)_imageView;
-(void)setLayoutStyle:(long long)arg1 ;
-(id)initWithLayoutStyle:(long long)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)updateImage;
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(long long)layoutStyle;
-(UIImageView *)_backgroundView;
-(NSString *)contentSize;
-(id)imageNameForCurrentState;
-(id)hudItemForAccessibilityHUDManager:(id)arg1 ;
-(CAMSlashView *)_slashView;
-(void)updateImageAnimated:(BOOL)arg1 ;
-(void)layoutSubviews;
-(long long)orientation;
-(long long)controlType;
-(void)selectedByAccessibilityHUDManager:(id)arg1 ;
-(BOOL)isExpandable;
-(void)setOrientation:(long long)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)shouldUseActiveTintForCurrentState;
-(BOOL)shouldUseSlash;
-(BOOL)shouldShowSlashForCurrentState;
-(CAMSlashMaskView *)_slashMaskView;
-(void)_updateSlashAnimated:(BOOL)arg1 ;
-(void)handleButtonReleased:(id)arg1 ;
-(BOOL)shouldScaleImageWhileHighlighted;
-(void)didChangeContentSize;
@end

