/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)name;
-(id<TVRUIDeviceDelegate>)delegate;
-(void)setDelegate:(id<TVRUIDeviceDelegate>)arg1 ;
-(id)identifier;
-(id)model;
-(BOOL)isEqualToDevice:(id)arg1 ;
-(void)connect;
-(BOOL)isConnected;
-(BOOL)isConnecting;
-(BOOL)isPaired;
-(void)disconnectUserInitiated;
-(void)disconnectSystemInitiated;
-(BOOL)supportsTouchEvents;
-(BOOL)supportsDonatingIntents;
-(BOOL)hasIdentifier:(id)arg1 ;
-(void)disconnectWithTimeOut;
@end

