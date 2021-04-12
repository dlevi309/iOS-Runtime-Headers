/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSData, NSString, NSArray;

@interface PKPeerPaymentDocumentSubmissionRequest : PKPeerPaymentWebServiceRequest {

	BOOL _devSigned;
	NSData* _frontImageData;
	NSData* _backImageData;
	NSString* _documentCountryCode;
	unsigned long long _documentType;
	NSArray* _certificates;

}

@property (nonatomic,copy) NSData * frontImageData;                        //@synthesize frontImageData=_frontImageData - In the implementation block
@property (nonatomic,copy) NSData * backImageData;                         //@synthesize backImageData=_backImageData - In the implementation block
@property (nonatomic,copy) NSString * documentCountryCode;                 //@synthesize documentCountryCode=_documentCountryCode - In the implementation block
@property (assign,nonatomic) unsigned long long documentType;              //@synthesize documentType=_documentType - In the implementation block
@property (nonatomic,copy) NSArray * certificates;                         //@synthesize certificates=_certificates - In the implementation block
@property (assign,nonatomic) BOOL devSigned;                               //@synthesize devSigned=_devSigned - In the implementation block
-(NSArray *)certificates;
-(unsigned long long)documentType;
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 ;
-(void)setCertificates:(NSArray *)arg1 ;
-(NSData *)frontImageData;
-(void)setFrontImageData:(NSData *)arg1 ;
-(NSData *)backImageData;
-(void)setBackImageData:(NSData *)arg1 ;
-(NSString *)documentCountryCode;
-(void)setDocumentCountryCode:(NSString *)arg1 ;
-(void)setDocumentType:(unsigned long long)arg1 ;
-(BOOL)devSigned;
-(void)setDevSigned:(BOOL)arg1 ;
@end

