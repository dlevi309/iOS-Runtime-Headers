/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKCSSDeclaration.h>

@class IKColor;

@interface IKCSSDeclarationColor : IKCSSDeclaration {

	long long _sourceType;
	IKColor* _color;

}

@property (assign) long long sourceType;                   //@synthesize sourceType=_sourceType - In the implementation block
@property (nonatomic,retain) IKColor * color;              //@synthesize color=_color - In the implementation block
+(id)_stringForColor:(id)arg1 sourceType:(long long)arg2 ;
-(id)description;
-(id)stringValue;
-(IKColor *)color;
-(void)setColor:(IKColor *)arg1 ;
-(long long)sourceType;
-(void)setSourceType:(long long)arg1 ;
-(id)initWithParseDeclaration:(id)arg1 info:(id)arg2 ;
-(id)_colorFromParseObject:(id)arg1 sourceType:(long long*)arg2 ;
-(id)_keywordKolorFromParseToken:(id)arg1 ;
-(id)_linearGradientKolorFromParseFunction:(id)arg1 ;
-(id)_kolorFromParseObject:(id)arg1 sourceType:(long long*)arg2 ;
@end

