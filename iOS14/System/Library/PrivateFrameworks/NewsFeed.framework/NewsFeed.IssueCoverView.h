/*
* Generated on Thursday, January 14, 2021 at 2:23:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(void)removeFromSuperview;
-(void)didMoveToSuperview;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
@end

