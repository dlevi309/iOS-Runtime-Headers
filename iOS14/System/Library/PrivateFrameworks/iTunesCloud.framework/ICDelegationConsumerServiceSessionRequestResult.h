/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@class ICDelegateToken, NSError, NSString;

@interface ICDelegationConsumerServiceSessionRequestResult : NSObject {

	ICDelegateToken* _delegateToken;
	NSError* _resultError;
	NSString* _storefrontIdentifier;

}

@property (nonatomic,copy,readonly) ICDelegateToken * delegateToken;              //@synthesize delegateToken=_delegateToken - In the implementation block
@property (nonatomic,copy,readonly) NSError * resultError;                        //@synthesize resultError=_resultError - In the implementation block
@property (nonatomic,copy,readonly) NSString * storefrontIdentifier;              //@synthesize storefrontIdentifier=_storefrontIdentifier - In the implementation block
-(NSString *)storefrontIdentifier;
-(ICDelegateToken *)delegateToken;
-(id)initWithDelegateToken:(id)arg1 storefrontIdentifier:(id)arg2 resultError:(id)arg3 ;
-(NSError *)resultError;
@end

