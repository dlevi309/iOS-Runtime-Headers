/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@protocol _TVRCRapportDeviceQueryDelegate;
@class _TVRCExpiringStore, RPCompanionLinkClient, NSMutableDictionary;

@interface _TVRCRapportDeviceQuery : NSObject {

	_TVRCExpiringStore* _expiringStore;
	RPCompanionLinkClient* _companionLinkClient;
	NSMutableDictionary* _wrapperToIdentifierMapping;
	NSMutableDictionary* _deviceRecords;
	BOOL _unpairedBLEDevicesReported;
	id<_TVRCRapportDeviceQueryDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_TVRCRapportDeviceQueryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<_TVRCRapportDeviceQueryDelegate>)delegate;
-(void)start;
-(void)stop;
-(void)setDelegate:(id<_TVRCRapportDeviceQueryDelegate>)arg1 ;
-(void)dealloc;
-(void)_disconnectAllDevices;
-(BOOL)_shouldReportDevice:(id)arg1 ;
-(void)_deviceFound:(id)arg1 unpairedBLE:(BOOL)arg2 ;
-(void)_deviceLost:(id)arg1 ;
-(BOOL)_recordExistsForIDS:(id)arg1 ;
-(void)_updateRecordForIDS:(id)arg1 addTransportForFlag:(unsigned long long)arg2 ;
-(void)_updateRecordForIDS:(id)arg1 removeTransportForFlag:(unsigned long long)arg2 ;
-(unsigned long long)_transportForStatusFlag:(unsigned long long)arg1 ;
@end

