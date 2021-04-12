/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


@protocol OS_dispatch_queue;
@class AFSettingsConnection, NSObject;

@interface AFMyriadAdvertisementContextManager : NSObject {

	AFSettingsConnection* _settingsConnection;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)initWithQueue:(id)arg1 ;
-(void)pushMyriadAdvertisementContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_resetSettingsConnection;
-(void)reset;
-(id)_settingsConnection;
@end

