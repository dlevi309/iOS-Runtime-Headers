/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/

@class NSString;


@protocol EDPersistedMessage <EDIndexableMessage>
@property (nonatomic,copy,readonly) NSString * persistentID; 
@property (nonatomic,readonly) long long persistedMessageID; 
@property (nonatomic,readonly) long long globalMessageID; 
@property (readonly) unsigned long long conversationFlags; 
@required
-(long long)globalMessageID;
-(NSString *)persistentID;
-(unsigned long long)conversationFlags;
-(long long)persistedMessageID;

@end

