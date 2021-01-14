/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices
*/


@class CRVehicle, CRPairedVehicleManager, CRSUIWallpaper;

@interface CRSUIWallpaperPreferences : NSObject {

	CRVehicle* _vehicle;
	CRPairedVehicleManager* _vehicleManager;

}

@property (nonatomic,retain) CRPairedVehicleManager * vehicleManager;              //@synthesize vehicleManager=_vehicleManager - In the implementation block
@property (nonatomic,retain) CRVehicle * vehicle;                                  //@synthesize vehicle=_vehicle - In the implementation block
@property (nonatomic,retain) CRSUIWallpaper * currentWallpaper; 
+(id)availableWallpapers;
+(id)wallpaperWithIdentifier:(id)arg1 ;
+(id)defaultWallpaper;
+(id)_wallpaperWithIdentifier:(id)arg1 ;
-(id)init;
-(CRVehicle *)vehicle;
-(void)setVehicle:(CRVehicle *)arg1 ;
-(CRPairedVehicleManager *)vehicleManager;
-(void)setVehicleManager:(CRPairedVehicleManager *)arg1 ;
-(CRSUIWallpaper *)currentWallpaper;
-(void)setCurrentWallpaper:(CRSUIWallpaper *)arg1 ;
@end

