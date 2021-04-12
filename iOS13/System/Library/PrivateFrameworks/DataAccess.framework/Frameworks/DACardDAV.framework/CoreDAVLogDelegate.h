/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DACardDAV
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

