/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)_accountDidChange;
-(BOOL)isCellularEnabled;
@end

