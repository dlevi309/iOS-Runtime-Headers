/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@interface CKDMMCSPackageSignatureGenerator : NSObject {

	BOOL _valid;
	void* _generator;

}

@property (assign,nonatomic) void* generator;                        //@synthesize generator=_generator - In the implementation block
@property (assign,getter=isValid,nonatomic) BOOL valid;              //@synthesize valid=_valid - In the implementation block
-(void)setValid:(BOOL)arg1 ;
-(id)init;
-(void)updateWithData:(id)arg1 ;
-(id)dataByFinishingSignature;
-(BOOL)isValid;
-(void)setGenerator:(void*)arg1 ;
-(void*)generator;
-(void)dealloc;
-(char*)_finishGenerator;
@end

