/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableArray, UIFont, PKSpendingSummary, NSCalendar;

@interface PKSpendingSummaryChartView : UIView {

	NSMutableArray* _valueLabels;
	NSMutableArray* _legendLabels;
	NSMutableArray* _horizontalAxis;
	NSMutableArray* _bars;
	UIFont* _fontForLabels;
	UIFont* _fontForValues;
	PKSpendingSummary* _summary;
	double _chartMaxAmount;
	double _groupsMaxAmount;
	unsigned long long _axisCount;
	unsigned long long _presentationStyle;
	NSCalendar* _currentCalendar;
	BOOL _isCompactUI;
	BOOL _showLegend;
	BOOL _blurDisabled;
	BOOL _visible;

}

@property (assign,nonatomic) BOOL showLegend;                                      //@synthesize showLegend=_showLegend - In the implementation block
@property (assign,getter=isBlurDisabled,nonatomic) BOOL blurDisabled;              //@synthesize blurDisabled=_blurDisabled - In the implementation block
@property (assign,getter=isVisible,nonatomic) BOOL visible;                        //@synthesize visible=_visible - In the implementation block
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)isVisible;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setBlurDisabled:(BOOL)arg1 ;
-(void)setShowLegend:(BOOL)arg1 ;
-(void)configureWithSummary:(id)arg1 presentationStyle:(unsigned long long)arg2 ;
-(BOOL)showLegend;
-(BOOL)isBlurDisabled;
@end

