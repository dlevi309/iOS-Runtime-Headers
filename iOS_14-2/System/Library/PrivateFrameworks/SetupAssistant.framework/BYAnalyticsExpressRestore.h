/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
*/


@interface BYAnalyticsExpressRestore : NSObject {

	BOOL _paneShown;
	BOOL _offeredBackup;
	unsigned long long _restoreChoice;

}

@property (assign,nonatomic) BOOL paneShown;                                //@synthesize paneShown=_paneShown - In the implementation block
@property (assign,nonatomic) unsigned long long restoreChoice;              //@synthesize restoreChoice=_restoreChoice - In the implementation block
@property (assign,nonatomic) BOOL offeredBackup;                            //@synthesize offeredBackup=_offeredBackup - In the implementation block
+(id)sharedInstance;
-(id)init;
-(BOOL)paneShown;
-(unsigned long long)restoreChoice;
-(BOOL)offeredBackup;
-(void)setPaneShown:(BOOL)arg1 ;
-(void)setRestoreChoice:(unsigned long long)arg1 ;
-(void)setOfferedBackup:(BOOL)arg1 ;
-(id)eventPayload;
@end

