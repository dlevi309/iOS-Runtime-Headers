/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceSectionRowView.h>
#import <libobjc.A.dylib/MKPlaceAttributionCellButtonDelegate.h>

@protocol MKPlaceAttributionCellDelegate;
@class NSArray, NSLayoutConstraint, _MKUILabel, MKPlaceAttributionCellButton;

@interface MKPlaceAttributionCell : MKPlaceSectionRowView <MKPlaceAttributionCellButtonDelegate> {

	NSArray* _visibleConstraints;
	NSLayoutConstraint* _collapsedConstraint;
	BOOL _highlighted;
	_MKUILabel* _label;
	MKPlaceAttributionCellButton* _labelButton;
	NSLayoutConstraint* _labelBaselineToTop;
	NSLayoutConstraint* _labelLastBaselineToBottom;
	id<MKPlaceAttributionCellDelegate> _cellDelegate;

}

@property (nonatomic,retain) _MKUILabel * label;                                                  //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) MKPlaceAttributionCellButton * labelButton;                          //@synthesize labelButton=_labelButton - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * labelBaselineToTop;                             //@synthesize labelBaselineToTop=_labelBaselineToTop - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * labelLastBaselineToBottom;                      //@synthesize labelLastBaselineToBottom=_labelLastBaselineToBottom - In the implementation block
@property (assign,nonatomic,__weak) id<MKPlaceAttributionCellDelegate> cellDelegate;              //@synthesize cellDelegate=_cellDelegate - In the implementation block
+(id)fontForLabel;
-(void)setLabel:(_MKUILabel *)arg1 ;
-(_MKUILabel *)label;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)updateConstraints;
-(double)currentHeight;
-(void)_contentSizeDidChange;
-(void)createConstraints;
-(MKPlaceAttributionCellButton *)labelButton;
-(void)setLabelButton:(MKPlaceAttributionCellButton *)arg1 ;
-(void)setAttributionString:(id)arg1 ;
-(void)attributionCellButton:(id)arg1 isHighighted:(BOOL)arg2 executeAction:(BOOL)arg3 ;
-(void)attributionClicked;
-(id<MKPlaceAttributionCellDelegate>)cellDelegate;
-(NSLayoutConstraint *)labelBaselineToTop;
-(void)setLabelBaselineToTop:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)labelLastBaselineToBottom;
-(void)setLabelLastBaselineToBottom:(NSLayoutConstraint *)arg1 ;
-(void)setCellDelegate:(id<MKPlaceAttributionCellDelegate>)arg1 ;
@end

