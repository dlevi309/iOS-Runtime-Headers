/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@class _TVRCMRTelevisionWrapper, _TVRCRPCompanionLinkClientWrapper, _TVRCRMSDeviceWrapper, _TVRCHMServiceWrapper, _TVRXDevice;

@interface _TVRDeviceAggregate : NSObject {

	_TVRCMRTelevisionWrapper* _mediaRemote;
	_TVRCRPCompanionLinkClientWrapper* _rapport;
	_TVRCRMSDeviceWrapper* _remoteMediaService;
	_TVRCHMServiceWrapper* _homeKit;
	_TVRXDevice* _publicDevice;

}

@property (nonatomic,retain) _TVRCMRTelevisionWrapper * mediaRemote;                   //@synthesize mediaRemote=_mediaRemote - In the implementation block
@property (nonatomic,retain) _TVRCRPCompanionLinkClientWrapper * rapport;              //@synthesize rapport=_rapport - In the implementation block
@property (nonatomic,retain) _TVRCRMSDeviceWrapper * remoteMediaService;               //@synthesize remoteMediaService=_remoteMediaService - In the implementation block
@property (nonatomic,retain) _TVRCHMServiceWrapper * homeKit;                          //@synthesize homeKit=_homeKit - In the implementation block
@property (nonatomic,retain) _TVRXDevice * publicDevice;                               //@synthesize publicDevice=_publicDevice - In the implementation block
-(BOOL)isEmpty;
-(void)setRapport:(_TVRCRPCompanionLinkClientWrapper *)arg1 ;
-(id)bestImpl;
-(_TVRCMRTelevisionWrapper *)mediaRemote;
-(void)setMediaRemote:(_TVRCMRTelevisionWrapper *)arg1 ;
-(_TVRCRPCompanionLinkClientWrapper *)rapport;
-(_TVRCRMSDeviceWrapper *)remoteMediaService;
-(void)setRemoteMediaService:(_TVRCRMSDeviceWrapper *)arg1 ;
-(_TVRCHMServiceWrapper *)homeKit;
-(void)setHomeKit:(_TVRCHMServiceWrapper *)arg1 ;
-(_TVRXDevice *)publicDevice;
-(void)setPublicDevice:(_TVRXDevice *)arg1 ;
@end

