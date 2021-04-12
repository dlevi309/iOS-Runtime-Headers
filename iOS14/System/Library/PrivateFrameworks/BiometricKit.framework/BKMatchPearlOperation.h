/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
*/

#import <BiometricKit/BKMatchOperation.h>

@interface BKMatchPearlOperation : BKMatchOperation {

	BOOL _longTimeout;
	BOOL _shouldAutoRetry;

}

@property (assign,nonatomic,__weak) id<BKMatchPearlOperationDelegate> delegate; 
@property (assign,nonatomic) BOOL longTimeout;                                               //@synthesize longTimeout=_longTimeout - In the implementation block
@property (assign,nonatomic) BOOL shouldAutoRetry;                                           //@synthesize shouldAutoRetry=_shouldAutoRetry - In the implementation block
-(void)statusMessage:(unsigned)arg1 client:(unsigned long long)arg2 ;
-(void)statusMessage:(unsigned)arg1 details:(id)arg2 client:(unsigned long long)arg3 ;
-(BOOL)shouldAutoRetry;
-(BOOL)enableAutoRetry:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)startNewMatchAttemptWithError:(id*)arg1 ;
-(void)setShouldAutoRetry:(BOOL)arg1 ;
-(void)setLongTimeout:(BOOL)arg1 ;
-(id)optionsDictionaryWithError:(id*)arg1 ;
-(id)matchResultInfoWithServerIdentity:(id)arg1 details:(id)arg2 ;
-(BOOL)pauseFaceDetectTimer:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)longTimeout;
@end

