/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithDevice:(id)arg1 ;
-(void)enrollUpdate:(id)arg1 client:(unsigned long long)arg2 ;
-(void)statusMessage:(unsigned)arg1 client:(unsigned long long)arg2 ;
-(void)setUserID:(unsigned)arg1 ;
-(unsigned)userID;
-(void)enrollResult:(id)arg1 client:(unsigned long long)arg2 ;
-(void)statusMessage:(unsigned)arg1 details:(id)arg2 client:(unsigned long long)arg3 ;
-(void)enrollFeedback:(id)arg1 client:(unsigned long long)arg2 ;
-(void)setCredentialSet:(NSData *)arg1 ;
-(void)startBioOperation:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(id)optionsDictionaryWithError:(id*)arg1 ;
-(NSData *)credentialSet;
@end

