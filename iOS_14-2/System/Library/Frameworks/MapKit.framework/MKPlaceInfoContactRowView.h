/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceSectionRowView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class MKPlaceSectionHeaderView, NSLayoutConstraint, NSArray, CNLabeledValue, MKVibrantLabel, _MKUILabel, UIColor, NSString;

@interface MKPlaceInfoContactRowView : MKPlaceSectionRowView <UIGestureRecognizerDelegate> {

	MKPlaceSectionHeaderView* _headerView;
	NSLayoutConstraint* _topToTitleConstraint;
	NSLayoutConstraint* _topToIconConstraint;
	NSLayoutConstraint* _titleToValueConstraint;
	NSLayoutConstraint* _valueToTrailingViewConstraint;
	NSArray* _iconConstraints;
	NSArray* _titleConstraints;
	BOOL _isInRightMouseDownEvent;
	BOOL _textIsSelectable;
	CNLabeledValue* _labeledValue;
	MKVibrantLabel* _titleLabel;
	_MKUILabel* _valueLabel;
	/*^block*/id _iconSelectedBlock;
	NSLayoutConstraint* _valueToBottomConstraint;
	UIColor* _labelColor;

}

@property (nonatomic,readonly) MKVibrantLabel * titleLabel;                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) _MKUILabel * valueLabel;                                 //@synthesize valueLabel=_valueLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * valueToBottomConstraint;              //@synthesize valueToBottomConstraint=_valueToBottomConstraint - In the implementation block
@property (nonatomic,retain) UIColor * labelColor;                                      //@synthesize labelColor=_labelColor - In the implementation block
@property (nonatomic,retain) CNLabeledValue * labeledValue;                             //@synthesize labeledValue=_labeledValue - In the implementation block
@property (nonatomic,copy) id iconSelectedBlock;                                        //@synthesize iconSelectedBlock=_iconSelectedBlock - In the implementation block
@property (nonatomic,readonly) id<NSItemProviderWriting> draggableContent; 
@property (nonatomic,readonly) int analyticsTarget; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)icon;
-(MKVibrantLabel *)titleLabel;
-(void)copy:(id)arg1 ;
-(id)_icon;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_valueString;
-(void)setLabelColor:(UIColor *)arg1 ;
-(UIColor *)labelColor;
-(int)analyticsTarget;
-(Class)_labeledValueExpectedValueType;
-(id)_iconAccessibilityLabel;
-(id)iconSelectedBlock;
-(void)setIconSelectedBlock:(id)arg1 ;
-(NSLayoutConstraint *)valueToBottomConstraint;
-(void)setValueToBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(CNLabeledValue *)labeledValue;
-(_MKUILabel *)valueLabel;
-(void)_contentSizeDidChange;
-(void)setLabeledValue:(CNLabeledValue *)arg1 ;
-(id<NSItemProviderWriting>)draggableContent;
@end

