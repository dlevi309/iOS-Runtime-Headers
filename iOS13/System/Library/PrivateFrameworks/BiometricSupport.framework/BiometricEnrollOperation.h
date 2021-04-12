/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(int)type;
-(unsigned)userID;
-(void)setUserID:(unsigned)arg1 ;
-(unsigned)cancelledMessage;
-(SCD_Struct_Bi1*)authData;
-(unsigned)processedFlags;
-(void)setProcessedFlags:(unsigned)arg1 ;
@end

