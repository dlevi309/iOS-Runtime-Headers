/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

@class NSString, NSData, NSArray;


@protocol AVOutputDeviceConfigurationRetrieval <NSObject>
@property (nonatomic,readonly) NSString * deviceName; 
@property (nonatomic,readonly) NSString * devicePassword; 
@property (nonatomic,readonly) NSString * deviceID; 
@property (nonatomic,readonly) NSData * devicePublicKey; 
@property (nonatomic,readonly) BOOL automaticallyAllowsConnectionsFromPeersInHomeGroup; 
@property (nonatomic,readonly) BOOL onlyAllowsConnectionsFromPeersInHomeGroup; 
@property (nonatomic,readonly) NSArray * peersInHomeGroup; 
@required
-(NSString *)deviceID;
-(NSString *)deviceName;
-(NSData *)devicePublicKey;
-(BOOL)automaticallyAllowsConnectionsFromPeersInHomeGroup;
-(BOOL)onlyAllowsConnectionsFromPeersInHomeGroup;
-(NSString *)devicePassword;
-(NSArray *)peersInHomeGroup;

@end

