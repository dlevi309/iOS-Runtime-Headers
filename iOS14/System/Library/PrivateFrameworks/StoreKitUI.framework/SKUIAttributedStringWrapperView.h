/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIAttributedStringView.h>

@class SKUIAttributedStringView;

@interface SKUIAttributedStringWrapperView : SKUIAttributedStringView {

	SKUIAttributedStringView* _delegateView;

}

@property (nonatomic,readonly) SKUIAttributedStringView * delegateView;              //@synthesize delegateView=_delegateView - In the implementation block
-(id)textColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)firstBaselineOffset;
-(void)setTextColor:(id)arg1 ;
-(void)layoutSubviews;
-(double)baselineOffset;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(long long)badgePlacement;
-(SKUIAttributedStringView *)delegateView;
-(void)setLayout:(id)arg1 ;
-(void)setTextColorFollowsTintColor:(BOOL)arg1 ;
-(BOOL)textColorFollowsTintColor;
-(id)layout;
-(void)setBadgePlacement:(long long)arg1 ;
-(void)setStringTreatment:(long long)arg1 ;
-(void)setTreatmentColor:(id)arg1 ;
-(void)setRequiredBadges:(id)arg1 ;
-(void)viewWasRecycled;
-(BOOL)usesTallCharacterSet;
-(void)setFirstLineTopInset:(long long)arg1 ;
-(id)requiredBadges;
-(long long)stringTreatment;
-(id)treatmentColor;
-(long long)firstLineTopInset;
@end

