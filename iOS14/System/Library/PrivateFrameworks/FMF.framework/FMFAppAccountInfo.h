/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMF.framework/FMF
*/


@class NSString;

@interface FMFAppAccountInfo : NSObject {

	NSString* _dsid;
	NSString* _username;
	NSString* _appServerHost;
	NSString* _appAuthToken;
	long long _appAuthTokenStatus;
	NSString* _legacyDsid;
	NSString* _legacyUsername;

}

@property (nonatomic,retain) NSString * dsid;                           //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,retain) NSString * username;                       //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) NSString * appServerHost;                  //@synthesize appServerHost=_appServerHost - In the implementation block
@property (nonatomic,retain) NSString * appAuthToken;                   //@synthesize appAuthToken=_appAuthToken - In the implementation block
@property (assign,nonatomic) long long appAuthTokenStatus;              //@synthesize appAuthTokenStatus=_appAuthTokenStatus - In the implementation block
@property (nonatomic,retain) NSString * legacyDsid;                     //@synthesize legacyDsid=_legacyDsid - In the implementation block
@property (nonatomic,retain) NSString * legacyUsername;                 //@synthesize legacyUsername=_legacyUsername - In the implementation block
-(NSString *)dsid;
-(void)setDsid:(NSString *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
-(id)description;
-(NSString *)appAuthToken;
-(long long)appAuthTokenStatus;
-(NSString *)appServerHost;
-(NSString *)legacyDsid;
-(NSString *)legacyUsername;
-(void)setAppServerHost:(NSString *)arg1 ;
-(void)setAppAuthToken:(NSString *)arg1 ;
-(void)setAppAuthTokenStatus:(long long)arg1 ;
-(void)setLegacyDsid:(NSString *)arg1 ;
-(void)setLegacyUsername:(NSString *)arg1 ;
@end

