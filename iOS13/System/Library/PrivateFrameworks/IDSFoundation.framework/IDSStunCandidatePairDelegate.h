/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


@protocol IDSStunCandidatePairDelegate <NSObject>
@required
-(void)candidatePair:(id)arg1 didReceiveSessionInfo:(id)arg2 success:(BOOL)arg3;
-(void)candidatePair:(id)arg1 didReceiveStunErrorResponse:(long long)arg2 errorCode:(unsigned short)arg3;
-(void)candidatePair:(id)arg1 didAddQREvent:(id)arg2;
-(void)disconnectCandidatePair:(id)arg1;
-(void)sendAllocbindRequest:(id)arg1 isRealloc:(BOOL)arg2 inResponseToNoSessionState:(BOOL)arg3;

@end

