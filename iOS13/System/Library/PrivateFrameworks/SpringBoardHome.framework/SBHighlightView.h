/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView;

@interface SBHighlightView : UIView {

	UIImageView* _highlight;
	double _highlightAlpha;
	double _highlightHeight;

}

@property (nonatomic,readonly) double highlightAlpha;               //@synthesize highlightAlpha=_highlightAlpha - In the implementation block
@property (nonatomic,readonly) double highlightHeight;              //@synthesize highlightHeight=_highlightHeight - In the implementation block
+(id)imageCache;
+(id)_highlightImageWithHeight:(double)arg1 alpha:(double)arg2 ;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 highlightAlpha:(double)arg2 highlightHeight:(double)arg3 ;
-(double)highlightAlpha;
-(double)highlightHeight;
@end

