/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
*/


@class NSData, NSString;

@interface ASTSealablePayload : NSObject {

	BOOL _sealed;
	NSData* _payload;
	NSString* _base64Signature;
	NSData* _signature;

}

@property (nonatomic,retain) NSData * payload;                         //@synthesize payload=_payload - In the implementation block
@property (nonatomic,retain) NSString * base64Signature;               //@synthesize base64Signature=_base64Signature - In the implementation block
@property (nonatomic,retain) NSData * signature;                       //@synthesize signature=_signature - In the implementation block
@property (assign,getter=isSealed,nonatomic) BOOL sealed;              //@synthesize sealed=_sealed - In the implementation block
-(id)description;
-(void)setPayload:(NSData *)arg1 ;
-(NSData *)payload;
-(NSData *)signature;
-(void)setSignature:(NSData *)arg1 ;
-(NSString *)base64Signature;
-(id)initWithPayload:(id)arg1 signature:(id)arg2 ;
-(id)generatePayload;
-(BOOL)isSealed;
-(BOOL)sealWithPayloadSigner:(/*^block*/id)arg1 error:(id*)arg2 ;
-(void)setBase64Signature:(NSString *)arg1 ;
-(void)setSealed:(BOOL)arg1 ;
-(id)sealedDescription;
@end

