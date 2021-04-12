/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class WBSCyclerServiceProxy;

@interface WBSSafariCyclerConfigurationTool : NSObject {

	WBSCyclerServiceProxy* _cyclerProxy;

}
-(void)run;
-(id)init;
-(void)_printUsage;
-(void)_exitWithError:(id)arg1 ;
-(id)_commandWithName:(id)arg1 ;
-(void)_startCycler:(id)arg1 ;
-(void)_stopCycler:(id)arg1 ;
-(void)_resumeCycler:(id)arg1 ;
-(void)_setConfigurationOption:(id)arg1 ;
-(id)_supportedCommands;
-(void)_sendRequestToTest:(id)arg1 ;
-(void)_configureDevice:(id)arg1 ;
-(void)_fetchStatus:(id)arg1 ;
-(void)_waitForCyclerToFinish:(id)arg1 ;
-(id)_descriptionForErrorCode:(long long)arg1 ;
-(void)_runTest:(id)arg1 ;
-(id)_errorWithCode:(long long)arg1 ;
@end

