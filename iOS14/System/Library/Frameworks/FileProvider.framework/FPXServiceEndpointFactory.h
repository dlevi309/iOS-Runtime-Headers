/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

