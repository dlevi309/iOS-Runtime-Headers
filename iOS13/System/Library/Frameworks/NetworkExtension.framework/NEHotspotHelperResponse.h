/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


#import <NetworkExtension/NetworkExtension-Structs.h>
@interface NEHotspotHelperResponse : NSObject {

	CNPluginResponseRef _response;

}

@property (assign) CNPluginResponseRef response;              //@synthesize response=_response - In the implementation block
-(void)dealloc;
-(id)description;
-(CNPluginResponseRef)response;
-(void)setNetwork:(id)arg1 ;
-(void)setResponse:(CNPluginResponseRef)arg1 ;
-(id)initWithResponse:(CNPluginResponseRef)arg1 ;
-(void)setNetworkList:(id)arg1 ;
-(void)deliver;
@end

