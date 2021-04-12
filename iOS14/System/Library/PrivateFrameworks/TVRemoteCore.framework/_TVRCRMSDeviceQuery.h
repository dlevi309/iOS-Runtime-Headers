/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)start;
-(void)stop;
-(void)setDelegate:(id<_TVRCRMSDeviceQueryDelegate>)arg1 ;
-(void)setService:(TVRMSService *)arg1 ;
-(TVRMSService *)service;
-(void)discoverySessionDidUpdateAvailableServices:(id)arg1 ;
-(NSMutableDictionary *)wrapperToIdentifierMapping;
-(void)setWrapperToIdentifierMapping:(NSMutableDictionary *)arg1 ;
-(void)setLegacyDiscoverySession:(id<TVRMSDiscoverySession>)arg1 ;
-(id<TVRMSDiscoverySession>)legacyDiscoverySession;
-(BOOL)_shouldReportDevice:(id)arg1 ;
@end

