/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
*/


@class NSString, NSDictionary;

@interface PBBridgeSatelliteAccountSignInContext : NSObject {

	NSString* _username;
	NSString* _password;
	NSDictionary* _acceptedTermsInfo;
	NSString* _pairingParentAltDSID;
	NSString* _pairingParentUsername;

}

@property (nonatomic,retain) NSString * username;                           //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) NSString * password;                           //@synthesize password=_password - In the implementation block
@property (nonatomic,retain) NSDictionary * acceptedTermsInfo;              //@synthesize acceptedTermsInfo=_acceptedTermsInfo - In the implementation block
@property (nonatomic,retain) NSString * pairingParentAltDSID;               //@synthesize pairingParentAltDSID=_pairingParentAltDSID - In the implementation block
@property (nonatomic,retain) NSString * pairingParentUsername;              //@synthesize pairingParentUsername=_pairingParentUsername - In the implementation block
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)password;
-(NSString *)username;
-(void)setPassword:(NSString *)arg1 ;
-(NSDictionary *)acceptedTermsInfo;
-(void)setAcceptedTermsInfo:(NSDictionary *)arg1 ;
-(NSString *)pairingParentAltDSID;
-(void)setPairingParentAltDSID:(NSString *)arg1 ;
-(NSString *)pairingParentUsername;
-(void)setPairingParentUsername:(NSString *)arg1 ;
@end

