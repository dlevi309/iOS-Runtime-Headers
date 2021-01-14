/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSGlobalLink.h>

@interface IDSGFTGL : IDSGlobalLink
-(void)startWithOptions:(id)arg1 ;
-(void)_notifyDefaultUnderlyingLinkChanged:(id)arg1 error:(long long)arg2 ;
-(void)disconnectWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)_getQRAllocateType;
-(BOOL)_setupNewQRLinkIfNecessary:(id)arg1 ;
-(BOOL)_postProcessAllocbindResponse:(id)arg1 candidatePair:(id)arg2 candidatePairToken:(id)arg3 ;
@end

