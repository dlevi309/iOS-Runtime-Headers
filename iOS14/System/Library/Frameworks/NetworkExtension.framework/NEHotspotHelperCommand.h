/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


#import <NetworkExtension/NetworkExtension-Structs.h>
@class NSString, NEHotspotNetwork, NSArray;

@interface NEHotspotHelperCommand : NSObject {

	CNPluginCommandRef _command;

}

@property (assign) CNPluginCommandRef command;                //@synthesize command=_command - In the implementation block
@property (readonly) NSString * interfaceName; 
@property (readonly) long long commandType; 
@property (readonly) NEHotspotNetwork * network; 
@property (readonly) NSArray * networkList; 
-(NEHotspotNetwork *)network;
-(id)initWithCommand:(CNPluginCommandRef)arg1 ;
-(NSString *)interfaceName;
-(id)description;
-(NSArray *)networkList;
-(CNPluginCommandRef)command;
-(void)setCommand:(CNPluginCommandRef)arg1 ;
-(long long)commandType;
-(id)createResponse:(long long)arg1 ;
-(id)createTCPConnection:(id)arg1 ;
-(id)createUDPSession:(id)arg1 ;
-(void)dealloc;
@end

