/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/


@class ECRawMessageHeaders, NSData, NSArray;

@interface ECDKIMVerificationContext : NSObject {

	BOOL _requireFullBodySignature;
	ECRawMessageHeaders* _headers;
	NSData* _bodyData;
	NSArray* _dkimSignatureHeaders;

}

@property (nonatomic,copy) NSArray * dkimSignatureHeaders;                 //@synthesize dkimSignatureHeaders=_dkimSignatureHeaders - In the implementation block
@property (nonatomic,readonly) ECRawMessageHeaders * headers;              //@synthesize headers=_headers - In the implementation block
@property (nonatomic,copy,readonly) NSData * bodyData;                     //@synthesize bodyData=_bodyData - In the implementation block
@property (assign,nonatomic) BOOL requireFullBodySignature;                //@synthesize requireFullBodySignature=_requireFullBodySignature - In the implementation block
-(NSData *)bodyData;
-(ECRawMessageHeaders *)headers;
-(void)setDkimSignatureHeaders:(NSArray *)arg1 ;
-(id)initWithHeaders:(id)arg1 bodyData:(id)arg2 dkimSignatureHeaders:(id)arg3 ;
-(void)removeDKIMSignatureHeaders:(id)arg1 ;
-(NSArray *)dkimSignatureHeaders;
-(BOOL)requireFullBodySignature;
-(void)setRequireFullBodySignature:(BOOL)arg1 ;
@end

