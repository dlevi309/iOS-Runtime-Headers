/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirPlaySync.framework/AirPlaySync
*/

#import <AirPlaySync/AirPlaySync-Structs.h>
#import <libobjc.A.dylib/MRLegacyControllerDelegate.h>

@class NSString;

@interface APSyncMediaRemoteLegacyControllerDelegate : NSObject <MRLegacyControllerDelegate> {

	weak_ptr<apsync::APSyncMediaRemoteLegacyController>* _weakCallbackContext;
	/*function pointer*/void* _connectionStateDidChange;
	/*function pointer*/void* _volumeControlAvailableDidChange;
	/*function pointer*/void* _volumeDidChange;
	/*function pointer*/void* _masterVolumeDidChange;
	/*function pointer*/void* _endpointDescriptionDidChange;
	NSString* _ID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)legacyController:(id)arg1 volumeControlAvailabilityDidChange:(BOOL)arg2 forOutputDevice:(id)arg3 ;
-(void)legacyController:(id)arg1 volumeDidChange:(float)arg2 forOutputDevice:(id)arg3 ;
-(void)dealloc;
-(void)legacyController:(id)arg1 masterVolumeDidChange:(float)arg2 ;
-(void)legacyControllerConnectionDidDisconnect:(id)arg1 withError:(id)arg2 ;
-(void)legacyControllerConnectionDidConnect:(id)arg1 ;
-(id)initWithContextAndCallbacks:(/*function pointer*/void*)arg1 volumeControlAvailableChanged:(/*function pointer*/void*)arg2 volumeChanged:(/*function pointer*/void*)arg3 masterVolumeChanged:(/*function pointer*/void*)arg4 endpointDescriptionChanged:(/*function pointer*/void*)arg5 weakCallbackContext:(weak_ptr<apsync::APSyncMediaRemoteLegacyController>*)arg6 ID:(id)arg7 ;
-(int)addEndpointDescriptionChangedListener:(OpaqueFigEndpointRef)arg1 ;
-(int)removeEndpointDescriptionChangedListener:(OpaqueFigEndpointRef)arg1 ;
-(void)_endpointDescriptionChanged:(OpaqueFigEndpointRef)arg1 ;
@end

