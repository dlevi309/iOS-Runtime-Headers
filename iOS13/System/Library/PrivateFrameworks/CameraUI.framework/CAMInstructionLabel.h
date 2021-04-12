/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol CAMInstructionLabelDelegate;
@class NSString, UILabel;

@interface CAMInstructionLabel : UIView {

	BOOL _useModeDialFontSize;
	NSString* _text;
	id<CAMInstructionLabelDelegate> _delegate;
	long long _style;
	UILabel* __label;

}

@property (nonatomic,readonly) UILabel * _label;                                           //@synthesize _label=__label - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets _textInsets; 
@property (nonatomic,readonly) double _backgroundAlpha; 
@property (nonatomic,copy) NSString * text;                                                //@synthesize text=_text - In the implementation block
@property (assign,nonatomic,__weak) id<CAMInstructionLabelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long style;                                              //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL useModeDialFontSize;                                     //@synthesize useModeDialFontSize=_useModeDialFontSize - In the implementation block
-(id<CAMInstructionLabelDelegate>)delegate;
-(void)setDelegate:(id<CAMInstructionLabelDelegate>)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UILabel *)_label;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)_updateLabel;
-(double)_backgroundAlpha;
-(id)_textAttributes;
-(UIEdgeInsets)_textInsets;
-(void)_updateLayer;
-(void)updateToContentSize:(id)arg1 ;
-(void)setUseModeDialFontSize:(BOOL)arg1 ;
-(BOOL)useModeDialFontSize;
@end

