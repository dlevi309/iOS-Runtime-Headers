/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
*/

@class NSString;


@protocol SiriCoreSessionObject <NSObject>
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@required
-(NSString *)aceId;
-(NSString *)refId;
-(void)setRefId:(id)arg1;
-(void)setAceId:(id)arg1;
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

