/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


#import <NetworkExtension/NetworkExtension-Structs.h>
@interface NEHotspotHelperResponse : NSObject {

	CNPluginResponseRef _response;

}

@property (assign) CNPluginResponseRef response;              //@synthesize response=_response - In the implementation block
-(id)initWithResponse:(CNPluginResponseRef)arg1 ;
-(void)setNetworkList:(id)arg1 ;
-(void)deliver;
-(id)description;
-(CNPluginResponseRef)response;
-(void)setResponse:(CNPluginResponseRef)arg1 ;
-(void)setNetwork:(id)arg1 ;
-(void)dealloc;
@end

