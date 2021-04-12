/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
*/

@class NSString;


@protocol SiriCoreSessionObject <NSObject>
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@required
-(NSString *)aceId;
-(void)setRefId:(id)arg1;
-(void)setAceId:(id)arg1;
-(NSString *)refId;
-(id)siriCore_serializedAceDataError:(id*)arg1;
-(BOOL)siriCore_bufferingAllowedDuringActiveSession;
-(BOOL)siriCore_isRetryable;
-(BOOL)siriCore_isRestartable;
-(BOOL)siriCore_isProvisional;
-(void)siriCore_logDiagnostics;
-(id)siriCore_requestId;
-(void)siriCore_setSessionRequestId:(id)arg1;
-(BOOL)siriCore_supportedByLocalSession;

@end

