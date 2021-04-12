/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

@class NSObject;


@protocol BCSItemIdentifying <NSObject>
@property (nonatomic,readonly) NSObject * itemIdentifier; 
@property (nonatomic,readonly) long long truncatedHash; 
@property (nonatomic,readonly) long long type; 
@required
-(NSObject *)itemIdentifier;
-(long long)type;
-(long long)truncatedHash;
-(BOOL)matchesItemIdentifying:(id)arg1;

@end
