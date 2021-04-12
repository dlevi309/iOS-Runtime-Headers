/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setOperations:(NSMutableSet *)arg1 ;
-(NSMutableSet *)operations;
-(id)init;
-(id)_init;
-(NSObject*<OS_dispatch_queue>)privacyManagerQueue;
-(void)_resetPrivacySettingsForAppContainerAccountTuple:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)resetPrivacySettingsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setPrivacyManagerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

