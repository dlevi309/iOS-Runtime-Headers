/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
*/


@class CARSessionStatus;

@interface CRVehicleInformation : NSObject {

	CARSessionStatus* _currentSessionStatus;

}

@property (nonatomic,retain) CARSessionStatus * currentSessionStatus;                    //@synthesize currentSessionStatus=_currentSessionStatus - In the implementation block
@property (nonatomic,readonly) unsigned long long driverPosition; 
@property (nonatomic,readonly) unsigned long long vehicleAmbientBrightness; 
-(id)init;
-(CARSessionStatus *)currentSessionStatus;
-(unsigned long long)driverPosition;
-(unsigned long long)vehicleAmbientBrightness;
-(void)setCurrentSessionStatus:(CARSessionStatus *)arg1 ;
@end

