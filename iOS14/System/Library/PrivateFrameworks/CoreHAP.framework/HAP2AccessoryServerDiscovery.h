/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/


@protocol HAP2AccessoryServerDiscovery <NSObject>
@property (assign,nonatomic,__weak) id<HAP2AccessoryServerDiscoveryDelegate> delegate; 
@property (getter=isDiscovering,nonatomic,readonly) BOOL discovering; 
@required
-(void)stopDiscovering;
-(void)reconfirmAccessory:(id)arg1;
-(id<HAP2AccessoryServerDiscoveryDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(BOOL)isDiscovering;
-(void)startDiscovering;

@end

