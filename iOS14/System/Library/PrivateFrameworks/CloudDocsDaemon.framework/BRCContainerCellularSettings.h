/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


@protocol OS_dispatch_queue, NSObject;
@class NSObject, NSNumber;

@interface BRCContainerCellularSettings : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSNumber* _isCellularEnabledForDocumentsAndData;
	id<NSObject> _accountDidChangeNotificationObserver;

}
+(id)_notifAccountStore;
+(id)containerCellularSettings;
-(id)init;
-(void)_accountDidChange;
-(void)dealloc;
-(BOOL)isCellularEnabled;
@end

