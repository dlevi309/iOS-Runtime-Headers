/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/


@protocol HAP2AccessoryServerControllerPrivate <HAP2AccessoryServerController>
@property (assign,nonatomic,__weak) id<HAP2AccessoryServerPrivate> accessoryServer; 
@property (nonatomic,readonly) id<HAP2AccessoryServerEncoding> encoding; 
@property (nonatomic,readonly) id<HAP2AccessoryServerSecureTransport> transport; 
@required
-(id<HAP2AccessoryServerSecureTransport>)transport;
-(id<HAP2AccessoryServerEncoding>)encoding;
-(id<HAP2AccessoryServerPrivate>)accessoryServer;
-(BOOL)mergeWithNewController:(id)arg1;
-(void)setAccessoryServer:(id)arg1;

@end

