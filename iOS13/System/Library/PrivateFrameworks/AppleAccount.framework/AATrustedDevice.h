/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/


@class NSString;

@interface AATrustedDevice : NSObject {

	BOOL _fmipEnabled;
	BOOL _currentDevice;
	BOOL _showFMIPLink;
	BOOL _showBackupRow;
	BOOL _showFMIPRow;
	BOOL _injectNativeHeader;
	NSString* _deviceID;
	NSString* _name;
	NSString* _model;
	NSString* _osVersion;
	NSString* _modelDisplayName;
	NSString* _modelSmallPhotoURL3x;
	NSString* _modelSmallPhotoURL2x;
	NSString* _modelSmallPhotoURL1x;
	NSString* _modelLargePhotoURL3x;
	NSString* _modelLargePhotoURL2x;
	NSString* _modelLargePhotoURL1x;
	NSString* _deviceDetailUri;
	NSString* _deviceDetailHttpMethod;
	NSString* _FMIPDeviceID;
	NSString* _detailDeviceName;
	NSString* _detailSubLabel;
	NSString* _deviceQualifiedClass;
	NSString* _rawLatestBackup;
	NSString* _backupUUID;

}

@property (nonatomic,readonly) NSString * deviceID;                            //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * model;                               //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) NSString * osVersion;                           //@synthesize osVersion=_osVersion - In the implementation block
@property (nonatomic,readonly) NSString * modelDisplayName;                    //@synthesize modelDisplayName=_modelDisplayName - In the implementation block
@property (nonatomic,readonly) NSString * modelSmallPhotoURL3x;                //@synthesize modelSmallPhotoURL3x=_modelSmallPhotoURL3x - In the implementation block
@property (nonatomic,readonly) NSString * modelSmallPhotoURL2x;                //@synthesize modelSmallPhotoURL2x=_modelSmallPhotoURL2x - In the implementation block
@property (nonatomic,readonly) NSString * modelSmallPhotoURL1x;                //@synthesize modelSmallPhotoURL1x=_modelSmallPhotoURL1x - In the implementation block
@property (nonatomic,readonly) NSString * modelLargePhotoURL3x;                //@synthesize modelLargePhotoURL3x=_modelLargePhotoURL3x - In the implementation block
@property (nonatomic,readonly) NSString * modelLargePhotoURL2x;                //@synthesize modelLargePhotoURL2x=_modelLargePhotoURL2x - In the implementation block
@property (nonatomic,readonly) NSString * modelLargePhotoURL1x;                //@synthesize modelLargePhotoURL1x=_modelLargePhotoURL1x - In the implementation block
@property (nonatomic,readonly) NSString * deviceDetailUri;                     //@synthesize deviceDetailUri=_deviceDetailUri - In the implementation block
@property (nonatomic,readonly) NSString * deviceDetailHttpMethod;              //@synthesize deviceDetailHttpMethod=_deviceDetailHttpMethod - In the implementation block
@property (nonatomic,readonly) BOOL fmipEnabled;                               //@synthesize fmipEnabled=_fmipEnabled - In the implementation block
@property (nonatomic,readonly) BOOL currentDevice;                             //@synthesize currentDevice=_currentDevice - In the implementation block
@property (nonatomic,readonly) BOOL showFMIPLink;                              //@synthesize showFMIPLink=_showFMIPLink - In the implementation block
@property (nonatomic,readonly) BOOL showBackupRow;                             //@synthesize showBackupRow=_showBackupRow - In the implementation block
@property (nonatomic,readonly) BOOL showFMIPRow;                               //@synthesize showFMIPRow=_showFMIPRow - In the implementation block
@property (nonatomic,readonly) BOOL injectNativeHeader;                        //@synthesize injectNativeHeader=_injectNativeHeader - In the implementation block
@property (nonatomic,readonly) NSString * FMIPDeviceID;                        //@synthesize FMIPDeviceID=_FMIPDeviceID - In the implementation block
@property (nonatomic,readonly) NSString * detailDeviceName;                    //@synthesize detailDeviceName=_detailDeviceName - In the implementation block
@property (nonatomic,readonly) NSString * detailSubLabel;                      //@synthesize detailSubLabel=_detailSubLabel - In the implementation block
@property (nonatomic,readonly) NSString * deviceQualifiedClass;                //@synthesize deviceQualifiedClass=_deviceQualifiedClass - In the implementation block
@property (nonatomic,readonly) NSString * rawLatestBackup;                     //@synthesize rawLatestBackup=_rawLatestBackup - In the implementation block
@property (nonatomic,readonly) NSString * backupUUID;                          //@synthesize backupUUID=_backupUUID - In the implementation block
-(NSString *)name;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)currentDevice;
-(NSString *)model;
-(NSString *)deviceID;
-(NSString *)osVersion;
-(void)updateWithRUIClientInfo:(id)arg1 ;
-(NSString *)modelDisplayName;
-(NSString *)modelSmallPhotoURL3x;
-(NSString *)modelSmallPhotoURL2x;
-(NSString *)modelSmallPhotoURL1x;
-(NSString *)modelLargePhotoURL3x;
-(NSString *)modelLargePhotoURL2x;
-(NSString *)modelLargePhotoURL1x;
-(NSString *)deviceDetailUri;
-(NSString *)deviceDetailHttpMethod;
-(BOOL)fmipEnabled;
-(BOOL)showFMIPLink;
-(BOOL)showBackupRow;
-(BOOL)showFMIPRow;
-(BOOL)injectNativeHeader;
-(NSString *)FMIPDeviceID;
-(NSString *)detailDeviceName;
-(NSString *)detailSubLabel;
-(NSString *)deviceQualifiedClass;
-(NSString *)rawLatestBackup;
-(NSString *)backupUUID;
@end

