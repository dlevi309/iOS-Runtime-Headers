/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/

#import <VoiceShortcuts/VoiceShortcuts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/VCShortcutSyncService.h>

@class NSString, NSURL, VCCompanionSyncService;

@interface VCNRDeviceSyncService : NSObject <NSCopying, VCShortcutSyncService> {

	NSString* _syncServiceIdentifier;
	NSURL* _directoryURL;
	long long _protocolVersion;
	VCCompanionSyncService* _service;

}

@property (nonatomic,__weak,readonly) VCCompanionSyncService * service;              //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) long long protocolVersion;                            //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * syncServiceIdentifier;                //@synthesize syncServiceIdentifier=_syncServiceIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSURL * directoryURL;                            //@synthesize directoryURL=_directoryURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)protocolVersion;
-(void)requestFullResync;
-(unsigned long long)hash;
-(void)requestSync;
-(NSURL *)directoryURL;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(VCCompanionSyncService *)service;
-(NSString *)syncServiceIdentifier;
-(id)initWithCompanionSyncService:(id)arg1 device:(id)arg2 ;
@end

