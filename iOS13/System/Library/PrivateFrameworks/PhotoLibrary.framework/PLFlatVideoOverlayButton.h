/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
*/

#import <UIKitCore/UIButton.h>
#import <libobjc.A.dylib/PLVideoOverlayButton.h>

@interface PLFlatVideoOverlayButton : UIButton <PLVideoOverlayButton> {

	long long _style;
	id _target;
	SEL _action;

}
-(long long)style;
-(id)initWithStyle:(long long)arg1 ;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_handleTap:(id)arg1 ;
-(id)_normalButtonImage;
-(id)_highlightedButtonImage;
-(id)_createOverlayImageWithBackgroundWhite:(double)arg1 backgroundAlpha:(double)arg2 glyphAlpha:(double)arg3 ;
@end

