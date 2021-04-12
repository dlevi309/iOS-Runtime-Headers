/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmojiKit.framework/EmojiKit
*/

#import <EmojiKit/EmojiKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface EMKEmojiTokenList : NSObject <NSCopying> {

	NSArray* _emojiTokenArray;

}

@property (readonly) NSArray * emojiTokenArray; 
@property (readonly) unsigned long long count; 
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)emojiTokenAtIndex:(unsigned long long)arg1 ;
-(id)initWithEmojiTokenArray:(id)arg1 ;
-(NSArray *)emojiTokenArray;
@end

