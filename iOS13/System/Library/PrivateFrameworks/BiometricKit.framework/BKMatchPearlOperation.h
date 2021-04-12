/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)optionsDictionaryWithError:(id*)arg1 ;
-(id)matchResultInfoWithServerIdentity:(id)arg1 details:(id)arg2 ;
-(BOOL)startNewMatchAttemptWithError:(id*)arg1 ;
-(BOOL)enableAutoRetry:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)pauseFaceDetectTimer:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)longTimeout;
-(void)setLongTimeout:(BOOL)arg1 ;
-(BOOL)shouldAutoRetry;
-(void)setShouldAutoRetry:(BOOL)arg1 ;
@end

