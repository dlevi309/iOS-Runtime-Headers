/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <libobjc.A.dylib/NSFileProviderServiceEndpointCreating.h>

@class NSDictionary, FPXDomainContext;

@interface FPXServiceEndpointFactory : NSObject <NSFileProviderServiceEndpointCreating> {

	NSDictionary* _serviceSources;
	FPXDomainContext* _domainContext;

}
-(void)getListenerEndpointForServiceName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithServiceSources:(id)arg1 domainContext:(id)arg2 ;
@end

