/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPComponentView.h>

@class UIColor, UIImageView;

@interface LPCaptionBarAccessoryView : LPComponentView {

	long long _type;
	BOOL _shouldFlipHorizontally;
	UIColor* _color;
	UIImageView* _accessoryView;

}

@property (nonatomic,readonly) CGSize size; 
-(id)init;
-(CGSize)size;
-(void)layoutComponentView;
-(void)componentViewDidMoveToWindow;
-(id)_createImageViewWithImage:(id)arg1 ;
-(id)ensureAccessoryView;
-(id)initWithType:(long long)arg1 side:(long long)arg2 ;
@end

