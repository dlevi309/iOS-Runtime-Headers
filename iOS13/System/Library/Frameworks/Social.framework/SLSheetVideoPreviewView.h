/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

#import <Social/Social-Structs.h>
#import <Social/SLSheetImagePreviewView.h>

@class UIView, UIImageView, UILabel;

@interface SLSheetVideoPreviewView : SLSheetImagePreviewView {

	UIView* _infoBar;
	UIImageView* _videoGlyphView;
	UILabel* _durationLabel;

}
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setVideoDuration:(double)arg1 ;
-(void)_applyConstraints;
@end

