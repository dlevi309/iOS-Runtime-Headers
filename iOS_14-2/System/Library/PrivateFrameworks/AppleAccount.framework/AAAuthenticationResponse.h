/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/

#import <AppleAccount/AAResponse.h>

@class NSDictionary, NSString;

@interface AAAuthenticationResponse : AAResponse {

	NSDictionary* _tokens;
	NSDictionary* _appleAccount;

}

@property (nonatomic,readonly) NSString * fmfToken; 
@property (nonatomic,readonly) NSString * fmfAppToken; 
@property (nonatomic,readonly) NSString * fmipToken; 
@property (nonatomic,readonly) NSString * authToken; 
@property (nonatomic,readonly) NSString * mapsToken; 
@property (nonatomic,readonly) NSString * cloudKitToken; 
@property (nonatomic,readonly) NSString * fmipLostModeToken; 
@property (nonatomic,readonly) NSString * personID; 
@property (nonatomic,readonly) NSString * altDSID; 
@property (nonatomic,readonly) NSString * mdmServerToken; 
-(NSString *)authToken;
-(NSString *)altDSID;
-(NSString *)mapsToken;
-(NSString *)mdmServerToken;
-(NSString *)fmfToken;
-(NSString *)personID;
-(NSString *)fmipLostModeToken;
-(NSString *)fmfAppToken;
-(NSString *)cloudKitToken;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(NSString *)fmipToken;
@end

