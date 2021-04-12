/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic,__weak) id<HACCContentModuleDelegate> delegate; 
@property (assign,nonatomic) unsigned long long module; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UILabel *)titleLabel;
-(BOOL)enabled;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)buttonTapped:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<HACCContentModuleDelegate>)delegate;
-(void)setModule:(unsigned long long)arg1 ;
-(void)setContainer:(UIView *)arg1 ;
-(void)setDelegate:(id<HACCContentModuleDelegate>)arg1 ;
-(UILabel *)subtitleLabel;
-(void)updateValue;
-(unsigned long long)module;
-(BOOL)isRunning;
-(UIView *)container;
-(id)contentValue;
@end

