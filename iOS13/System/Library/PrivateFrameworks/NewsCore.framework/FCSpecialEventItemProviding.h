/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

@class NSString;


@protocol FCSpecialEventItemProviding <NSObject,NSCopying>
@property (nonatomic,readonly) id<FCSpecialEventArticleProviding> asArticle; 
@property (nonatomic,readonly) id<FCSpecialEventWebEmbedProviding> asWebEmbed; 
@property (nonatomic,readonly) unsigned long long itemType; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * actionTitle; 
@property (nonatomic,copy,readonly) NSString * actionUrlString; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@required
-(NSString *)identifier;
-(NSString *)title;
-(unsigned long long)itemType;
-(NSString *)actionTitle;
-(id<FCSpecialEventArticleProviding>)asArticle;
-(id<FCSpecialEventWebEmbedProviding>)asWebEmbed;
-(NSString *)actionUrlString;

@end

