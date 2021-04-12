/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKPlaceSectionRowView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UILongPressGestureRecognizer, NSLayoutConstraint, MKVibrantLabel, _MKUILabel, NSString;

@interface MKPlaceEncyclopedicFactoidView : MKPlaceSectionRowView <UIGestureRecognizerDelegate> {

	UILongPressGestureRecognizer* _longPressRecognizer;
	NSLayoutConstraint* _baselineToTopConstraint;
	NSLayoutConstraint* _baselineToBottomConstraint;
	NSLayoutConstraint* _baselineToBaselineConstraint;
	BOOL _isStandAlone;
	MKVibrantLabel* _keyLabel;
	_MKUILabel* _valueLabel;

}

@property (nonatomic,retain) MKVibrantLabel * keyLabel;                                 //@synthesize keyLabel=_keyLabel - In the implementation block
@property (nonatomic,retain) _MKUILabel * valueLabel;                                   //@synthesize valueLabel=_valueLabel - In the implementation block
@property (nonatomic,readonly) id<NSItemProviderWriting> draggableContent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)copy:(id)arg1 ;
-(void)_handleLongPress:(id)arg1 ;
-(void)_contentSizeDidChange;
-(void)setValueLabel:(_MKUILabel *)arg1 ;
-(_MKUILabel *)valueLabel;
-(id<NSItemProviderWriting>)draggableContent;
-(id)_keyLabelWithString:(id)arg1 ;
-(id)_valueLabelWithString:(id)arg1 ;
-(void)setUpConstraints;
-(id)_keyLabelFont;
-(void)_menuDismissed:(id)arg1 ;
-(id)initWithTextItem:(id)arg1 isStandAloneFactoid:(BOOL)arg2 ;
-(MKVibrantLabel *)keyLabel;
-(void)setKeyLabel:(MKVibrantLabel *)arg1 ;
@end

