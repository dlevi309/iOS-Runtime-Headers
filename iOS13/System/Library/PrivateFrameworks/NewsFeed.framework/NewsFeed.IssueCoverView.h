/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFeed.framework/NewsFeed
*/

#import <NewsFeed/NewsFeed-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/TUMotionManagerObserver.h>

@interface NewsFeed.IssueCoverView : UIView <TUMotionManagerObserver> {

	 staticContentView;
	 dynamicContentView;
	 dynamicView;
	 backgroundLayer;
	 shadowView;
	 shadowMotionLayer;
	 observingMotion;
	 identifier;

}
-(void)motionManager:(id)arg1 didUpdateMotionData:(id)arg2 ;
-(void)motionManager:(id)arg1 motionEnabled:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)removeFromSuperview;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToSuperview;
@end

