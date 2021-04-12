/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/


@interface WFHealthIssueOverrides : NSObject {

	BOOL _noInternetConnection;
	BOOL _hiddenNetwork;
	BOOL _commonSSID;
	BOOL _legacyPHY;
	BOOL _carrierNetwork;
	long long _securityOverride;

}

@property (assign,nonatomic) BOOL noInternetConnection;               //@synthesize noInternetConnection=_noInternetConnection - In the implementation block
@property (assign,nonatomic) BOOL hiddenNetwork;                      //@synthesize hiddenNetwork=_hiddenNetwork - In the implementation block
@property (assign,nonatomic) BOOL commonSSID;                         //@synthesize commonSSID=_commonSSID - In the implementation block
@property (assign,nonatomic) BOOL legacyPHY;                          //@synthesize legacyPHY=_legacyPHY - In the implementation block
@property (assign,nonatomic) BOOL carrierNetwork;                     //@synthesize carrierNetwork=_carrierNetwork - In the implementation block
@property (assign,nonatomic) long long securityOverride;              //@synthesize securityOverride=_securityOverride - In the implementation block
-(BOOL)hiddenNetwork;
-(long long)securityOverride;
-(BOOL)noInternetConnection;
-(BOOL)legacyPHY;
-(BOOL)commonSSID;
-(BOOL)carrierNetwork;
-(void)setNoInternetConnection:(BOOL)arg1 ;
-(void)setHiddenNetwork:(BOOL)arg1 ;
-(void)setCommonSSID:(BOOL)arg1 ;
-(void)setLegacyPHY:(BOOL)arg1 ;
-(void)setCarrierNetwork:(BOOL)arg1 ;
-(void)setSecurityOverride:(long long)arg1 ;
@end

