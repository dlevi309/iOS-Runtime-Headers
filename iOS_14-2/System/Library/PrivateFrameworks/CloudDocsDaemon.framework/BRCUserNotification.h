/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/BRCUserNotifier.h>

@protocol OS_dispatch_source;
@class NSObject, NSMutableDictionary, NSString;

@interface BRCUserNotification : NSObject <BRCUserNotifier> {

	CFUserNotificationRef _cfUserNotification;
	CFRunLoopSourceRef _source;
	NSObject*<OS_dispatch_source> _displaySource;
	unsigned long long _nextDisplayBeginTime;
	id _progressSubscriber;
	NSMutableDictionary* _dialogInfo;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)close;
-(void)moveToFront;
-(void)dealloc;
-(void)_displayDialogWithType:(unsigned long long)arg1 dict:(id)arg2 options:(id)arg3 userReplyBlock:(/*^block*/id)arg4 ;
-(/*^block*/id)_logWrapUserReplyBlock:(/*^block*/id)arg1 ;
-(void)_hideCurrentDialog;
-(void)_updateDialogWithType:(unsigned long long)arg1 dict:(id)arg2 userReplyBlock:(/*^block*/id)arg3 ;
-(id)_localizationKey:(id)arg1 forTypeOfShare:(id)arg2 ;
-(id)_localizationKeyForOS:(id)arg1 ;
-(id)_localizationKey:(id)arg1 forOSAndTypeOfShare:(id)arg2 ;
-(void)_displayDialogWithType:(unsigned long long)arg1 dict:(id)arg2 userReplyBlock:(/*^block*/id)arg3 ;
-(void)showJoinDialogForShareMetadata:(id)arg1 session:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)showErrorSignInToiCloudForShareMetadata:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)showErrorTurnOniCloudDriveForShareMetadata:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)showErrorInstallNativeAppForShareMetadata:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)showErrorNativeAppDisabledByProfileForShareMetadata:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)showErrorReasonUnknownForShareMetadata:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)showErrorDeviceOfflineForShareMetadata:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)showErrorServerNotReachableForShareMetadata:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)showErrorItemUnavailableOrAccessRestrictedForShareMetadata:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)showErrorParticipantLimitReachedForShareMetadata:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)showErrorDocumentsAppNotVisibleForShareURL:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)_updateDialogWithType:(unsigned long long)arg1 dict:(id)arg2 ;
@end

