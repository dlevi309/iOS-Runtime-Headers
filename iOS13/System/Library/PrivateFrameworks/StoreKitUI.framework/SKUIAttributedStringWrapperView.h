/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIAttributedStringView.h>

@class SKUIAttributedStringView;

@interface SKUIAttributedStringWrapperView : SKUIAttributedStringView {

	SKUIAttributedStringView* _delegateView;

}

@property (nonatomic,readonly) SKUIAttributedStringView * delegateView;              //@synthesize delegateView=_delegateView - In the implementation block
-(id)layout;
-(void)setLayout:(id)arg1 ;
-(double)baselineOffset;
-(double)firstBaselineOffset;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextColor:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)textColor;
-(SKUIAttributedStringView *)delegateView;
-(long long)badgePlacement;
-(void)setBadgePlacement:(long long)arg1 ;
-(void)setStringTreatment:(long long)arg1 ;
-(void)setTreatmentColor:(id)arg1 ;
-(void)setTextColorFollowsTintColor:(BOOL)arg1 ;
-(void)setRequiredBadges:(id)arg1 ;
-(void)viewWasRecycled;
-(BOOL)usesTallCharacterSet;
-(void)setFirstLineTopInset:(long long)arg1 ;
-(id)requiredBadges;
-(long long)stringTreatment;
-(id)treatmentColor;
-(long long)firstLineTopInset;
-(BOOL)textColorFollowsTintColor;
@end

