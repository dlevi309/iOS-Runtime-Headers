/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UIButton.h>

@protocol HUHomePodDetailViewDelegate;
@class UILabel, UIView, HUMonogramView;

@interface HUHomePodDetailView : UIButton {

	BOOL _isAnimatingPop;
	unsigned long long _role;
	UILabel* _unitNameLabel;
	UIView* _unitImageView;
	id<HUHomePodDetailViewDelegate> _delegate;
	HUMonogramView* _unitBadgeLabel;

}

@property (assign,nonatomic) BOOL isAnimatingPop;                                          //@synthesize isAnimatingPop=_isAnimatingPop - In the implementation block
@property (nonatomic,readonly) HUMonogramView * unitBadgeLabel;                            //@synthesize unitBadgeLabel=_unitBadgeLabel - In the implementation block
@property (nonatomic,copy) id<HFStringGenerator> unitName; 
@property (nonatomic,readonly) unsigned long long role;                                    //@synthesize role=_role - In the implementation block
@property (nonatomic,readonly) UILabel * unitNameLabel;                                    //@synthesize unitNameLabel=_unitNameLabel - In the implementation block
@property (nonatomic,readonly) UIView * unitImageView;                                     //@synthesize unitImageView=_unitImageView - In the implementation block
@property (assign,nonatomic,__weak) id<HUHomePodDetailViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<HUHomePodDetailViewDelegate>)delegate;
-(void)setDelegate:(id<HUHomePodDetailViewDelegate>)arg1 ;
-(unsigned long long)role;
-(id<HFStringGenerator>)unitName;
-(void)setUnitName:(id<HFStringGenerator>)arg1 ;
-(void)_setupConstraints;
-(id)initWithRole:(unsigned long long)arg1 ;
-(void)_updateImagesForRole;
-(void)_speakerTapped;
-(HUMonogramView *)unitBadgeLabel;
-(UIView *)unitImageView;
-(UILabel *)unitNameLabel;
-(BOOL)isAnimatingPop;
-(void)setIsAnimatingPop:(BOOL)arg1 ;
@end

