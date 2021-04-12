/*
* Generated on Monday, March 1, 2021 at 2:35:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libacmobileshim.dylib
*/


@class ACFPrincipal, NSDate, NSString, NSData, NSNumber;

@interface ACMToken : NSObject {

	ACFPrincipal* _principal;
	NSDate* _creationDate;
	NSDate* _expirationDate;
	NSString* _nonce;
	NSData* _tokenData;
	NSString* _userPreferences;
	NSNumber* _personID;
	NSNumber* _isTwoStepVerificationRequired;

}

@property (retain) ACFPrincipal * principal;                              //@synthesize principal=_principal - In the implementation block
@property (retain) NSDate * creationDate;                                 //@synthesize creationDate=_creationDate - In the implementation block
@property (retain) NSDate * expirationDate; 
@property (nonatomic,copy) NSString * tokenString; 
@property (retain) NSData * tokenData;                                    //@synthesize tokenData=_tokenData - In the implementation block
@property (retain) NSString * nonce;                                      //@synthesize nonce=_nonce - In the implementation block
@property (retain) NSString * userPreferences;                            //@synthesize userPreferences=_userPreferences - In the implementation block
@property (retain) NSNumber * personID;                                   //@synthesize personID=_personID - In the implementation block
@property (retain) NSNumber * isTwoStepVerificationRequired;              //@synthesize isTwoStepVerificationRequired=_isTwoStepVerificationRequired - In the implementation block
+(id)tokenWithPrincipal:(id)arg1 creationDate:(id)arg2 tokenString:(id)arg3 ;
+(id)tokenWithPrincipal:(id)arg1 creationDate:(id)arg2 tokenData:(id)arg3 ;
-(void)dealloc;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSString *)nonce;
-(void)setNonce:(NSString *)arg1 ;
-(void)setUserPreferences:(NSString *)arg1 ;
-(NSString *)userPreferences;
-(NSNumber *)personID;
-(void)setPersonID:(NSNumber *)arg1 ;
-(NSString *)tokenString;
-(NSData *)tokenData;
-(void)setTokenData:(NSData *)arg1 ;
-(void)setPrincipal:(ACFPrincipal *)arg1 ;
-(ACFPrincipal *)principal;
-(void)setTokenString:(NSString *)arg1 ;
-(NSNumber *)isTwoStepVerificationRequired;
-(void)setIsTwoStepVerificationRequired:(NSNumber *)arg1 ;
@end

