/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Assistant/Plugins/FMIPSiriBackendPlugin.assistantBundle/FMIPSiriBackendPlugin
*/

#import <libobjc.A.dylib/AFSyncHandler.h>

@class FMIPSyncContent, _TtC8FMClient7Session, NSString;

@interface FMIPSiriDeviceSync : NSObject <AFSyncHandler> {

	FMIPSyncContent* _syncContent;
	_TtC8FMClient7Session* _clientSession;

}

@property (nonatomic,retain) FMIPSyncContent * syncContent;                      //@synthesize syncContent=_syncContent - In the implementation block
@property (nonatomic,retain) _TtC8FMClient7Session * clientSession;              //@synthesize clientSession=_clientSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)beginSyncWithInfo:(id)arg1 configuration:(id)arg2 ;
-(void)getChangeAfterAnchor:(id)arg1 changeInfo:(id)arg2 ;
-(void)syncDidEnd;
-(void)setClientSession:(_TtC8FMClient7Session *)arg1 ;
-(_TtC8FMClient7Session *)clientSession;
-(void)invalidateClientSession;
-(void)sync_ValidateSyncCacheWithInfo:(id)arg1 ;
-(id)sync_voiceAssistantSyncWithOutAnchor:(id*)arg1 ;
-(void)setSyncContent:(FMIPSyncContent *)arg1 ;
-(FMIPSyncContent *)syncContent;
-(void)validateSyncCacheWithInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

