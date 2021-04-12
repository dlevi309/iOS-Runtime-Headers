/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
*/

#import <BiometricKit/BKOperation.h>

@class BKIdentity, NSData;

@interface BKExtendEnrollTouchIDOperation : BKOperation {

	BKIdentity* _identity;
	NSData* _credentialSet;

}

@property (assign,nonatomic,__weak) id<BKExtendEnrollTouchIDOperationDelegate> delegate; 
@property (nonatomic,retain) BKIdentity * identity;                                                   //@synthesize identity=_identity - In the implementation block
@property (nonatomic,copy) NSData * credentialSet;                                                    //@synthesize credentialSet=_credentialSet - In the implementation block
-(BKIdentity *)identity;
-(void)setIdentity:(BKIdentity *)arg1 ;
-(void)matchResult:(id)arg1 details:(id)arg2 client:(unsigned long long)arg3 ;
-(void)statusMessage:(unsigned)arg1 client:(unsigned long long)arg2 ;
-(void)homeButtonPressed:(unsigned long long)arg1 ;
-(void)startBioOperation:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(NSData *)credentialSet;
-(void)setCredentialSet:(NSData *)arg1 ;
@end

