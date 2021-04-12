/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTextStyle:(NSString *)arg1 ;
-(void)setContentSizeCategory:(NSString *)arg1 ;
-(NSString *)contentSizeCategory;
-(id)description;
-(NSString *)textStyle;
-(BOOL)textLegibility;
-(BOOL)_isEqualToKey:(id)arg1 ;
-(void)setTextLegibility:(BOOL)arg1 ;
-(void)dealloc;
-(unsigned long long)_hash;
@end

