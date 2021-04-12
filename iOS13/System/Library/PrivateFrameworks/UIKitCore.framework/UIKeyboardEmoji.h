/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSString;

@interface UIKeyboardEmoji : NSObject {

	NSString* _emojiString;
	unsigned long long _variantMask;

}

@property (nonatomic,retain) NSString * emojiString;              //@synthesize emojiString=_emojiString - In the implementation block
@property (assign) unsigned long long variantMask;                //@synthesize variantMask=_variantMask - In the implementation block
+(id)emojiWithString:(id)arg1 withVariantMask:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)key;
-(id)initWithString:(id)arg1 withVariantMask:(unsigned long long)arg2 ;
-(NSString *)emojiString;
-(void)setEmojiString:(NSString *)arg1 ;
-(unsigned long long)variantMask;
-(void)setVariantMask:(unsigned long long)arg1 ;
@end

