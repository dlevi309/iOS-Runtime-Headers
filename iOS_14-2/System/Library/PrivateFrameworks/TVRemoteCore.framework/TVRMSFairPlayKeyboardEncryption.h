/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


#import <TVRemoteCore/TVRemoteCore-Structs.h>
@class NSData;

@interface TVRMSFairPlayKeyboardEncryption : NSObject {

	NSData* _challenge;
	BOOL _certIsTrusted;
	SecKeyRef _pubKeyRef;

}
-(BOOL)isTrusted;
-(void)reset;
-(void)dealloc;
-(id)_convertDataToString:(id)arg1 ;
-(id)_convertStringToData:(id)arg1 ;
-(BOOL)_verifyCert:(id)arg1 ;
-(id)encryptString:(id)arg1 ;
-(void)setLeafString:(id)arg1 ;
-(void)setChallengeString:(id)arg1 ;
@end

