/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setRapport:(_TVRCRPCompanionLinkClientWrapper *)arg1 ;
-(BOOL)isEmpty;
-(_TVRCRPCompanionLinkClientWrapper *)rapport;
-(_TVRCHMServiceWrapper *)homeKit;
-(id)bestImpl;
-(_TVRCMRTelevisionWrapper *)mediaRemote;
-(void)setMediaRemote:(_TVRCMRTelevisionWrapper *)arg1 ;
-(_TVRCRMSDeviceWrapper *)remoteMediaService;
-(void)setRemoteMediaService:(_TVRCRMSDeviceWrapper *)arg1 ;
-(void)setHomeKit:(_TVRCHMServiceWrapper *)arg1 ;
-(_TVRXDevice *)publicDevice;
-(void)setPublicDevice:(_TVRXDevice *)arg1 ;
@end

