/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id)generateLocalOperationID;
-(void)wakeUp;
-(void)_updateDaemonOperations;
-(void)_receiveLongLivedOperation:(id)arg1 info:(id)arg2 ;
-(void)_enumerateNewDaemonOperationsWithHandler:(/*^block*/id)arg1 ;
@end

