/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoControlVisibilityItem.h>

@class UIView, NSString;

@interface SVVideoControlVisibilityItem : NSObject <SVVideoControlVisibilityItem> {

	BOOL _hideable;
	UIView* _view;

}

@property (assign,nonatomic) BOOL hideable;                         //@synthesize hideable=_hideable - In the implementation block
@property (nonatomic,readonly) UIView * view;                       //@synthesize view=_view - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isVisible;
-(UIView *)view;
-(id)initWithView:(id)arg1 ;
-(void)setHideable:(BOOL)arg1 ;
-(BOOL)hideable;
-(void)hide:(BOOL)arg1 withAnimationCoordinator:(id)arg2 ;
@end

