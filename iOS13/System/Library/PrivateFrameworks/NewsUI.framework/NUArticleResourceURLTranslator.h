/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUArticleResourceURLTranslator.h>

@protocol NUArticleResourceURLTranslator <NSObject>
@required
-(id)translateFileURLForURL:(id)arg1;

@end


@protocol FCNewsAppConfigurationManager;
@class NSString;

@interface NUArticleResourceURLTranslator : NSObject <NUArticleResourceURLTranslator> {

	id<FCNewsAppConfigurationManager> _appConfigurationManager;

}

@property (nonatomic,readonly) id<FCNewsAppConfigurationManager> appConfigurationManager;              //@synthesize appConfigurationManager=_appConfigurationManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<FCNewsAppConfigurationManager>)appConfigurationManager;
-(id)translateFileURLForURL:(id)arg1 ;
-(id)initWithAppConfigurationManager:(id)arg1 ;
-(long long)endpointForScheme:(id)arg1 ;
-(id)defaultURLForEndpoint:(long long)arg1 ;
@end

