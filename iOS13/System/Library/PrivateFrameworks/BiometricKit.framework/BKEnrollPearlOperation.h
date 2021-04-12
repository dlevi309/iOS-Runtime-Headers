/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
*/

#import <BiometricKit/BKEnrollOperation.h>

@class BKIdentity;

@interface BKEnrollPearlOperation : BKEnrollOperation {

	BOOL _clientToComplete;
	BKIdentity* _augmentedIdentity;

}

@property (assign,nonatomic,__weak) id<BKEnrollPearlOperationDelegate> delegate; 
@property (assign,nonatomic) BOOL clientToComplete;                                           //@synthesize clientToComplete=_clientToComplete - In the implementation block
@property (nonatomic,retain) BKIdentity * augmentedIdentity;                                  //@synthesize augmentedIdentity=_augmentedIdentity - In the implementation block
-(BOOL)completeWithError:(id*)arg1 ;
-(void)enrollUpdate:(id)arg1 client:(unsigned long long)arg2 ;
-(void)enrollFeedback:(id)arg1 client:(unsigned long long)arg2 ;
-(void)statusMessage:(unsigned)arg1 client:(unsigned long long)arg2 ;
-(id)optionsDictionaryWithError:(id*)arg1 ;
-(BOOL)startWithError:(id*)arg1 ;
-(BOOL)suspendWithError:(id*)arg1 ;
-(BOOL)resumeWithError:(id*)arg1 ;
-(BOOL)clientToComplete;
-(void)setClientToComplete:(BOOL)arg1 ;
-(BKIdentity *)augmentedIdentity;
-(void)setAugmentedIdentity:(BKIdentity *)arg1 ;
@end

