/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <libobjc.A.dylib/BCSCloudKitQueryProviding.h>

@class NSString;

@interface BCSCloudKitQueryProvider : NSObject <BCSCloudKitQueryProviding>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)queryForFetchBloomFilterAndConfigItemWithType:(long long)arg1 ;
-(id)queryForFetchShardIdentifier:(id)arg1 ;
-(id)queryForFetchItemsWithStartIndex:(long long)arg1 endIndex:(long long)arg2 type:(long long)arg3 ;
@end

