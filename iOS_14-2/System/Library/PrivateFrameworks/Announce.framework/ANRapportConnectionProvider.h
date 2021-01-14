/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
*/

@class NSArray, RPCompanionLinkDevice;


@protocol ANRapportConnectionProvider <ANConnectionProvider>
@property (nonatomic,readonly) NSArray * devices; 
@property (nonatomic,readonly) RPCompanionLinkDevice * localDevice; 
@required
-(RPCompanionLinkDevice *)localDevice;
-(NSArray *)devices;
-(void)activateLinkWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2;
-(id)activateLinkWithOptions:(unsigned long long)arg1;
-(void)sendDailyRequest:(id)arg1 handler:(/*^block*/id)arg2;
-(void)registerDailyRequest:(/*^block*/id)arg1;
-(void)removeDeviceDelegate:(id)arg1;
-(void)deactivateLinkWithOptions:(unsigned long long)arg1;
-(void)addDeviceDelegate:(id)arg1 queue:(id)arg2;
-(id)sendMessage:(id)arg1 device:(id)arg2 responseHandler:(/*^block*/id)arg3;
-(void)sendHomeLocationStatusRequestToDevice:(id)arg1 handler:(/*^block*/id)arg2;

@end

