/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceSectionRowView.h>

@class NSMutableArray, UILayoutGuide, NSArray;

@interface MKPlaceEncyclopedicRowView : MKPlaceSectionRowView {

	NSMutableArray* _factoidViews;
	UILayoutGuide* _insetMetricGuide;
	UILayoutGuide* _leftMetricGuide;
	UILayoutGuide* _rightMetricGuide;
	unsigned long long _columnCount;
	BOOL _isStandAlone;
	NSArray* _items;
	NSMutableArray* _labelConstraints;

}

@property (nonatomic,retain) NSArray * items;                                                       //@synthesize items=_items - In the implementation block
@property (getter=factoidViewsInARow,nonatomic,readonly) NSArray * factoidViewsInARow; 
@property (nonatomic,retain) NSMutableArray * labelConstraints;                                     //@synthesize labelConstraints=_labelConstraints - In the implementation block
@property (assign,nonatomic) BOOL isStandAlone;                                                     //@synthesize isStandAlone=_isStandAlone - In the implementation block
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_contentSizeDidChange;
-(void)setColumnCount:(unsigned long long)arg1 ;
-(void)refreshContent:(BOOL)arg1 ;
-(void)refreshColumnCount;
-(NSMutableArray *)labelConstraints;
-(void)setLabelConstraints:(NSMutableArray *)arg1 ;
-(BOOL)isStandAlone;
-(void)addWidthAndSideSpacingConstraintsForLabels;
-(NSArray *)factoidViewsInARow;
-(void)setIsStandAlone:(BOOL)arg1 ;
@end

