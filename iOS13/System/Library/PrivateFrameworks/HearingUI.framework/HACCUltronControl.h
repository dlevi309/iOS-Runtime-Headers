/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HearingUI.framework/HearingUI
*/

#import <HearingUI/HearingUI-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/HACCContentModule.h>

@protocol HACCContentModuleDelegate;
@class UIView, UILabel, NSString;

@interface HACCUltronControl : UIControl <HACCContentModule> {

	BOOL _isListening;
	unsigned long long module;
	id<HACCContentModuleDelegate> delegate;
	UIView* _container;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;

}

@property (nonatomic,retain) UIView * container;                                         //@synthesize container=_container - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                    //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HACCContentModuleDelegate> delegate; 
@property (assign,nonatomic) unsigned long long module; 
-(UIView *)container;
-(void)setContainer:(UIView *)arg1 ;
-(BOOL)enabled;
-(id<HACCContentModuleDelegate>)delegate;
-(void)setDelegate:(id<HACCContentModuleDelegate>)arg1 ;
-(BOOL)isRunning;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)updateConstraints;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(UILabel *)subtitleLabel;
-(void)buttonTapped:(id)arg1 ;
-(unsigned long long)module;
-(void)setModule:(unsigned long long)arg1 ;
-(void)updateValue;
-(id)contentValue;
@end

