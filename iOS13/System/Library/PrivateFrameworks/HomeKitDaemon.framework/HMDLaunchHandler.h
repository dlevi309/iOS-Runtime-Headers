/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, NSString;

@interface HMDLaunchHandler : HMFObject <HMFLogging> {

	NSObject*<OS_dispatch_queue> _handlerQueue;
	NSMutableSet* _registeredRelaunchClients;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> handlerQueue;              //@synthesize handlerQueue=_handlerQueue - In the implementation block
@property (nonatomic,readonly) NSMutableSet * registeredRelaunchClients;               //@synthesize registeredRelaunchClients=_registeredRelaunchClients - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)sharedHandler;
+(id)relaunchPlistPath;
+(BOOL)_fileExistsAtPath:(id)arg1 ;
+(BOOL)_removeFileAtPath:(id)arg1 error:(id*)arg2 ;
+(BOOL)_writeDictionary:(id)arg1 toFileURL:(id)arg2 error:(id*)arg3 ;
+(int)_setJetsamPriorityUsingCommand:(int)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)handlerQueue;
-(void)registerForRelaunch:(id)arg1 ;
-(void)deregisterForRelaunch:(id)arg1 ;
-(NSMutableSet *)registeredRelaunchClients;
-(void)_updateOrRemoveRelaunchPlist;
-(void)_setJetsamPriorityElevated:(BOOL)arg1 ;
-(void)removePersistentRelaunchRegistrationsIfNecessary;
@end

