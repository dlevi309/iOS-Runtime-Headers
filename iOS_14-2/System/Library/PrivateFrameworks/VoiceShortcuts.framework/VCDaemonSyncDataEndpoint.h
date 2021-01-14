/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/

#import <libobjc.A.dylib/VCSyncDataEndpoint.h>

@protocol OS_dispatch_queue, VCDatabaseProvider;
@class NSSet, NSObject, VCDaemonXPCEventHandler, NSMutableSet, NSString;

@interface VCDaemonSyncDataEndpoint : NSObject <VCSyncDataEndpoint> {

	NSObject*<OS_dispatch_queue> _queue;
	id<VCDatabaseProvider> _databaseProvider;
	VCDaemonXPCEventHandler* _eventHandler;
	NSMutableSet* _mutableSyncDataHandlers;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                   //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) id<VCDatabaseProvider> databaseProvider;              //@synthesize databaseProvider=_databaseProvider - In the implementation block
@property (nonatomic,readonly) VCDaemonXPCEventHandler * eventHandler;               //@synthesize eventHandler=_eventHandler - In the implementation block
@property (nonatomic,readonly) NSMutableSet * mutableSyncDataHandlers;               //@synthesize mutableSyncDataHandlers=_mutableSyncDataHandlers - In the implementation block
@property (nonatomic,readonly) NSSet * syncDataHandlers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(VCDaemonXPCEventHandler *)eventHandler;
-(NSMutableSet *)mutableSyncDataHandlers;
-(NSSet *)syncDataHandlers;
-(id<VCDatabaseProvider>)databaseProvider;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithDatabaseProvider:(id)arg1 eventHandler:(id)arg2 ;
@end

