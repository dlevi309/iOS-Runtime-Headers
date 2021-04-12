/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFeed.framework/NewsFeed
*/

#import <NewsCore/FCTag.h>

@class NSArray;

@interface _TtCZFE8NewsFeedV13TeaFoundation6Random7channelFT4withSS_PSo18FCChannelProviding_L_9RandomTag : FCTag

@property (readonly,nonatomic) NSArray * currentIssueIDs; 
-(id)init;
-(id)initChannelFromNotificationWithIdentifier:(id)arg1 name:(id)arg2 nameImageAssetHandle:(id)arg3 nameImageMaskAssetHandle:(id)arg4 ;
-(NSArray *)currentIssueIDs;
-(id)initWithTagType:(unsigned long long)arg1 identifier:(id)arg2 name:(id)arg3 ;
-(id)initWithData:(id)arg1 context:(id)arg2 ;
-(id)initForTestingWithTagType:(unsigned long long)arg1 identifier:(id)arg2 name:(id)arg3 ;
-(id)initChannelForTestingWithIdentifier:(id)arg1 name:(id)arg2 defaultSection:(id)arg3 publisherAuthorizationURL:(id)arg4 publisherVerificationURL:(id)arg5 ;
-(id)initChannelForTestingWithIdentifier:(id)arg1 name:(id)arg2 publisherPaidBundlePurchaseIDs:(id)arg3 ;
@end

