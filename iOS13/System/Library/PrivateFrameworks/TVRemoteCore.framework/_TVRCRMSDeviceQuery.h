/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/

#import <TVRemoteCore/TVRMSDiscoverySessionDelegate.h>

@protocol _TVRCRMSDeviceQueryDelegate, TVRMSDiscoverySession;
@class TVRMSService, NSMutableDictionary, NSString;

@interface _TVRCRMSDeviceQuery : NSObject <TVRMSDiscoverySessionDelegate> {

	id<_TVRCRMSDeviceQueryDelegate> _delegate;
	TVRMSService* _service;
	id<TVRMSDiscoverySession> _legacyDiscoverySession;
	NSMutableDictionary* _wrapperToIdentifierMapping;

}

@property (nonatomic,retain) TVRMSService * service;                                        //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) id<TVRMSDiscoverySession> legacyDiscoverySession;              //@synthesize legacyDiscoverySession=_legacyDiscoverySession - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * wrapperToIdentifierMapping;              //@synthesize wrapperToIdentifierMapping=_wrapperToIdentifierMapping - In the implementation block
@property (assign,nonatomic,__weak) id<_TVRCRMSDeviceQueryDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<_TVRCRMSDeviceQueryDelegate>)delegate;
-(void)setDelegate:(id<_TVRCRMSDeviceQueryDelegate>)arg1 ;
-(void)stop;
-(void)start;
-(TVRMSService *)service;
-(void)setService:(TVRMSService *)arg1 ;
-(void)discoverySessionDidUpdateAvailableServices:(id)arg1 ;
-(NSMutableDictionary *)wrapperToIdentifierMapping;
-(void)setWrapperToIdentifierMapping:(NSMutableDictionary *)arg1 ;
-(void)setLegacyDiscoverySession:(id<TVRMSDiscoverySession>)arg1 ;
-(id<TVRMSDiscoverySession>)legacyDiscoverySession;
-(BOOL)_shouldReportDevice:(id)arg1 ;
@end

