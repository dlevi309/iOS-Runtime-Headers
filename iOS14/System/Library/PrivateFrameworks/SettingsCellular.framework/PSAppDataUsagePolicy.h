/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isManaged;
-(id)init;
-(void)setCellularDataEnabled:(BOOL)arg1 ;
-(void)setIsManaged:(BOOL)arg1 ;
-(BOOL)cellularDataEnabled;
-(void)setModificationAllowed:(BOOL)arg1 ;
-(BOOL)wifiDataEnabled;
-(void)setWifiDataEnabled:(BOOL)arg1 ;
-(BOOL)modificationAllowed;
@end

