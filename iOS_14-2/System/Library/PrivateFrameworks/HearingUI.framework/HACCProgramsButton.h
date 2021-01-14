/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HearingUI.framework/HearingUI
*/

#import <HearingUI/HearingUI-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/HACCContentModule.h>

@protocol HACCContentModuleDelegate;
@class UIVisualEffectView, UIView, UILabel, NSString;

@interface HACCProgramsButton : UIControl <HACCContentModule> {

	UIVisualEffectView* _titleContainer;
	UIView* _subtitleContainer;
	unsigned long long module;
	id<HACCContentModuleDelegate> delegate;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _statusLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;                                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                    //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * statusLabel;                                      //@synthesize statusLabel=_statusLabel - In the implementation block
@property (assign,nonatomic,__weak) id<HACCContentModuleDelegate> delegate; 
@property (assign,nonatomic) unsigned long long module; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UILabel *)titleLabel;
-(BOOL)enabled;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(id)accessibilityLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)buttonTapped:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isAccessibilityElement;
-(id<HACCContentModuleDelegate>)delegate;
-(void)setModule:(unsigned long long)arg1 ;
-(void)setDelegate:(id<HACCContentModuleDelegate>)arg1 ;
-(UILabel *)subtitleLabel;
-(id)accessibilityValue;
-(void)updateValue;
-(unsigned long long)module;
-(id)accessibilityHint;
-(UILabel *)statusLabel;
-(void)setStatusLabel:(UILabel *)arg1 ;
-(id)contentValue;
@end

