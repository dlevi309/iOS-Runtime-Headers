/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSSet, NSMutableDictionary, UIViewController;

@interface _VUIAppDocumentUpdateEventObserverContext : NSObject {

	NSSet* _eventDescriptors;
	NSMutableDictionary* _refreshTimerByEventDescriptor;
	/*^block*/id _refreshTimerFiredBlock;
	UIViewController* _viewController;

}

@property (nonatomic,copy) NSSet * eventDescriptors;                                           //@synthesize eventDescriptors=_eventDescriptors - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * refreshTimerByEventDescriptor;              //@synthesize refreshTimerByEventDescriptor=_refreshTimerByEventDescriptor - In the implementation block
@property (nonatomic,copy) id refreshTimerFiredBlock;                                          //@synthesize refreshTimerFiredBlock=_refreshTimerFiredBlock - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;                                //@synthesize viewController=_viewController - In the implementation block
-(void)setViewController:(UIViewController *)arg1 ;
-(NSSet *)eventDescriptors;
-(void)setEventDescriptors:(NSSet *)arg1 ;
-(UIViewController *)viewController;
-(void)invalidate;
-(void)dealloc;
-(void)setRefreshTimerFiredBlock:(id)arg1 ;
-(void)_cancelAllRefreshTimers;
-(NSMutableDictionary *)refreshTimerByEventDescriptor;
-(id)_refreshTimerWithRefreshTimeEventDescriptor:(id)arg1 ;
-(void)_startRefreshTimer:(id)arg1 ;
-(void)_cancelRefreshTimers:(id)arg1 ;
-(void)setRefreshTimerByEventDescriptor:(NSMutableDictionary *)arg1 ;
-(id)refreshTimerFiredBlock;
-(void)_cancelRefreshTimer:(id)arg1 ;
@end

