/*
* Generated on Thursday, January 14, 2021 at 2:22:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setItems:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_createConstraints;
-(NSArray *)items;
-(void)layoutSubviews;
-(void)infoCardThemeChanged;
-(void)_contentSizeDidChange;
-(void)_updateFontAndTextColor:(id)arg1 ;
@end

