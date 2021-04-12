/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceSectionRowView.h>

@class NSMutableArray, NSArray, UILayoutGuide;

@interface _MKPlaceBusinessInfoRow : MKPlaceSectionRowView {

	BOOL _needToRecalculateWidth;
	unsigned long long _numberOfColumns;
	NSMutableArray* _labels;
	NSArray* _constraints;
	UILayoutGuide* _leftColumnGuide;
	UILayoutGuide* _rightColumnGuide;
	double _width;
	NSArray* _items;

}

@property (nonatomic,retain) NSArray * items;              //@synthesize items=_items - In the implementation block
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_createConstraints;
-(void)_contentSizeDidChange;
-(void)infoCardThemeChanged;
-(void)_updateFontAndTextColor:(id)arg1 ;
@end

