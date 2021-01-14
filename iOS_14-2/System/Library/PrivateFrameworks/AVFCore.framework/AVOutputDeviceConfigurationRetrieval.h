/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
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
-(BOOL)automaticallyAllowsConnectionsFromPeersInHomeGroup;
-(NSString *)deviceName;
-(NSString *)deviceID;
-(BOOL)onlyAllowsConnectionsFromPeersInHomeGroup;
-(NSString *)devicePassword;
-(NSData *)devicePublicKey;
-(NSArray *)peersInHomeGroup;

@end

