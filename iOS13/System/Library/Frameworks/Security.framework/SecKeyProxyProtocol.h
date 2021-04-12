/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Security.framework/Security
*/


@protocol SecKeyProxyProtocol
@required
-(void)initializeWithReply:(/*^block*/id)arg1;
-(void)getBlockSizeWithReply:(/*^block*/id)arg1;
-(void)getAttributesWithReply:(/*^block*/id)arg1;
-(void)getExternalRepresentationWithReply:(/*^block*/id)arg1;
-(void)getDescriptionWithReply:(/*^block*/id)arg1;
-(void)getAlgorithmIDWithReply:(/*^block*/id)arg1;
-(void)getPublicKey:(/*^block*/id)arg1;
-(void)performOperation:(long long)arg1 algorithm:(id)arg2 parameters:(id)arg3 reply:(/*^block*/id)arg4;

@end

