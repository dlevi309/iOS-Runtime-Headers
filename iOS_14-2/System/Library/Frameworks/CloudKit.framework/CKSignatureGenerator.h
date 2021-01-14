/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setValid:(BOOL)arg1 ;
-(id)init;
-(void)updateWithData:(id)arg1 ;
-(char*)_newSignatureByFinishingGenerator;
-(void)updateWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)dataByFinishingSignature;
-(BOOL)isValid;
-(void)setGenerator:(void*)arg1 ;
-(void*)generator;
-(void)dealloc;
@end

