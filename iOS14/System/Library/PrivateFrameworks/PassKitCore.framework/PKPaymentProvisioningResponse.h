/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSURL, NSArray, PKContactInformation, NSString;

@interface PKPaymentProvisioningResponse : PKPaymentWebServiceResponse {

	BOOL _willProvisionWithAuthenticationDisabled;
	NSURL* _passURL;
	NSArray* _moreInfoURLs;
	PKContactInformation* _idmsContactInformation;
	NSString* _ownershipToken;
	NSString* _ownershipTokenIdentifier;

}

@property (nonatomic,copy) NSURL * passURL;                                                //@synthesize passURL=_passURL - In the implementation block
@property (nonatomic,copy,readonly) NSArray * moreInfoURLs;                                //@synthesize moreInfoURLs=_moreInfoURLs - In the implementation block
@property (nonatomic,readonly) BOOL willProvisionWithAuthenticationDisabled;               //@synthesize willProvisionWithAuthenticationDisabled=_willProvisionWithAuthenticationDisabled - In the implementation block
@property (nonatomic,readonly) PKContactInformation * idmsContactInformation;              //@synthesize idmsContactInformation=_idmsContactInformation - In the implementation block
@property (nonatomic,copy,readonly) NSString * ownershipToken;                             //@synthesize ownershipToken=_ownershipToken - In the implementation block
@property (nonatomic,copy,readonly) NSString * ownershipTokenIdentifier;                   //@synthesize ownershipTokenIdentifier=_ownershipTokenIdentifier - In the implementation block
-(NSString *)ownershipTokenIdentifier;
-(NSURL *)passURL;
-(id)initWithData:(id)arg1 ;
-(void)setPassURL:(NSURL *)arg1 ;
-(NSString *)ownershipToken;
-(PKContactInformation *)idmsContactInformation;
-(NSArray *)moreInfoURLs;
-(BOOL)willProvisionWithAuthenticationDisabled;
@end

