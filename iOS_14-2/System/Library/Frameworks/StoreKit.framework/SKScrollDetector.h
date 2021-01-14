/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(id)initWithDelegate:(id)arg1 ;
-(void)dealloc;
-(NSMutableArray *)subscribedScrollers;
-(id<SKScreenTrackingDelegate>)screenTrakingDelegate;
-(void)findAndListenForScrollingOfView:(id)arg1 ;
-(void)stopListeningForScrollingOfView:(id)arg1 ;
-(void)setScreenTrakingDelegate:(id<SKScreenTrackingDelegate>)arg1 ;
-(void)setSubscribedScrollers:(NSMutableArray *)arg1 ;
@end

