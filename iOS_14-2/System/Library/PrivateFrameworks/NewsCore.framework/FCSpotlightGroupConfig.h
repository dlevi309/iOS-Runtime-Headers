/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<FCCardStyleProviding>)spotlightItemDarkStyle;
-(NSString *)spotlightEyebrowTitle;
-(id)initWithDictionary:(id)arg1 ;
-(id<FCCardStyleProviding>)spotlightItemStyle;
-(NSString *)spotlightArticleID;
-(NSString *)spotlightCallToActionTitle;
-(NSDate *)publishDate;
@end

