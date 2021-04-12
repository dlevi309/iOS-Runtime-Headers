/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/HMDCompanionLinkClient.h>

@protocol HMDCompanionLinkClient <NSObject>
@property (nonatomic,copy) id deviceFoundHandler; 
@property (nonatomic,copy) id deviceLostHandler; 
@property (nonatomic,copy) id deviceChangedHandler; 
@required
-(void)stop;
-(void)start;
-(void)setDeviceFoundHandler:(/*^block*/id)arg1;
-(void)setDeviceChangedHandler:(/*^block*/id)arg1;
-(void)setDeviceLostHandler:(/*^block*/id)arg1;
-(id)deviceFoundHandler;
-(id)deviceLostHandler;
-(id)deviceChangedHandler;

@end


@class RPCompanionLinkClient, NSString;

@interface HMDCompanionLinkClient : NSObject <HMDCompanionLinkClient> {

	RPCompanionLinkClient* _client;

}

@property (nonatomic,retain) RPCompanionLinkClient * client;              //@synthesize client=_client - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id deviceFoundHandler; 
@property (nonatomic,copy) id deviceLostHandler; 
@property (nonatomic,copy) id deviceChangedHandler; 
-(void)dealloc;
-(void)stop;
-(void)start;
-(RPCompanionLinkClient *)client;
-(void)setClient:(RPCompanionLinkClient *)arg1 ;
-(void)setDeviceFoundHandler:(id)arg1 ;
-(void)setDeviceChangedHandler:(id)arg1 ;
-(void)setDeviceLostHandler:(id)arg1 ;
-(id)deviceFoundHandler;
-(id)deviceLostHandler;
-(id)deviceChangedHandler;
@end

