/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

#import <libobjc.A.dylib/SWWebViewConfigurationFactory.h>

@protocol SWWebViewConfigurationFactory <NSObject>
@required
-(id)createWebViewConfigurationWithUserContentController:(id)arg1 mediaSettings:(id)arg2;

@end


@class WKProcessPool, WKWebsiteDataStore, NSString;

@interface SWWebViewConfigurationFactory : NSObject <SWWebViewConfigurationFactory> {

	WKProcessPool* _processPool;
	WKWebsiteDataStore* _websiteDataStore;

}

@property (nonatomic,readonly) WKProcessPool * processPool;                        //@synthesize processPool=_processPool - In the implementation block
@property (nonatomic,readonly) WKWebsiteDataStore * websiteDataStore;              //@synthesize websiteDataStore=_websiteDataStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WKProcessPool *)processPool;
-(WKWebsiteDataStore *)websiteDataStore;
-(id)createWebViewConfigurationWithUserContentController:(id)arg1 mediaSettings:(id)arg2 ;
-(id)initWithProcessPool:(id)arg1 websiteDataStore:(id)arg2 ;
@end

