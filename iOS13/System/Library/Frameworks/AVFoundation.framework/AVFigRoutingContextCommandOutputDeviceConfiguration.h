/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVOutputDeviceConfigurationRetrieval.h>

@class NSString, NSData, NSArray;

@interface AVFigRoutingContextCommandOutputDeviceConfiguration : NSObject <AVOutputDeviceConfigurationRetrieval> {

	CFDictionaryRef _response;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * deviceName; 
@property (nonatomic,readonly) NSString * devicePassword; 
@property (nonatomic,readonly) NSString * deviceID; 
@property (nonatomic,readonly) NSData * devicePublicKey; 
@property (nonatomic,readonly) BOOL automaticallyAllowsConnectionsFromPeersInHomeGroup; 
@property (nonatomic,readonly) BOOL onlyAllowsConnectionsFromPeersInHomeGroup; 
@property (nonatomic,readonly) NSArray * peersInHomeGroup; 
+(void)initialize;
-(id)init;
-(void)dealloc;
-(NSString *)deviceID;
-(NSString *)deviceName;
-(NSData *)devicePublicKey;
-(BOOL)automaticallyAllowsConnectionsFromPeersInHomeGroup;
-(BOOL)onlyAllowsConnectionsFromPeersInHomeGroup;
-(id)initWithRoutingContextComandResponse:(CFDictionaryRef)arg1 ;
-(NSString *)devicePassword;
-(NSArray *)peersInHomeGroup;
@end

