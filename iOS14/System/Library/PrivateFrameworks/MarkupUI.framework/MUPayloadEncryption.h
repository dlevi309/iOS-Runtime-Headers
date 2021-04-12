/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
*/


@interface MUPayloadEncryption : NSObject {

	BOOL _keyInitialized;
	BOOL _haveKey;
	unsigned char _key[16];

}
+(id)sharedInstance;
-(id)decryptData:(id)arg1 ;
-(id)init;
-(id)encryptData:(id)arg1 ;
-(void)initializeKey;
@end

