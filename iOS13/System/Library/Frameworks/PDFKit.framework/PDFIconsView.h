/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/

#import <PDFKit/PDFKit-Structs.h>
#import <UIKitCore/UIView.h>

@class PDFThumbnailView, NSMutableArray, PDFPageIconLayer;

@interface PDFIconsView : UIView {

	PDFThumbnailView* _thumbnailView;
	NSMutableArray* _icons;
	PDFPageIconLayer* _activeIcon;

}
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(id)currentPage;
-(void)updateIconsImages;
-(void)_updateScrubberForPageIndex:(int)arg1 ;
-(int)_iconsLayoutIconCount;
-(CGSize)_iconsLayoutSize;
-(void)_updateScrubberAtViewLocation:(CGPoint)arg1 ;
-(id)initFromThumbnailView:(id)arg1 ;
-(void)documentChanged:(id)arg1 ;
-(void)documentMutated:(id)arg1 ;
-(void)currentPageChanged:(id)arg1 ;
-(void)pageChanged:(id)arg1 ;
@end

