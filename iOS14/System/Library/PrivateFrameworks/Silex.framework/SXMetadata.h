/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXJSONObject.h>

@class NSString, SXTabBarAppearance, SXFeedNavigationAppearance, SXJSONDictionary;

@interface SXMetadata : SXJSONObject

@property (nonatomic,readonly) BOOL transparentToolbar; 
@property (nonatomic,readonly) NSString * canonicalURL; 
@property (nonatomic,readonly) NSString * thumbnailImageIdentifier; 
@property (nonatomic,readonly) NSString * documentVersion; 
@property (nonatomic,readonly) SXTabBarAppearance * tabBarAppearance; 
@property (nonatomic,readonly) SXFeedNavigationAppearance * feedNavigationAppearance; 
@property (nonatomic,readonly) SXJSONDictionary * campaignData; 
@property (nonatomic,readonly) BOOL showNewsSubscribe; 
@property (nonatomic,readonly) BOOL suppressMoreFromPublisher; 
@property (nonatomic,readonly) BOOL suppressRelatedArticles; 
-(BOOL)suppressRelatedArticles;
-(BOOL)suppressMoreFromPublisher;
-(BOOL)showNewsSubscribe;
-(SXJSONDictionary *)campaignData;
-(SXFeedNavigationAppearance *)feedNavigationAppearance;
-(SXTabBarAppearance *)tabBarAppearance;
-(NSString *)documentVersion;
-(NSString *)thumbnailImageIdentifier;
-(NSString *)canonicalURL;
-(BOOL)transparentToolbar;
@end

