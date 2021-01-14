/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEProvider.h>
#import <libobjc.A.dylib/NSExtensionRequestHandling.h>

@class NEFilterProviderConfiguration, NSString;

@interface NEFilterProvider : NEProvider <NSExtensionRequestHandling> {

	NEFilterProviderConfiguration* _filterConfiguration;

}

@property (retain) NEFilterProviderConfiguration * filterConfiguration;              //@synthesize filterConfiguration=_filterConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptionForAction:(long long)arg1 ;
-(void)handleReport:(id)arg1 ;
-(void)startFilterWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setFilterConfiguration:(NEFilterProviderConfiguration *)arg1 ;
-(void)stopFilterWithReason:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NEFilterProviderConfiguration *)filterConfiguration;
@end

