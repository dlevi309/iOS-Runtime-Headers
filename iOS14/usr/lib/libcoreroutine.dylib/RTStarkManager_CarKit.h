/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTStarkManager.h>

@class CRPairedVehicleManager;

@interface RTStarkManager_CarKit : RTStarkManager {

	BOOL _trustedConnectionEstablished;
	CRPairedVehicleManager* _pairedVehicleManager;

}

@property (assign,nonatomic) BOOL trustedConnectionEstablished;                          //@synthesize trustedConnectionEstablished=_trustedConnectionEstablished - In the implementation block
@property (nonatomic,retain) CRPairedVehicleManager * pairedVehicleManager;              //@synthesize pairedVehicleManager=_pairedVehicleManager - In the implementation block
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)setup;
-(void)_shutdown;
-(void)_setup;
-(id)initWithDefaultsManager:(id)arg1 ;
-(void)onPairedVehiclesDidChange:(id)arg1 ;
-(BOOL)trustedConnectionEstablished;
-(CRPairedVehicleManager *)pairedVehicleManager;
-(void)setTrustedConnectionEstablished:(BOOL)arg1 ;
-(void)_updateTrustedConnectionEstablished;
-(void)_fetchConnectionStateWithHandler:(/*^block*/id)arg1 ;
-(void)setPairedVehicleManager:(CRPairedVehicleManager *)arg1 ;
@end

