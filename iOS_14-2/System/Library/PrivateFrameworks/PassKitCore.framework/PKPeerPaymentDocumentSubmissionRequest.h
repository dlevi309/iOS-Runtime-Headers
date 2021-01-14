/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)devSigned;
-(NSData *)backImageData;
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 ;
-(NSData *)frontImageData;
-(void)setFrontImageData:(NSData *)arg1 ;
-(void)setBackImageData:(NSData *)arg1 ;
-(NSString *)documentCountryCode;
-(void)setDocumentCountryCode:(NSString *)arg1 ;
-(void)setDocumentType:(unsigned long long)arg1 ;
-(unsigned long long)documentType;
-(void)setCertificates:(NSArray *)arg1 ;
-(void)setDevSigned:(BOOL)arg1 ;
@end

