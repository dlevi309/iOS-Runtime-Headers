/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/

#import <VoiceShortcuts/VCSyncDataHandler.h>
#import <libobjc.A.dylib/WFDatabaseResultObserver.h>

@class WFDatabaseResult;

@interface VCDatabaseSyncDataHandler : VCSyncDataHandler <WFDatabaseResultObserver> {

	WFDatabaseResult* _result;

}

@property (nonatomic,readonly) WFDatabaseResult * result;              //@synthesize result=_result - In the implementation block
+(Class)changeClass;
-(id)initWithResult:(id)arg1 ;
-(BOOL)applyChanges:(id)arg1 fromSyncService:(id)arg2 error:(id*)arg3 ;
-(BOOL)deleteSyncedData:(id*)arg1 ;
-(WFDatabaseResult *)result;
-(void)databaseResultDidChange:(id)arg1 ;
@end

