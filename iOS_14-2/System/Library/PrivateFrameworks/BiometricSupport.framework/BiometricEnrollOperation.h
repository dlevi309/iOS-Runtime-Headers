/*
* Generated on Thursday, January 14, 2021 at 2:25:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiometricSupport.framework/BiometricSupport
*/

#import <BiometricSupport/BiometricSupport-Structs.h>
#import <BiometricSupport/BiometricOperation.h>

@interface BiometricEnrollOperation : BiometricOperation {

	SCD_Struct_Bi1 _authData;
	unsigned _userID;
	unsigned _processedFlags;

}

@property (assign,nonatomic) unsigned userID;                         //@synthesize userID=_userID - In the implementation block
@property (nonatomic,readonly) SCD_Struct_Bi1* authData; 
@property (assign,nonatomic) unsigned processedFlags;                 //@synthesize processedFlags=_processedFlags - In the implementation block
-(void)setUserID:(unsigned)arg1 ;
-(unsigned)userID;
-(id)init;
-(int)type;
-(unsigned)cancelledMessage;
-(SCD_Struct_Bi1*)authData;
-(unsigned)processedFlags;
-(void)setProcessedFlags:(unsigned)arg1 ;
@end

