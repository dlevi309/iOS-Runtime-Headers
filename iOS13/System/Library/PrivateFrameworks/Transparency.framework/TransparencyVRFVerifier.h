/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/


@class VRFPublicKey;

@interface TransparencyVRFVerifier : NSObject {

	VRFPublicKey* _key;

}

@property (retain) VRFPublicKey * key;              //@synthesize key=_key - In the implementation block
@property (readonly) int vrfType; 
+(BOOL)verifyMessage:(id)arg1 salt:(id)arg2 output:(id)arg3 proof:(id)arg4 key:(id)arg5 error:(id*)arg6 ;
+(id)verifierOfType:(int)arg1 key:(id)arg2 ;
+(BOOL)verifyMessage:(id)arg1 output:(id)arg2 proof:(id)arg3 key:(id)arg4 error:(id*)arg5 ;
+(id)saltMessage:(id)arg1 salt:(id)arg2 ;
-(VRFPublicKey *)key;
-(id)initWithKey:(id)arg1 ;
-(void)setKey:(VRFPublicKey *)arg1 ;
-(int)vrfType;
-(BOOL)verifyMessage:(id)arg1 salt:(id)arg2 output:(id)arg3 proof:(id)arg4 error:(id*)arg5 ;
-(BOOL)verifyMessage:(id)arg1 output:(id)arg2 proof:(id)arg3 error:(id*)arg4 ;
@end

