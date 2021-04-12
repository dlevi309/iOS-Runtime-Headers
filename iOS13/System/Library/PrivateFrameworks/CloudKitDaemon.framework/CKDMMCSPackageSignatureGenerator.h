/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@interface CKDMMCSPackageSignatureGenerator : NSObject {

	BOOL _valid;
	void* _generator;

}

@property (assign,nonatomic) void* generator;                        //@synthesize generator=_generator - In the implementation block
@property (assign,getter=isValid,nonatomic) BOOL valid;              //@synthesize valid=_valid - In the implementation block
-(id)init;
-(void)dealloc;
-(BOOL)isValid;
-(void)updateWithData:(id)arg1 ;
-(void)setValid:(BOOL)arg1 ;
-(void*)generator;
-(id)dataByFinishingSignature;
-(void)setGenerator:(void*)arg1 ;
-(char*)_finishGenerator;
@end

