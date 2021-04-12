/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/REPredictor.h>
#import <libobjc.A.dylib/REBluetoothPredictorProperties.h>

@class NSDictionary, REDuetContextQuery, REUpNextScheduler;

@interface REBluetoothPredictor : REPredictor <REBluetoothPredictorProperties> {

	REDuetContextQuery* _connectCarQuery;
	REDuetContextQuery* _connectAudioQuery;
	REUpNextScheduler* _bluetoothNotificationScheduler;
	BOOL _connectedToCar;
	BOOL _connectedToSpeaker;
	NSDictionary* _localDevices;

}

@property (setter=_setConnectedToCar:,getter=_isConnctedToCar) BOOL _connectedToCar;                           //@synthesize connectedToCar=_connectedToCar - In the implementation block
@property (setter=_setConnectedToSpeaker:,getter=_isConnectedToSpeaker) BOOL _connectedToSpeaker;              //@synthesize connectedToSpeaker=_connectedToSpeaker - In the implementation block
@property (retain) NSDictionary * localDevices;                                                                //@synthesize localDevices=_localDevices - In the implementation block
@property (readonly) BOOL connectedToCar; 
@property (readonly) BOOL connectedToSpeaker; 
+(id)supportedFeatures;
-(id)_init;
-(void)pause;
-(void)resume;
-(void)update;
-(BOOL)connectedToCar;
-(id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4 ;
-(BOOL)connectedToSpeaker;
-(void)setLocalDevices:(NSDictionary *)arg1 ;
-(void)_setConnectedToSpeaker:(BOOL)arg1 ;
-(void)_setConnectedToCar:(BOOL)arg1 ;
-(void)_registerForBluetoothNotifications;
-(void)_unregisterForBluetoothNotifications;
-(NSDictionary *)localDevices;
-(BOOL)_isConnectedToSpeaker;
-(BOOL)_isConnctedToCar;
@end

