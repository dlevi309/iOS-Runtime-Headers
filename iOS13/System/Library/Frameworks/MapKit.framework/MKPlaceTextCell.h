/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceSectionRowView.h>

@class _MKUILabel, NSLayoutConstraint, NSString;

@interface MKPlaceTextCell : MKPlaceSectionRowView {

	_MKUILabel* _label;
	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _bottomConstraint;

}

@property (nonatomic,retain) _MKUILabel * label;                                 //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topConstraint;                 //@synthesize topConstraint=_topConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomConstraint;              //@synthesize bottomConstraint=_bottomConstraint - In the implementation block
@property (nonatomic,copy) NSString * text; 
-(void)setLabel:(_MKUILabel *)arg1 ;
-(_MKUILabel *)label;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSLayoutConstraint *)topConstraint;
-(NSLayoutConstraint *)bottomConstraint;
-(void)_contentSizeDidChange;
-(void)setTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setBottomConstraint:(NSLayoutConstraint *)arg1 ;
@end

