/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

@class NSString;


@protocol BCSShardItemProtocol <BCSShardItemIdentifying,BCSExpiring>
@property (nonatomic,readonly) NSString * bloomFilterString; 
@required
-(NSString *)bloomFilterString;
-(BOOL)containsItemMatching:(id)arg1;

@end

