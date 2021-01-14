/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
*/

#import <TVRemoteUI/TVRUIDevice.h>

@class NSString;

@interface TVRUIUnpairedDevices : NSObject <TVRUIDevice>

@property (assign,nonatomic,__weak) id<TVRUIDeviceDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isPaired;
-(BOOL)isConnected;
-(id)model;
-(id<TVRUIDeviceDelegate>)delegate;
-(void)connect;
-(id)name;
-(void)setDelegate:(id<TVRUIDeviceDelegate>)arg1 ;
-(BOOL)isEqualToDevice:(id)arg1 ;
-(BOOL)isConnecting;
-(id)identifier;
-(BOOL)supportsTouchEvents;
-(void)disconnectUserInitiated;
-(void)disconnectSystemInitiated;
-(BOOL)supportsDonatingIntents;
-(BOOL)hasIdentifier:(id)arg1 ;
-(void)disconnectWithTimeOut;
@end

