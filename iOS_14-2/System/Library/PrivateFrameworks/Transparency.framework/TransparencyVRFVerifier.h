/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithKey:(id)arg1 ;
-(VRFPublicKey *)key;
-(int)vrfType;
-(void)setKey:(VRFPublicKey *)arg1 ;
-(BOOL)verifyMessage:(id)arg1 salt:(id)arg2 output:(id)arg3 proof:(id)arg4 error:(id*)arg5 ;
-(BOOL)verifyMessage:(id)arg1 output:(id)arg2 proof:(id)arg3 error:(id*)arg4 ;
@end

