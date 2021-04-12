/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/


#import <Transparency/Transparency-Structs.h>
@class NSDictionary;

@interface TransparencySignatureVerifier : NSObject {

	BOOL _needsRefresh;
	NSDictionary* _trustedKeys;

}

@property (retain) NSDictionary * trustedKeys;              //@synthesize trustedKeys=_trustedKeys - In the implementation block
@property (assign) BOOL needsRefresh;                       //@synthesize needsRefresh=_needsRefresh - In the implementation block
+(BOOL)verifyMessage:(id)arg1 signature:(id)arg2 spkiHash:(id)arg3 trustedKeys:(id)arg4 algorithm:(CFStringRef)arg5 error:(id*)arg6 ;
+(const CFStringRef)secKeyAlgorithmForProtoAlgorithm:(int)arg1 ;
+(int)protoAlgorithmForSecKeyAlgorithm:(CFStringRef)arg1 ;
-(BOOL)needsRefresh;
-(void)setNeedsRefresh:(BOOL)arg1 ;
-(void)setTrustedKeys:(NSDictionary *)arg1 ;
-(id)initWithTrustedKeys:(id)arg1 ;
-(NSDictionary *)trustedKeys;
-(BOOL)verifyMessage:(id)arg1 signature:(id)arg2 spkiHash:(id)arg3 algorithm:(CFStringRef)arg4 error:(id*)arg5 ;
@end

