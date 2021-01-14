/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKApplyWebServiceRequest.h>

@class NSString, NSURL, NSData, NSArray;

@interface PKApplyWebServiceDocumentSubmissionRequest : PKApplyWebServiceRequest {

	NSString* _applicationIdentifier;
	unsigned long long _featureIdentifier;
	NSURL* _baseURL;
	NSData* _frontImageData;
	NSData* _backImageData;
	NSString* _documentCountryCode;
	unsigned long long _documentType;
	NSArray* _certificates;

}

@property (nonatomic,copy) NSString * applicationIdentifier;                    //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long featureIdentifier;              //@synthesize featureIdentifier=_featureIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                                   //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,copy) NSData * frontImageData;                             //@synthesize frontImageData=_frontImageData - In the implementation block
@property (nonatomic,copy) NSData * backImageData;                              //@synthesize backImageData=_backImageData - In the implementation block
@property (nonatomic,copy) NSString * documentCountryCode;                      //@synthesize documentCountryCode=_documentCountryCode - In the implementation block
@property (assign,nonatomic) unsigned long long documentType;                   //@synthesize documentType=_documentType - In the implementation block
@property (nonatomic,copy) NSArray * certificates;                              //@synthesize certificates=_certificates - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(NSURL *)baseURL;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)certificates;
-(NSString *)applicationIdentifier;
-(unsigned long long)featureIdentifier;
-(NSData *)backImageData;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
-(void)setFeatureIdentifier:(unsigned long long)arg1 ;
-(NSData *)frontImageData;
-(void)setFrontImageData:(NSData *)arg1 ;
-(void)setBackImageData:(NSData *)arg1 ;
-(NSString *)documentCountryCode;
-(void)setDocumentCountryCode:(NSString *)arg1 ;
-(void)setDocumentType:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)documentType;
-(void)setCertificates:(NSArray *)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
@end

