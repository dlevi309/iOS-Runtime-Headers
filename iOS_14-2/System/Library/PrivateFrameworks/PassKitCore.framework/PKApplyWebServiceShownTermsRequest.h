/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKApplyWebServiceRequest.h>

@class NSString, NSURL;

@interface PKApplyWebServiceShownTermsRequest : PKApplyWebServiceRequest {

	NSString* _applicationIdentifier;
	NSString* _termsIdentifier;
	NSString* _termsType;
	NSURL* _baseURL;

}

@property (nonatomic,copy) NSString * applicationIdentifier;              //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * termsIdentifier;                    //@synthesize termsIdentifier=_termsIdentifier - In the implementation block
@property (nonatomic,copy) NSString * termsType;                          //@synthesize termsType=_termsType - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                             //@synthesize baseURL=_baseURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(NSURL *)baseURL;
-(NSString *)termsType;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)applicationIdentifier;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
-(NSString *)termsIdentifier;
-(void)setTermsIdentifier:(NSString *)arg1 ;
-(void)setTermsType:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
@end

