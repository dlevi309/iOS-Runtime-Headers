/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UILabel *)_label;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateLabel;
-(id<CAMInstructionLabelDelegate>)delegate;
-(UIEdgeInsets)_textInsets;
-(void)setText:(NSString *)arg1 ;
-(void)_updateLayer;
-(void)setDelegate:(id<CAMInstructionLabelDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(void)updateToContentSize:(id)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(id)_textAttributes;
-(double)_backgroundAlpha;
-(long long)style;
-(void)setUseModeDialFontSize:(BOOL)arg1 ;
-(BOOL)useModeDialFontSize;
@end

