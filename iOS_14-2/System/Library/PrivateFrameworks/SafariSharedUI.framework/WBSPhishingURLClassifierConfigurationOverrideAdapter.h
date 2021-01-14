/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <libobjc.A.dylib/WBSPhishingURLClassifier.h>

@class WBSPhishingConfiguration;

@interface WBSPhishingURLClassifierConfigurationOverrideAdapter : NSObject <WBSPhishingURLClassifier> {

	WBSPhishingConfiguration* _configuration;

}

@property (retain) WBSPhishingConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
-(WBSPhishingConfiguration *)configuration;
-(void)setConfiguration:(WBSPhishingConfiguration *)arg1 ;
-(void)classifyURL:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

