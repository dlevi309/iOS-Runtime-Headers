/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVOutputDeviceConfigurationRetrieval.h>

@class NSString, NSData, NSArray;

@interface AVFigRoutingContextCommandOutputDeviceConfiguration : NSObject <AVOutputDeviceConfigurationRetrieval> {

	CFDictionaryRef _response;

}

@property (nonatomic,readonly) NSString * deviceName; 
@property (nonatomic,readonly) NSString * devicePassword; 
@property (nonatomic,readonly) NSString * deviceID; 
@property (nonatomic,readonly) NSData * devicePublicKey; 
@property (nonatomic,readonly) BOOL automaticallyAllowsConnectionsFromPeersInHomeGroup; 
@property (nonatomic,readonly) BOOL onlyAllowsConnectionsFromPeersInHomeGroup; 
@property (nonatomic,readonly) NSArray * peersInHomeGroup; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(BOOL)automaticallyAllowsConnectionsFromPeersInHomeGroup;
-(NSString *)deviceName;
-(NSString *)deviceID;
-(BOOL)onlyAllowsConnectionsFromPeersInHomeGroup;
-(id)init;
-(NSString *)devicePassword;
-(NSData *)devicePublicKey;
-(id)initWithRoutingContextComandResponse:(CFDictionaryRef)arg1 ;
-(NSArray *)peersInHomeGroup;
-(void)dealloc;
@end

