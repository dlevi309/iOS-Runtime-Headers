/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
*/

#import <BiometricKit/BKOperation.h>

@class NSData;

@interface BKEnrollOperation : BKOperation {

	unsigned _userID;
	NSData* _credentialSet;

}

@property (assign,nonatomic,__weak) id<BKEnrollOperationDelegate> delegate; 
@property (assign,nonatomic) unsigned userID;                                            //@synthesize userID=_userID - In the implementation block
@property (nonatomic,copy) NSData * credentialSet;                                       //@synthesize credentialSet=_credentialSet - In the implementation block
-(unsigned)userID;
-(id)initWithDevice:(id)arg1 ;
-(void)setUserID:(unsigned)arg1 ;
-(void)enrollResult:(id)arg1 client:(unsigned long long)arg2 ;
-(void)enrollUpdate:(id)arg1 client:(unsigned long long)arg2 ;
-(void)enrollFeedback:(id)arg1 client:(unsigned long long)arg2 ;
-(void)statusMessage:(unsigned)arg1 client:(unsigned long long)arg2 ;
-(void)startBioOperation:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(id)optionsDictionaryWithError:(id*)arg1 ;
-(NSData *)credentialSet;
-(void)setCredentialSet:(NSData *)arg1 ;
@end

