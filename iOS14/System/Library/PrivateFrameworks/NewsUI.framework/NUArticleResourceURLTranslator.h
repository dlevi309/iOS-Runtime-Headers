/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)endpointForScheme:(id)arg1 ;
-(id)initWithAppConfigurationManager:(id)arg1 ;
-(id)defaultURLForEndpoint:(long long)arg1 ;
-(id)translateFileURLForURL:(id)arg1 ;
-(id<FCNewsAppConfigurationManager>)appConfigurationManager;
@end

