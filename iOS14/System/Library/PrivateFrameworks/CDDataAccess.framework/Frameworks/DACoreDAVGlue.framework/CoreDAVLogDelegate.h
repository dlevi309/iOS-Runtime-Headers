/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DACoreDAVGlue.framework/DACoreDAVGlue
*/


@protocol CoreDAVLogDelegate <NSObject>
@optional
-(id)logHandle;
-(void)coreDAVLogRequestBody:(id)arg1;
-(void)coreDAVLogResponseBody:(id)arg1;
-(long long)coreDAVLogLevel;
-(long long)coreDAVOutputLevel;
-(void)coreDAVLogDiagnosticMessage:(id)arg1 atLevel:(long long)arg2;

@required
-(BOOL)shouldLogTransmittedData;
-(void)coreDAVLogTransmittedDataPartial:(id)arg1;
-(void)coreDAVTransmittedDataFinished;

@end

