/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@class NSData, NSDate, NSString;

@interface ICDelegationPlayInfoResponseToken : NSObject {

	NSData* _tokenData;
	NSDate* _expirationDate;
	NSString* _storefrontIdentifier;

}

@property (nonatomic,copy) NSData * tokenData;                           //@synthesize tokenData=_tokenData - In the implementation block
@property (nonatomic,copy) NSDate * expirationDate;                      //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy) NSString * storefrontIdentifier;              //@synthesize storefrontIdentifier=_storefrontIdentifier - In the implementation block
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSData *)tokenData;
-(NSString *)storefrontIdentifier;
-(void)setStorefrontIdentifier:(NSString *)arg1 ;
-(void)setTokenData:(NSData *)arg1 ;
@end

