/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

@class NSString;


@protocol FCFeedTransformationItem <NSObject,FCFeedPersonalizingItem>
@property (nonatomic,copy,readonly) NSString * feedID; 
@property (nonatomic,copy,readonly) NSString * articleID; 
@property (nonatomic,copy,readonly) NSString * clusterID; 
@property (nonatomic,readonly) unsigned long long contentType; 
@property (nonatomic,readonly) unsigned long long order; 
@property (nonatomic,copy,readonly) NSString * sourceChannelID; 
@property (nonatomic,readonly) unsigned long long publishDateMilliseconds; 
@property (nonatomic,readonly) unsigned long long feedHalfLifeMilliseconds; 
@property (nonatomic,readonly) double globalUserFeedback; 
@property (getter=isFromBlockedStorefront,nonatomic,readonly) BOOL fromBlockedStorefront; 
@property (getter=isExplicitContent,nonatomic,readonly) BOOL explicitContent; 
@property (nonatomic,readonly) long long minimumNewsVersion; 
@property (nonatomic,readonly) long long publisherArticleVersion; 
@property (nonatomic,readonly) BOOL canBePurchased; 
@property (nonatomic,copy,readonly) id<FCChannelProviding> sourceChannel; 
@optional
-(id<FCChannelProviding>)sourceChannel;

@required
-(unsigned long long)order;
-(unsigned long long)contentType;
-(BOOL)isExplicitContent;
-(NSString *)clusterID;
-(NSString *)articleID;
-(NSString *)feedID;
-(double)globalUserFeedback;
-(unsigned long long)publishDateMilliseconds;
-(long long)publisherArticleVersion;
-(long long)minimumNewsVersion;
-(NSString *)sourceChannelID;
-(unsigned long long)feedHalfLifeMilliseconds;
-(BOOL)isFromBlockedStorefront;
-(BOOL)canBePurchased;

@end

