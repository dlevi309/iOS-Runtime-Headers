/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject;

@interface FPDaemonOperationManager : NSObject {

	BOOL _started;
	NSMutableSet* _localOperationIDs;
	NSObject*<OS_dispatch_queue> _queue;
	int _notifToken;

}
+(id)sharedInstance;
-(void)wakeUp;
-(id)init;
-(id)generateLocalOperationID;
-(void)_updateDaemonOperations;
-(void)_receiveLongLivedOperation:(id)arg1 info:(id)arg2 ;
-(void)_enumerateNewDaemonOperationsWithHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

