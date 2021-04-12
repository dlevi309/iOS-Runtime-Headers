/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(WFDatabaseResult *)result;
-(id)initWithResult:(id)arg1 ;
-(void)databaseResult:(id)arg1 didUpdateObjects:(id)arg2 inserted:(id)arg3 removed:(id)arg4 ;
-(BOOL)applyChanges:(id)arg1 fromSyncService:(id)arg2 error:(id*)arg3 ;
-(BOOL)deleteSyncedData:(id*)arg1 ;
@end

