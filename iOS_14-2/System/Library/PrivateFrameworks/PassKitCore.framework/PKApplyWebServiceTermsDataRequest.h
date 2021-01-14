/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKApplyWebServiceRequest.h>

@class NSURL, NSString;

@interface PKApplyWebServiceTermsDataRequest : PKApplyWebServiceRequest {

	NSURL* _baseURL;
	unsigned long long _featureIdentifier;
	NSString* _applicationIdentifier;
	NSString* _termsIdentifier;
	NSString* _termsDataFormat;

}

@property (nonatomic,retain) NSURL * baseURL;                                   //@synthesize baseURL=_baseURL - In the implementation block
@property (assign,nonatomic) unsigned long long featureIdentifier;              //@synthesize featureIdentifier=_featureIdentifier - In the implementation block
@property (nonatomic,copy) NSString * applicationIdentifier;                    //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * termsIdentifier;                          //@synthesize termsIdentifier=_termsIdentifier - In the implementation block
@property (nonatomic,copy) NSString * termsDataFormat;                          //@synthesize termsDataFormat=_termsDataFormat - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(NSURL *)baseURL;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)applicationIdentifier;
-(unsigned long long)featureIdentifier;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
-(void)setFeatureIdentifier:(unsigned long long)arg1 ;
-(NSString *)termsIdentifier;
-(void)setTermsIdentifier:(NSString *)arg1 ;
-(NSString *)termsDataFormat;
-(void)setTermsDataFormat:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
@end

