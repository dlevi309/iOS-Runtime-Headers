/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
*/

#import <BiometricKit/BKOperation.h>

@class NSNumber, NSData;

@interface BKMatchOperation : BKOperation {

	BOOL _stopOnSuccess;
	BOOL _captureOnly;
	long long _purpose;
	NSNumber* _userID;
	long long _priority;
	NSData* _credentialSet;
	long long _useCase;

}

@property (assign,nonatomic,__weak) id<BKMatchOperationDelegate> delegate; 
@property (assign,nonatomic) long long purpose;                                         //@synthesize purpose=_purpose - In the implementation block
@property (nonatomic,retain) NSNumber * userID;                                         //@synthesize userID=_userID - In the implementation block
@property (assign,nonatomic) long long priority;                                        //@synthesize priority=_priority - In the implementation block
@property (nonatomic,copy) NSData * credentialSet;                                      //@synthesize credentialSet=_credentialSet - In the implementation block
@property (assign,nonatomic) long long useCase;                                         //@synthesize useCase=_useCase - In the implementation block
@property (assign,nonatomic) BOOL stopOnSuccess;                                        //@synthesize stopOnSuccess=_stopOnSuccess - In the implementation block
@property (assign,nonatomic) BOOL captureOnly;                                          //@synthesize captureOnly=_captureOnly - In the implementation block
-(id)initWithDevice:(id)arg1 ;
-(void)matchResult:(id)arg1 details:(id)arg2 client:(unsigned long long)arg3 ;
-(void)statusMessage:(unsigned)arg1 client:(unsigned long long)arg2 ;
-(void)setUserID:(NSNumber *)arg1 ;
-(long long)purpose;
-(void)setPurpose:(long long)arg1 ;
-(NSNumber *)userID;
-(void)setCaptureOnly:(BOOL)arg1 ;
-(BOOL)captureOnly;
-(long long)useCase;
-(void)setStopOnSuccess:(BOOL)arg1 ;
-(void)setCredentialSet:(NSData *)arg1 ;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(void)dealloc;
-(void)startBioOperation:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(id)optionsDictionaryWithError:(id*)arg1 ;
-(NSData *)credentialSet;
-(id)matchResultInfoWithServerIdentity:(id)arg1 details:(id)arg2 ;
-(void)setUseCase:(long long)arg1 ;
-(BOOL)stopOnSuccess;
@end

