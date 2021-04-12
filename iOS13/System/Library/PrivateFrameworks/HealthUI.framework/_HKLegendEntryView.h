/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

