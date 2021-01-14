/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKitCore/UIStackView.h>

@class HKLegendEntry, UILabel, _HKLegendDot, UIImageView;

@interface _HKLegendEntryView : UIStackView {

	HKLegendEntry* _currentLegendEntry;
	UILabel* _legendLabel;
	_HKLegendDot* _legendDot;
	UIImageView* _legendIcon;
	HKLegendEntry* _legendEntry;

}

@property (nonatomic,retain) HKLegendEntry * legendEntry;              //@synthesize legendEntry=_legendEntry - In the implementation block
-(void)setLegendEntry:(HKLegendEntry *)arg1 ;
-(id)initWithLegendEntry:(id)arg1 ;
-(HKLegendEntry *)legendEntry;
@end

