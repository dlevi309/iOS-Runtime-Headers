/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/


@class NSString;

@interface AALoginResponseiCloudTokens : NSObject {

	NSString* _authToken;
	NSString* _fmipAuthToken;
	NSString* _fmipAppToken;
	NSString* _fmipLostModeToken;
	NSString* _fmipSiriToken;
	NSString* _fmfToken;
	NSString* _fmfAppToken;
	NSString* _cloudKitToken;
	NSString* _mdmServerToken;
	NSString* _mapsToken;
	NSString* _searchPartyToken;
	NSString* _keyTransparencyToken;

}

@property (nonatomic,readonly) NSString * authToken;                         //@synthesize authToken=_authToken - In the implementation block
@property (nonatomic,readonly) NSString * fmipAuthToken;                     //@synthesize fmipAuthToken=_fmipAuthToken - In the implementation block
@property (nonatomic,readonly) NSString * fmipAppToken;                      //@synthesize fmipAppToken=_fmipAppToken - In the implementation block
@property (nonatomic,readonly) NSString * fmipLostModeToken;                 //@synthesize fmipLostModeToken=_fmipLostModeToken - In the implementation block
@property (nonatomic,readonly) NSString * fmipSiriToken;                     //@synthesize fmipSiriToken=_fmipSiriToken - In the implementation block
@property (nonatomic,readonly) NSString * fmfToken;                          //@synthesize fmfToken=_fmfToken - In the implementation block
@property (nonatomic,readonly) NSString * fmfAppToken;                       //@synthesize fmfAppToken=_fmfAppToken - In the implementation block
@property (nonatomic,readonly) NSString * cloudKitToken;                     //@synthesize cloudKitToken=_cloudKitToken - In the implementation block
@property (nonatomic,readonly) NSString * mdmServerToken;                    //@synthesize mdmServerToken=_mdmServerToken - In the implementation block
@property (nonatomic,readonly) NSString * mapsToken;                         //@synthesize mapsToken=_mapsToken - In the implementation block
@property (nonatomic,readonly) NSString * searchPartyToken;                  //@synthesize searchPartyToken=_searchPartyToken - In the implementation block
@property (nonatomic,readonly) NSString * keyTransparencyToken;              //@synthesize keyTransparencyToken=_keyTransparencyToken - In the implementation block
-(NSString *)authToken;
-(id)initWithTokens:(id)arg1 ;
-(NSString *)mapsToken;
-(NSString *)mdmServerToken;
-(NSString *)fmfToken;
-(NSString *)fmipAuthToken;
-(NSString *)fmipAppToken;
-(NSString *)fmipLostModeToken;
-(NSString *)fmipSiriToken;
-(NSString *)fmfAppToken;
-(NSString *)cloudKitToken;
-(NSString *)searchPartyToken;
-(NSString *)keyTransparencyToken;
@end

