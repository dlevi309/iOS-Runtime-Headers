/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXWebsiteDataStoreFactory.h>

@protocol SXWebsiteDataStoreFactory <NSObject>
@required
-(id)createWebsiteDataStore;

@end


@class SXProxyConfiguration, NSString;

@interface SXWebsiteDataStoreFactory : NSObject <SXWebsiteDataStoreFactory> {

	SXProxyConfiguration* _proxyConfiguration;

}

@property (nonatomic,readonly) SXProxyConfiguration * proxyConfiguration;              //@synthesize proxyConfiguration=_proxyConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProxyConfiguration:(id)arg1 ;
-(SXProxyConfiguration *)proxyConfiguration;
-(id)createWebsiteDataStore;
@end

