/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
*/

@class NSString;


@protocol RMSPairingSession <NSObject>
@property (assign,nonatomic,__weak) id<RMSPairingSessionDelegate> delegate; 
@property (nonatomic,retain) NSString * passcode; 
@property (nonatomic,retain) NSString * advertisedAppName; 
@property (nonatomic,retain) NSString * advertisedDeviceName; 
@property (nonatomic,retain) NSString * advertisedDeviceModel; 
@required
-(id<RMSPairingSessionDelegate>)delegate;
-(void)endPairing;
-(void)setDelegate:(id)arg1;
-(void)setPasscode:(id)arg1;
-(NSString *)passcode;
-(void)beginPairing;
-(void)unpairService:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(NSString *)advertisedAppName;
-(void)setAdvertisedAppName:(id)arg1;
-(NSString *)advertisedDeviceName;
-(void)setAdvertisedDeviceName:(id)arg1;
-(NSString *)advertisedDeviceModel;
-(void)setAdvertisedDeviceModel:(id)arg1;

@end

