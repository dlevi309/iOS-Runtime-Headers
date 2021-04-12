/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceSectionRowView.h>

@class _MKRightImageButton, NSLayoutConstraint;

@interface MKPlaceInfoSuggestAnEditRowView : MKPlaceSectionRowView {

	_MKRightImageButton* _suggestAnEditButton;
	NSLayoutConstraint* _topToTitleVerticalConstraint;
	NSLayoutConstraint* _titleToBottomVerticalConstraint;
	/*^block*/id _selectionBlock;

}

@property (nonatomic,copy) id selectionBlock;              //@synthesize selectionBlock=_selectionBlock - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateConstraints;
-(void)_contentSizeDidChange;
-(void)_updateFonts;
-(void)_setupSubviews;
-(void)_suggestAnEditButtonPressed;
-(id)selectionBlock;
-(void)setSelectionBlock:(id)arg1 ;
@end

