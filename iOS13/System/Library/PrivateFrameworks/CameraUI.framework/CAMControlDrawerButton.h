/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/CAMAccessibilityHUDItemProvider.h>

@class NSString, UIImageView;

@interface CAMControlDrawerButton : UIControl <CAMAccessibilityHUDItemProvider> {

	long long _layoutStyle;
	NSString* _contentSize;
	long long _orientation;
	UIImageView* __imageView;
	UIImageView* __backgroundView;

}

@property (nonatomic,readonly) UIImageView * _imageView;                         //@synthesize _imageView=__imageView - In the implementation block
@property (nonatomic,readonly) UIImageView * _backgroundView;                    //@synthesize _backgroundView=__backgroundView - In the implementation block
@property (assign,nonatomic) long long layoutStyle;                              //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (nonatomic,readonly) long long controlType; 
@property (getter=isExpandable,nonatomic,readonly) BOOL expandable; 
@property (assign,nonatomic) NSString * contentSize;                             //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) long long orientation;                              //@synthesize orientation=_orientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_backgroundImage;
+(CGSize)buttonSize;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
-(NSString *)contentSize;
-(void)setContentSize:(NSString *)arg1 ;
-(CGSize)intrinsicContentSize;
-(UIImageView *)_backgroundView;
-(void)layoutSubviews;
-(UIImageView *)_imageView;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setLayoutStyle:(long long)arg1 ;
-(long long)layoutStyle;
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(void)updateImage;
-(long long)controlType;
-(BOOL)isExpandable;
-(id)initWithLayoutStyle:(long long)arg1 ;
-(id)hudItemForAccessibilityHUDManager:(id)arg1 ;
-(void)selectedByAccessibilityHUDManager:(id)arg1 ;
-(id)imageNameForCurrentState;
-(BOOL)shouldUseActiveTintForCurrentState;
-(void)handleButtonReleased:(id)arg1 ;
-(BOOL)shouldScaleImageWhileHighlighted;
-(void)didChangeContentSize;
@end

