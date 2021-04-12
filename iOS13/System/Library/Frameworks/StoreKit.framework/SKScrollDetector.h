/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/


@protocol SKScreenTrackingDelegate;
@class NSMutableArray;

@interface SKScrollDetector : NSObject {

	id<SKScreenTrackingDelegate> _screenTrakingDelegate;
	NSMutableArray* _subscribedScrollers;

}

@property (nonatomic,retain) NSMutableArray * subscribedScrollers;                                   //@synthesize subscribedScrollers=_subscribedScrollers - In the implementation block
@property (assign,nonatomic,__weak) id<SKScreenTrackingDelegate> screenTrakingDelegate;              //@synthesize screenTrakingDelegate=_screenTrakingDelegate - In the implementation block
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithDelegate:(id)arg1 ;
-(NSMutableArray *)subscribedScrollers;
-(id<SKScreenTrackingDelegate>)screenTrakingDelegate;
-(void)findAndListenForScrollingOfView:(id)arg1 ;
-(void)stopListeningForScrollingOfView:(id)arg1 ;
-(void)setScreenTrakingDelegate:(id<SKScreenTrackingDelegate>)arg1 ;
-(void)setSubscribedScrollers:(NSMutableArray *)arg1 ;
@end

