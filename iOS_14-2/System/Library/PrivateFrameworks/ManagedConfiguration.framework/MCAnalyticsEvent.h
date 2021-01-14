/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/


@class NSString;

@interface MCAnalyticsEvent : NSObject {

	NSString* _eventKey;
	/*^block*/id _eventPayloadBuilder;

}
-(id)initWithEventKey:(id)arg1 eventPayloadBuilder:(/*^block*/id)arg2 ;
-(void)sendEvent;
-(void)sendEventLazy;
@end

