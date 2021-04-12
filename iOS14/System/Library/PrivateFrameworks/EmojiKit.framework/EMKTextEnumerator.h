/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

