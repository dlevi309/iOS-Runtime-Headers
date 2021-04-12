/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(void)configureWithSummary:(id)arg1 presentationStyle:(unsigned long long)arg2 ;
-(void)setVisible:(BOOL)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)isVisible;
-(void)setShowLegend:(BOOL)arg1 ;
-(BOOL)showLegend;
-(BOOL)isBlurDisabled;
-(void)setBlurDisabled:(BOOL)arg1 ;
@end

