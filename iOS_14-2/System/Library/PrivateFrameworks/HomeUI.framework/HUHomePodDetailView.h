/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UIButton.h>

@protocol HUHomePodDetailViewDelegate;
@class UILabel, UIView, HUMonogramView;

@interface HUHomePodDetailView : UIButton {

	BOOL _isAnimatingPop;
	unsigned long long _mediaSystemRole;
	UILabel* _unitNameLabel;
	UIView* _unitImageView;
	id<HUHomePodDetailViewDelegate> _delegate;
	HUMonogramView* _unitBadgeLabel;

}

@property (assign,nonatomic) BOOL isAnimatingPop;                                          //@synthesize isAnimatingPop=_isAnimatingPop - In the implementation block
@property (nonatomic,readonly) HUMonogramView * unitBadgeLabel;                            //@synthesize unitBadgeLabel=_unitBadgeLabel - In the implementation block
@property (nonatomic,copy) id<HFStringGenerator> unitName; 
@property (nonatomic,readonly) unsigned long long mediaSystemRole;                         //@synthesize mediaSystemRole=_mediaSystemRole - In the implementation block
@property (nonatomic,readonly) UILabel * unitNameLabel;                                    //@synthesize unitNameLabel=_unitNameLabel - In the implementation block
@property (nonatomic,readonly) UIView * unitImageView;                                     //@synthesize unitImageView=_unitImageView - In the implementation block
@property (assign,nonatomic,__weak) id<HUHomePodDetailViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_setupConstraints;
-(id<HUHomePodDetailViewDelegate>)delegate;
-(void)setDelegate:(id<HUHomePodDetailViewDelegate>)arg1 ;
-(unsigned long long)mediaSystemRole;
-(void)setUnitName:(id<HFStringGenerator>)arg1 ;
-(id<HFStringGenerator>)unitName;
-(void)_updateImagesForRole;
-(void)_speakerTapped;
-(HUMonogramView *)unitBadgeLabel;
-(UIView *)unitImageView;
-(UILabel *)unitNameLabel;
-(BOOL)isAnimatingPop;
-(void)setIsAnimatingPop:(BOOL)arg1 ;
-(id)initWithRole:(unsigned long long)arg1 variant:(unsigned long long)arg2 ;
@end

