/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


@class TSPData;

@interface TSPDataObserverInfo : NSObject {

	id _observer;
	TSPData* _data;
	/*^block*/id _completionHandler;
	BOOL _isInternalObserver;
	unsigned long long _options;

}

@property (nonatomic,readonly) unsigned long long options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) BOOL isInternalObserver;                 //@synthesize isInternalObserver=_isInternalObserver - In the implementation block
-(id)init;
-(unsigned long long)options;
-(BOOL)isInternalObserver;
-(void)notifyWithStatus:(long long)arg1 info:(id)arg2 ;
-(BOOL)shouldNotifyStatus:(long long)arg1 ;
-(BOOL)shouldClearObserverForStatus:(long long)arg1 ;
-(id)initWithObserver:(id)arg1 data:(id)arg2 options:(unsigned long long)arg3 isInternalObserver:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
@end

