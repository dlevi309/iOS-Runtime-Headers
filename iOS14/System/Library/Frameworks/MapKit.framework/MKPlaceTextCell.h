/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTopConstraint:(NSLayoutConstraint *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSLayoutConstraint *)topConstraint;
-(NSLayoutConstraint *)bottomConstraint;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(void)_contentSizeDidChange;
-(void)setLabel:(_MKUILabel *)arg1 ;
-(void)setBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(_MKUILabel *)label;
@end

