/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellular.framework/SettingsCellular
*/


@interface PSAppDataUsagePolicy : NSObject {

	BOOL _cellularDataEnabled;
	BOOL _wifiDataEnabled;
	BOOL _isManaged;
	BOOL _modificationAllowed;

}

@property (assign,nonatomic) BOOL cellularDataEnabled;              //@synthesize cellularDataEnabled=_cellularDataEnabled - In the implementation block
@property (assign,nonatomic) BOOL wifiDataEnabled;                  //@synthesize wifiDataEnabled=_wifiDataEnabled - In the implementation block
@property (assign,nonatomic) BOOL isManaged;                        //@synthesize isManaged=_isManaged - In the implementation block
@property (assign,nonatomic) BOOL modificationAllowed;              //@synthesize modificationAllowed=_modificationAllowed - In the implementation block
-(id)init;
-(void)setCellularDataEnabled:(BOOL)arg1 ;
-(BOOL)isManaged;
-(void)setIsManaged:(BOOL)arg1 ;
-(BOOL)cellularDataEnabled;
-(BOOL)wifiDataEnabled;
-(void)setWifiDataEnabled:(BOOL)arg1 ;
-(BOOL)modificationAllowed;
-(void)setModificationAllowed:(BOOL)arg1 ;
@end

