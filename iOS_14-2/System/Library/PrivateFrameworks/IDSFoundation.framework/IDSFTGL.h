/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSGlobalLink.h>

@interface IDSFTGL : IDSGlobalLink
-(void)startWithOptions:(id)arg1 ;
-(void)disconnectWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)sendSKEData:(id)arg1 ;
-(BOOL)_setupNewQRLinkIfNecessary:(id)arg1 ;
-(BOOL)_postProcessAllocbindResponse:(id)arg1 candidatePair:(id)arg2 candidatePairToken:(id)arg3 ;
-(void)setHasPendingAllocation:(BOOL)arg1 ;
-(void)setDefaultUnderlyingLink:(char)arg1 ;
-(void)_resetRetryCountForCandidatePair:(id)arg1 ;
@end

