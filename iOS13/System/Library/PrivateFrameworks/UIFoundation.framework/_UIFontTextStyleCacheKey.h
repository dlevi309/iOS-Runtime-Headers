/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/_UIFontCacheKey.h>

@class NSString;

@interface _UIFontTextStyleCacheKey : _UIFontCacheKey {

	BOOL _textLegibility;
	NSString* _textStyle;
	NSString* _contentSizeCategory;

}

@property (nonatomic,copy) NSString * textStyle;                        //@synthesize textStyle=_textStyle - In the implementation block
@property (nonatomic,copy) NSString * contentSizeCategory;              //@synthesize contentSizeCategory=_contentSizeCategory - In the implementation block
@property (assign,nonatomic) BOOL textLegibility;                       //@synthesize textLegibility=_textLegibility - In the implementation block
-(void)dealloc;
-(id)description;
-(unsigned long long)_hash;
-(void)setTextLegibility:(BOOL)arg1 ;
-(void)setTextStyle:(NSString *)arg1 ;
-(void)setContentSizeCategory:(NSString *)arg1 ;
-(BOOL)_isEqualToKey:(id)arg1 ;
-(BOOL)textLegibility;
-(NSString *)textStyle;
-(NSString *)contentSizeCategory;
@end

