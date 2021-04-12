/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
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
-(BOOL)canBePurchased;
-(unsigned long long)contentType;
-(unsigned long long)feedHalfLifeMilliseconds;
-(BOOL)isFromBlockedStorefront;
-(NSString *)articleID;
-(long long)publisherArticleVersion;
-(unsigned long long)publishDateMilliseconds;
-(BOOL)isExplicitContent;
-(NSString *)sourceChannelID;
-(NSString *)feedID;
-(double)globalUserFeedback;
-(NSString *)clusterID;
-(unsigned long long)order;
-(long long)minimumNewsVersion;

@end

