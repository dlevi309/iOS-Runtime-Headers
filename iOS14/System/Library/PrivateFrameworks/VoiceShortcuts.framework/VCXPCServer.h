/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/NSXPCConnectionDelegate.h>

@protocol VCDatabaseProvider, VCSyncDataEndpoint;
@class VCCoreDuetListener, VCVoiceShortcutManager, WFTriggerManager, NSXPCListener, VCCKShortcutSyncCoordinator, NSXPCListenerEndpoint, NSString;

@interface VCXPCServer : NSObject <NSXPCListenerDelegate, NSXPCConnectionDelegate> {

	BOOL _skipEntitlementsCheck;
	VCCoreDuetListener* _coreDuetListener;
	VCVoiceShortcutManager* _voiceShortcutManager;
	WFTriggerManager* _triggerManager;
	NSXPCListener* _xpcListener;
	id<VCDatabaseProvider> _databaseProvider;
	VCCKShortcutSyncCoordinator* _syncCoordinator;
	id<VCSyncDataEndpoint> _syncDataEndpoint;

}

@property (nonatomic,readonly) BOOL skipEntitlementsCheck;                                 //@synthesize skipEntitlementsCheck=_skipEntitlementsCheck - In the implementation block
@property (nonatomic,readonly) NSXPCListener * xpcListener;                                //@synthesize xpcListener=_xpcListener - In the implementation block
@property (nonatomic,readonly) id<VCDatabaseProvider> databaseProvider;                    //@synthesize databaseProvider=_databaseProvider - In the implementation block
@property (nonatomic,readonly) VCCoreDuetListener * coreDuetListener;                      //@synthesize coreDuetListener=_coreDuetListener - In the implementation block
@property (nonatomic,readonly) VCCKShortcutSyncCoordinator * syncCoordinator;              //@synthesize syncCoordinator=_syncCoordinator - In the implementation block
@property (nonatomic,readonly) id<VCSyncDataEndpoint> syncDataEndpoint;                    //@synthesize syncDataEndpoint=_syncDataEndpoint - In the implementation block
@property (nonatomic,readonly) WFTriggerManager * triggerManager;                          //@synthesize triggerManager=_triggerManager - In the implementation block
@property (nonatomic,readonly) NSXPCListenerEndpoint * endpoint; 
@property (nonatomic,readonly) VCVoiceShortcutManager * voiceShortcutManager;              //@synthesize voiceShortcutManager=_voiceShortcutManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDatabaseProvider:(id)arg1 coreDuetListener:(id)arg2 syncCoordinator:(id)arg3 syncDataEndpoint:(id)arg4 ;
-(VCVoiceShortcutManager *)voiceShortcutManager;
-(VCCKShortcutSyncCoordinator *)syncCoordinator;
-(NSXPCListenerEndpoint *)endpoint;
-(id<VCDatabaseProvider>)databaseProvider;
-(VCCoreDuetListener *)coreDuetListener;
-(id)initWithUnsecuredAnonymousListenerAndDatabaseProvider:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(BOOL)skipEntitlementsCheck;
-(id)initWithXPCListener:(id)arg1 databaseProvider:(id)arg2 coreDuetListener:(id)arg3 syncCoordinator:(id)arg4 syncDataEndpoint:(id)arg5 ;
-(WFTriggerManager *)triggerManager;
-(NSXPCListener *)xpcListener;
-(id<VCSyncDataEndpoint>)syncDataEndpoint;
-(id)exportedXPCInterface;
@end

