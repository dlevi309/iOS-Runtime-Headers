/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoBackup.framework/NanoBackup
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSUUID, NSString, NSNumber, NSDate;

@interface NBBackup : NSObject <NSSecureCoding> {

	BOOL _locationOptInEnabled;
	BOOL _diagnosticsOptInEnabled;
	BOOL _hasResolvedActiveWatchFaceFilePath;
	NSURL* _activeWatchFaceFileURL;
	NSUUID* _uuid;
	unsigned long long _backupType;
	NSString* _name;
	NSString* _productType;
	NSString* _productName;
	NSString* _systemVersion;
	NSString* _systemBuildVersion;
	NSString* _marketingVersion;
	NSString* _deviceColor;
	NSString* _deviceEnclosureColor;
	NSNumber* _bottomEnclosureMaterial;
	NSNumber* _topEnclosureMaterial;
	NSNumber* _fcmMaterial;
	NSNumber* _bcmWindowMaterial;
	NSNumber* _coverGlassColor;
	NSNumber* _housingColor;
	NSNumber* _backingColor;
	NSString* _watchFace;
	NSString* _watchFaceColor;
	NSDate* _lastModificationDate;
	NSNumber* _sizeInBytes;

}

@property (assign,nonatomic) BOOL hasResolvedActiveWatchFaceFilePath;                                    //@synthesize hasResolvedActiveWatchFaceFilePath=_hasResolvedActiveWatchFaceFilePath - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                              //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) unsigned long long backupType;                                              //@synthesize backupType=_backupType - In the implementation block
@property (nonatomic,retain) NSString * name;                                                            //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * productType;                                                     //@synthesize productType=_productType - In the implementation block
@property (nonatomic,retain) NSString * productName;                                                     //@synthesize productName=_productName - In the implementation block
@property (nonatomic,retain) NSString * systemVersion;                                                   //@synthesize systemVersion=_systemVersion - In the implementation block
@property (nonatomic,retain) NSString * systemBuildVersion;                                              //@synthesize systemBuildVersion=_systemBuildVersion - In the implementation block
@property (nonatomic,retain) NSString * marketingVersion;                                                //@synthesize marketingVersion=_marketingVersion - In the implementation block
@property (nonatomic,retain) NSString * deviceColor;                                                     //@synthesize deviceColor=_deviceColor - In the implementation block
@property (nonatomic,retain) NSString * deviceEnclosureColor;                                            //@synthesize deviceEnclosureColor=_deviceEnclosureColor - In the implementation block
@property (nonatomic,retain) NSNumber * bottomEnclosureMaterial;                                         //@synthesize bottomEnclosureMaterial=_bottomEnclosureMaterial - In the implementation block
@property (nonatomic,retain) NSNumber * topEnclosureMaterial;                                            //@synthesize topEnclosureMaterial=_topEnclosureMaterial - In the implementation block
@property (nonatomic,retain) NSNumber * fcmMaterial;                                                     //@synthesize fcmMaterial=_fcmMaterial - In the implementation block
@property (nonatomic,retain) NSNumber * bcmWindowMaterial;                                               //@synthesize bcmWindowMaterial=_bcmWindowMaterial - In the implementation block
@property (nonatomic,retain) NSNumber * coverGlassColor;                                                 //@synthesize coverGlassColor=_coverGlassColor - In the implementation block
@property (nonatomic,retain) NSNumber * housingColor;                                                    //@synthesize housingColor=_housingColor - In the implementation block
@property (nonatomic,retain) NSNumber * backingColor;                                                    //@synthesize backingColor=_backingColor - In the implementation block
@property (nonatomic,retain) NSString * watchFace;                                                       //@synthesize watchFace=_watchFace - In the implementation block
@property (nonatomic,retain) NSString * watchFaceColor;                                                  //@synthesize watchFaceColor=_watchFaceColor - In the implementation block
@property (assign,getter=isLocationOptInEnabled,nonatomic) BOOL locationOptInEnabled;                    //@synthesize locationOptInEnabled=_locationOptInEnabled - In the implementation block
@property (assign,getter=isDiagnosticsOptInEnabled,nonatomic) BOOL diagnosticsOptInEnabled;              //@synthesize diagnosticsOptInEnabled=_diagnosticsOptInEnabled - In the implementation block
@property (nonatomic,retain) NSDate * lastModificationDate;                                              //@synthesize lastModificationDate=_lastModificationDate - In the implementation block
@property (nonatomic,retain) NSNumber * sizeInBytes;                                                     //@synthesize sizeInBytes=_sizeInBytes - In the implementation block
@property (nonatomic,retain) NSURL * activeWatchFaceFileURL;                                             //@synthesize activeWatchFaceFileURL=_activeWatchFaceFileURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)systemVersion;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setSizeInBytes:(NSNumber *)arg1 ;
-(NSNumber *)sizeInBytes;
-(NSString *)productType;
-(NSDate *)lastModificationDate;
-(NSString *)productName;
-(void)setProductName:(NSString *)arg1 ;
-(void)setProductType:(NSString *)arg1 ;
-(NSString *)deviceColor;
-(NSString *)deviceEnclosureColor;
-(void)setDeviceColor:(NSString *)arg1 ;
-(void)setCoverGlassColor:(NSNumber *)arg1 ;
-(void)setHousingColor:(NSNumber *)arg1 ;
-(void)setBackingColor:(NSNumber *)arg1 ;
-(NSNumber *)coverGlassColor;
-(NSNumber *)housingColor;
-(NSNumber *)backingColor;
-(void)setDeviceEnclosureColor:(NSString *)arg1 ;
-(NSString *)marketingVersion;
-(void)setMarketingVersion:(NSString *)arg1 ;
-(void)setSystemVersion:(NSString *)arg1 ;
-(NSString *)systemBuildVersion;
-(void)setSystemBuildVersion:(NSString *)arg1 ;
-(unsigned long long)backupType;
-(void)setBackupType:(unsigned long long)arg1 ;
-(void)setLastModificationDate:(NSDate *)arg1 ;
-(NSURL *)activeWatchFaceFileURL;
-(void)setActiveWatchFaceFileURL:(NSURL *)arg1 ;
-(NSNumber *)bottomEnclosureMaterial;
-(void)setBottomEnclosureMaterial:(NSNumber *)arg1 ;
-(NSNumber *)topEnclosureMaterial;
-(void)setTopEnclosureMaterial:(NSNumber *)arg1 ;
-(NSNumber *)fcmMaterial;
-(void)setFcmMaterial:(NSNumber *)arg1 ;
-(NSNumber *)bcmWindowMaterial;
-(void)setBcmWindowMaterial:(NSNumber *)arg1 ;
-(NSString *)watchFace;
-(void)setWatchFace:(NSString *)arg1 ;
-(NSString *)watchFaceColor;
-(void)setWatchFaceColor:(NSString *)arg1 ;
-(BOOL)isLocationOptInEnabled;
-(void)setLocationOptInEnabled:(BOOL)arg1 ;
-(BOOL)isDiagnosticsOptInEnabled;
-(void)setDiagnosticsOptInEnabled:(BOOL)arg1 ;
-(BOOL)hasResolvedActiveWatchFaceFilePath;
-(void)setHasResolvedActiveWatchFaceFilePath:(BOOL)arg1 ;
@end

