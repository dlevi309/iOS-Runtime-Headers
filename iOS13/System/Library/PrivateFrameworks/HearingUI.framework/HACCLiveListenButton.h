/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HearingUI.framework/HearingUI
*/

#import <HearingUI/HearingUI-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/HACCContentModule.h>

@protocol HACCContentModuleDelegate;
@class UIVisualEffectView, UILabel, HACCLiveListenLevelGroup, NSString;

@interface HACCLiveListenButton : UIControl <HACCContentModule> {

	UIVisualEffectView* _titleContainer;
	UIVisualEffectView* _subtitleContainer;
	BOOL _isListening;
	unsigned long long module;
	id<HACCContentModuleDelegate> delegate;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	HACCLiveListenLevelGroup* _levelGroup;

}

@property (nonatomic,retain) UILabel * titleLabel;                                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                    //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) HACCLiveListenLevelGroup * levelGroup;                      //@synthesize levelGroup=_levelGroup - In the implementation block
@property (assign,nonatomic) BOOL isListening;                                           //@synthesize isListening=_isListening - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HACCContentModuleDelegate> delegate; 
@property (assign,nonatomic) unsigned long long module; 
-(BOOL)enabled;
-(id<HACCContentModuleDelegate>)delegate;
-(void)setDelegate:(id<HACCContentModuleDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(void)updateConstraints;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(UILabel *)subtitleLabel;
-(void)buttonTapped:(id)arg1 ;
-(unsigned long long)module;
-(BOOL)isListening;
-(void)setIsListening:(BOOL)arg1 ;
-(void)setModule:(unsigned long long)arg1 ;
-(void)updateValue;
-(id)contentValue;
-(void)liveListenAudioLevelDidChange:(double)arg1 ;
-(CGSize)preferredSizeForSize:(CGSize)arg1 ;
-(unsigned long long)lineCountForWidth:(double)arg1 ;
-(HACCLiveListenLevelGroup *)levelGroup;
-(void)setLevelGroup:(HACCLiveListenLevelGroup *)arg1 ;
@end

