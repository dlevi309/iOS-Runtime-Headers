/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)altDSID;
-(NSString *)mapsToken;
-(NSString *)mdmServerToken;
-(NSString *)authToken;
-(NSString *)personID;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(NSString *)fmfToken;
-(NSString *)fmfAppToken;
-(NSString *)fmipToken;
-(NSString *)cloudKitToken;
-(NSString *)fmipLostModeToken;
@end

