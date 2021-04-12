/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCGroupConfig.h>

@class NSString, NSDate;

@interface FCSpotlightGroupConfig : FCGroupConfig {

	NSString* _spotlightArticleID;
	NSDate* _publishDate;

}

@property (nonatomic,copy,readonly) NSString * spotlightArticleID;                                //@synthesize spotlightArticleID=_spotlightArticleID - In the implementation block
@property (nonatomic,copy,readonly) NSDate * publishDate;                                         //@synthesize publishDate=_publishDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * spotlightCallToActionTitle; 
@property (nonatomic,copy,readonly) NSString * spotlightEyebrowTitle; 
@property (nonatomic,copy,readonly) id<FCCardStyleProviding> spotlightItemStyle; 
@property (nonatomic,copy,readonly) id<FCCardStyleProviding> spotlightItemDarkStyle; 
-(id)initWithDictionary:(id)arg1 ;
-(NSDate *)publishDate;
-(NSString *)spotlightCallToActionTitle;
-(NSString *)spotlightEyebrowTitle;
-(id<FCCardStyleProviding>)spotlightItemStyle;
-(id<FCCardStyleProviding>)spotlightItemDarkStyle;
-(NSString *)spotlightArticleID;
@end

