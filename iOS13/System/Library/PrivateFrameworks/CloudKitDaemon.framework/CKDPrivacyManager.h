/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet;

@interface CKDPrivacyManager : NSObject {

	NSObject*<OS_dispatch_queue> _privacyManagerQueue;
	NSMutableSet* _operations;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> privacyManagerQueue;              //@synthesize privacyManagerQueue=_privacyManagerQueue - In the implementation block
@property (nonatomic,retain) NSMutableSet * operations;                                     //@synthesize operations=_operations - In the implementation block
+(id)sharedManager;
-(id)init;
-(id)_init;
-(NSMutableSet *)operations;
-(void)setOperations:(NSMutableSet *)arg1 ;
-(NSObject*<OS_dispatch_queue>)privacyManagerQueue;
-(void)_resetPrivacySettingsForAppContainerAccountTuple:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)resetPrivacySettingsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setPrivacyManagerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

