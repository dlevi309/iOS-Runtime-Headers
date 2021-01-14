/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


@protocol IDSStunCandidatePairDelegate <NSObject>
@required
-(void)candidatePair:(id)arg1 didReceiveSessionInfo:(id)arg2 success:(BOOL)arg3;
-(void)candidatePair:(id)arg1 didAddQREvent:(id)arg2;
-(void)candidatePair:(id)arg1 didReceiveStunErrorResponse:(long long)arg2 errorCode:(unsigned short)arg3;
-(void)disconnectCandidatePair:(id)arg1;
-(void)sendAllocbindRequest:(id)arg1 isRealloc:(BOOL)arg2 inResponseToNoSessionState:(BOOL)arg3;
-(void)sendProbingRequestWithoptions:(id)arg1 candidatePairToken:(id)arg2;

@end

