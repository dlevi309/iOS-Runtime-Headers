/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUARP.framework/CoreUARP
*/


@class UARPAccessoryID, NSMutableArray, NSString, NSUUID;

@interface UARPAccessory : NSObject {

	UARPAccessoryID* _id;
	NSMutableArray* _internalPendingAssets;
	BOOL _reachable;
	BOOL _assetTransfersPaused;
	BOOL _userInitiatedFirmwareStaging;
	BOOL _userInitiatedFirmwareApply;
	BOOL _enableFirmwareDownloadOnDemand;
	unsigned _firmwareUpdateBytesTransferred;
	unsigned _firmwareUpdateBytesTotal;
	NSString* _availableFirmwareVersion;
	NSString* _filepathCurrentAsset;

}

@property (retain) NSUUID * uuid; 
@property (readonly) NSString * serialNumber; 
@property (readonly) NSString * modelName; 
@property (readonly) NSString * modelNumber; 
@property (readonly) NSString * manufacturer; 
@property (readonly) NSString * firmwareVersion; 
@property (readonly) NSString * productNumber; 
@property (readonly) NSString * productGroup; 
@property (copy) NSString * stagedFirmwareVersion; 
@property (copy) NSString * availableFirmwareVersion;                    //@synthesize availableFirmwareVersion=_availableFirmwareVersion - In the implementation block
@property (assign) BOOL userInitiatedFirmwareStaging;                    //@synthesize userInitiatedFirmwareStaging=_userInitiatedFirmwareStaging - In the implementation block
@property (assign) BOOL userInitiatedFirmwareApply;                      //@synthesize userInitiatedFirmwareApply=_userInitiatedFirmwareApply - In the implementation block
@property (assign) unsigned firmwareUpdateBytesTransferred;              //@synthesize firmwareUpdateBytesTransferred=_firmwareUpdateBytesTransferred - In the implementation block
@property (assign) unsigned firmwareUpdateBytesTotal;                    //@synthesize firmwareUpdateBytesTotal=_firmwareUpdateBytesTotal - In the implementation block
@property (copy) NSString * filepathCurrentAsset;                        //@synthesize filepathCurrentAsset=_filepathCurrentAsset - In the implementation block
@property (assign) BOOL enableFirmwareDownloadOnDemand;                  //@synthesize enableFirmwareDownloadOnDemand=_enableFirmwareDownloadOnDemand - In the implementation block
@property (assign) BOOL downloadOnCellularAllowed; 
@property (assign) BOOL autoDownloadAllowed; 
@property (assign) long long transport; 
@property (assign) unsigned long long capability; 
-(NSString *)serialNumber;
-(NSString *)firmwareVersion;
-(NSString *)manufacturer;
-(NSUUID *)uuid;
-(long long)transport;
-(void)setManufacturer:(NSString *)arg1 ;
-(void)setTransport:(long long)arg1 ;
-(NSString *)modelName;
-(void)setReachable:(BOOL)arg1 ;
-(id)description;
-(void)setModelName:(NSString *)arg1 ;
-(NSString *)modelNumber;
-(unsigned long long)capability;
-(void)setFirmwareVersion:(NSString *)arg1 ;
-(void)setCapability:(unsigned long long)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setProductNumber:(NSString *)arg1 ;
-(NSString *)productNumber;
-(void)setModelNumber:(NSString *)arg1 ;
-(void)setSerialNumber:(NSString *)arg1 ;
-(id)initWithID:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)getID;
-(BOOL)reachable;
-(NSString *)productGroup;
-(id)initWithManufacturer:(id)arg1 modelName:(id)arg2 serialNumber:(id)arg3 firmwareVersion:(id)arg4 ;
-(id)initWithManufacturer:(id)arg1 modelName:(id)arg2 serialNumber:(id)arg3 firmwareVersion:(id)arg4 productGroup:(id)arg5 productNumber:(id)arg6 ;
-(id)initWithModelNumber:(id)arg1 ;
-(void)setProductGroup:(NSString *)arg1 ;
-(void)setStagedFirmwareVersion:(NSString *)arg1 ;
-(NSString *)stagedFirmwareVersion;
-(BOOL)downloadOnCellularAllowed;
-(void)setDownloadOnCellularAllowed:(BOOL)arg1 ;
-(BOOL)autoDownloadAllowed;
-(void)setAutoDownloadAllowed:(BOOL)arg1 ;
-(void)addPendingAsset:(id)arg1 ;
-(void)removePendingAsset:(id)arg1 ;
-(id)pendingAssets;
-(void)setAssetTransfersPaused:(BOOL)arg1 ;
-(BOOL)assetTransfersPaused;
-(NSString *)availableFirmwareVersion;
-(void)setAvailableFirmwareVersion:(NSString *)arg1 ;
-(BOOL)userInitiatedFirmwareStaging;
-(void)setUserInitiatedFirmwareStaging:(BOOL)arg1 ;
-(BOOL)userInitiatedFirmwareApply;
-(void)setUserInitiatedFirmwareApply:(BOOL)arg1 ;
-(unsigned)firmwareUpdateBytesTransferred;
-(void)setFirmwareUpdateBytesTransferred:(unsigned)arg1 ;
-(unsigned)firmwareUpdateBytesTotal;
-(void)setFirmwareUpdateBytesTotal:(unsigned)arg1 ;
-(NSString *)filepathCurrentAsset;
-(void)setFilepathCurrentAsset:(NSString *)arg1 ;
-(BOOL)enableFirmwareDownloadOnDemand;
-(void)setEnableFirmwareDownloadOnDemand:(BOOL)arg1 ;
@end

