/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmojiKit.framework/EmojiKit
*/


#import <EmojiKit/EmojiKit-Structs.h>
@class NSMutableDictionary;

@interface EMKTextEnumerator : NSObject {

	NSMutableDictionary* _emojiDatasByLanguage;

}
-(id)init;
-(id)emojiDataForLanguage:(id)arg1 ;
-(void)enumerateEmojiSignifiersInString:(id)arg1 touchingRange:(NSRange)arg2 language:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
@end

