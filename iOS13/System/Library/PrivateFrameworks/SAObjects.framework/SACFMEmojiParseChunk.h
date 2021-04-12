/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SACFMMessageTextParseChunk.h>

@class NSArray;

@interface SACFMEmojiParseChunk : SACFMMessageTextParseChunk

@property (assign,nonatomic) long long emojiCount; 
@property (nonatomic,copy) NSArray * inflectedEmojiList; 
+(id)emojiParseChunk;
+(id)emojiParseChunkWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(long long)emojiCount;
-(void)setEmojiCount:(long long)arg1 ;
-(NSArray *)inflectedEmojiList;
-(void)setInflectedEmojiList:(NSArray *)arg1 ;
@end

