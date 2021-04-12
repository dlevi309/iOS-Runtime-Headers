/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSURL, NSArray, NSString;

@interface PKPaymentProvisioningResponse : PKPaymentWebServiceResponse {

	BOOL _willProvisionWithAuthenticationDisabled;
	NSURL* _passURL;
	NSArray* _moreInfoURLs;
	NSString* _ownershipToken;
	NSString* _ownershipTokenIdentifier;

}

@property (nonatomic,copy) NSURL * passURL;                                               //@synthesize passURL=_passURL - In the implementation block
@property (nonatomic,copy,readonly) NSArray * moreInfoURLs;                               //@synthesize moreInfoURLs=_moreInfoURLs - In the implementation block
@property (nonatomic,readonly) BOOL willProvisionWithAuthenticationDisabled;              //@synthesize willProvisionWithAuthenticationDisabled=_willProvisionWithAuthenticationDisabled - In the implementation block
@property (nonatomic,copy,readonly) NSString * ownershipToken;                            //@synthesize ownershipToken=_ownershipToken - In the implementation block
@property (nonatomic,copy,readonly) NSString * ownershipTokenIdentifier;                  //@synthesize ownershipTokenIdentifier=_ownershipTokenIdentifier - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSURL *)passURL;
-(void)setPassURL:(NSURL *)arg1 ;
-(NSString *)ownershipTokenIdentifier;
-(NSArray *)moreInfoURLs;
-(BOOL)willProvisionWithAuthenticationDisabled;
-(NSString *)ownershipToken;
@end

