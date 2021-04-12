/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSSet, NSMutableDictionary;

@interface _VUIAppDocumentUpdateEventObserverContext : NSObject {

	NSSet* _eventDescriptors;
	NSMutableDictionary* _refreshTimerByEventDescriptor;
	/*^block*/id _refreshTimerFiredBlock;

}

@property (nonatomic,copy) NSSet * eventDescriptors;                                           //@synthesize eventDescriptors=_eventDescriptors - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * refreshTimerByEventDescriptor;              //@synthesize refreshTimerByEventDescriptor=_refreshTimerByEventDescriptor - In the implementation block
@property (nonatomic,copy) id refreshTimerFiredBlock;                                          //@synthesize refreshTimerFiredBlock=_refreshTimerFiredBlock - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(NSSet *)eventDescriptors;
-(void)setEventDescriptors:(NSSet *)arg1 ;
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

