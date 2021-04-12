/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/


@interface CKSignatureGenerator : NSObject {

	BOOL _valid;
	void* _generator;

}

@property (assign,nonatomic) void* generator;                        //@synthesize generator=_generator - In the implementation block
@property (assign,getter=isValid,nonatomic) BOOL valid;              //@synthesize valid=_valid - In the implementation block
+(BOOL)isValidSignature:(id)arg1 ;
+(id)signatureWithFileDescriptor:(int)arg1 error:(id*)arg2 ;
+(BOOL)isValidV2Signature:(id)arg1 ;
+(id)signatureForStreamingAsset;
-(id)init;
-(void)dealloc;
-(BOOL)isValid;
-(void)updateWithData:(id)arg1 ;
-(char*)_newSignatureByFinishingGenerator;
-(void)setValid:(BOOL)arg1 ;
-(void*)generator;
-(void)updateWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)dataByFinishingSignature;
-(void)setGenerator:(void*)arg1 ;
@end

