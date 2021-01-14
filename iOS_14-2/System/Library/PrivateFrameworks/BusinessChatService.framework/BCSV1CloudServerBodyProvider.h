/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <libobjc.A.dylib/BCSCloudServerBodyProvider.h>

@class NSString;

@interface BCSV1CloudServerBodyProvider : NSObject <BCSCloudServerBodyProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)bodyForBusinessItemRequestWithBizID:(id)arg1 ;
-(id)bodyForItemRequestWithBucketStartIndex:(long long)arg1 endIndex:(long long)arg2 type:(long long)arg3 ;
-(id)bodyForConfigItemRequestWithType:(long long)arg1 ;
-(id)bodyForBloomFilterRequestWithStartIndex:(long long)arg1 shardCount:(long long)arg2 type:(long long)arg3 ;
-(id)bodyDictionaryForBusinessItemRequestWithBizID:(id)arg1 ;
-(id)jsonDataForBodyDictionary:(id)arg1 ;
-(id)bodyDictionaryForBusinessItemRequestWithBucketStartIndex:(long long)arg1 endIndex:(long long)arg2 type:(long long)arg3 ;
-(id)bodyDictionaryForConfigItemWithType:(long long)arg1 ;
-(id)bodyDictionaryForChatSuggestBloomFilterRequestWithStartIndex:(long long)arg1 shardCount:(long long)arg2 type:(long long)arg3 ;
@end

