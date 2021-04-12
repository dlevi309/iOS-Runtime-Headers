/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/


@class _SFECKeyPair, _SFECPublicKey;

@interface _SFECDHKeySource : NSObject {

	id _ecdhKeySourceInternal;

}

@property (nonatomic,retain) _SFECKeyPair * localKeyPair; 
@property (nonatomic,retain) _SFECPublicKey * remotePublicKey; 
-(_SFECPublicKey *)remotePublicKey;
-(void)setRemotePublicKey:(_SFECPublicKey *)arg1 ;
-(_SFECKeyPair *)localKeyPair;
-(id)initWithLocalKeyPair:(id)arg1 remotePublickKey:(id)arg2 ;
-(void)setLocalKeyPair:(_SFECKeyPair *)arg1 ;
@end

