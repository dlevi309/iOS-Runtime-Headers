/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSHashTable;

@interface SBVolumeHardwareButtonActions : NSObject {

	BOOL _volumeIncreaseIsDown;
	BOOL _volumeDecreaseIsDown;
	NSHashTable* _volumePressBandits;
	/*^block*/id _volumeIncreaseUpEventBlock;
	/*^block*/id _volumeDecreaseUpEventBlock;

}
-(void)addVolumePressBandit:(id)arg1 ;
-(void)removeVolumePressBandit:(id)arg1 ;
-(void)cancelVolumePress;
-(void)volumeIncreasePressDown;
-(void)volumeIncreasePressUp;
-(void)volumeDecreasePressDown;
-(void)volumeDecreasePressUp;
-(BOOL)_handleVolumeButtonDownForIncrease:(BOOL)arg1 ;
-(BOOL)_handleVolumeButtonUpForIncrease:(BOOL)arg1 ;
-(BOOL)_handleVolumeIncreaseUp;
-(BOOL)_handleVolumeDecreaseUp;
-(BOOL)_sendVolumeButtonToSBUIControllerForIncrease:(BOOL)arg1 down:(BOOL)arg2 ;
-(void)_sendBanditsVolumeIncreased;
-(void)_sendBanditsVolumeDecreased;
-(BOOL)_sendVolumeButtonDownToSpringBoardInternalUIForIncrease:(BOOL)arg1 ;
-(BOOL)_sendVolumeButtonDownToLegacyRegisteredClientsForIncrease:(BOOL)arg1 ;
-(BOOL)_sendVolumeButtonDownToSBUIControllerForIncrease:(BOOL)arg1 ;
@end

