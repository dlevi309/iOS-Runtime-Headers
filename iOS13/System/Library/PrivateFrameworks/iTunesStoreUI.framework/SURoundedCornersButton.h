/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUSubtitledButton.h>

@class UIBezierPath, UIView;

@interface SURoundedCornersButton : SUSubtitledButton {

	UIBezierPath* _bezierPath;
	UIView* _highlightedBackgroundView;
	UIBezierPath* _shadowPath;

}
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)_highlightedBackgroundView;
@end

