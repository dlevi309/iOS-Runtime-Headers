/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)emojiTokenAtIndex:(unsigned long long)arg1 ;
-(id)initWithEmojiTokenArray:(id)arg1 ;
-(NSArray *)emojiTokenArray;
@end

