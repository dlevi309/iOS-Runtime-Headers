/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)emojiString;
-(void)setEmojiString:(NSString *)arg1 ;
-(id)initWithString:(id)arg1 withVariantMask:(unsigned long long)arg2 ;
-(void)setVariantMask:(unsigned long long)arg1 ;
-(id)key;
-(unsigned long long)variantMask;
-(BOOL)isEqual:(id)arg1 ;
@end

