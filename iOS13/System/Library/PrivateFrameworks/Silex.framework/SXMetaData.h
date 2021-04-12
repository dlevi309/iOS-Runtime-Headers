/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXJSONObject.h>

@class NSString, SXTabBarAppearance, SXFeedNavigationAppearance, SXJSONDictionary;

@interface SXMetaData : SXJSONObject

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

