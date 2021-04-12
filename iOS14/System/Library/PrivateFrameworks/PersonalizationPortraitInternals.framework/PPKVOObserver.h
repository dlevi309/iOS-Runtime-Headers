/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface PPKVOObserver : NSObject {

	NSString* _name;
	NSString* _key;
	id _observee;
	/*^block*/id _handler;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)observerWithName:(id)arg1 object:(id)arg2 key:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithName:(id)arg1 key:(id)arg2 observee:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)dealloc;
@end

