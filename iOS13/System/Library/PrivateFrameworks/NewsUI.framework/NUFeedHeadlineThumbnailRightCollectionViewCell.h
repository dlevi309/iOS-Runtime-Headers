/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <NewsUI/NewsUI-Structs.h>
#import <NewsUI/NUFeedHeadlineCollectionViewCell.h>

@class NUCanvas;

@interface NUFeedHeadlineThumbnailRightCollectionViewCell : NUFeedHeadlineCollectionViewCell {

	NUCanvas* _canvas;

}

@property (nonatomic,readonly) NUCanvas * canvas;              //@synthesize canvas=_canvas - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(NUCanvas *)canvas;
-(id)buildCanvas;
@end

