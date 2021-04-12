/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedUtils.framework/SharedUtils
*/

#import <libobjc.A.dylib/Service.h>

@class NSString, NSXPCListenerEndpoint;

@interface VirtualService : NSObject <Service> {

	NSXPCListenerEndpoint* _endpoint;
	NSString* _serviceID;

}

@property (nonatomic,readonly) NSString * serviceID;                          //@synthesize serviceID=_serviceID - In the implementation block
@property (nonatomic,readonly) NSXPCListenerEndpoint * endpoint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithEndpoint:(id)arg1 ;
-(NSString *)serviceID;
-(NSXPCListenerEndpoint *)endpoint;
-(void)dealloc;
@end

