/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setDelegate:(id)arg1;
-(void)endPairing;
-(NSString *)passcode;
-(void)setPasscode:(id)arg1;
-(void)beginPairing;
-(void)unpairService:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(NSString *)advertisedAppName;
-(void)setAdvertisedAppName:(id)arg1;
-(NSString *)advertisedDeviceName;
-(void)setAdvertisedDeviceName:(id)arg1;
-(NSString *)advertisedDeviceModel;
-(void)setAdvertisedDeviceModel:(id)arg1;

@end

