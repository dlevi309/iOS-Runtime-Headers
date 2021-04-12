/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/_UIFontCacheKey.h>

@interface _UIFontSystemCacheKey : _UIFontCacheKey {

	BOOL _textLegibility;
	int _traits;
	double _pointSize;

}

@property (assign,nonatomic) int traits;                       //@synthesize traits=_traits - In the implementation block
@property (assign,nonatomic) double pointSize;                 //@synthesize pointSize=_pointSize - In the implementation block
@property (assign,nonatomic) BOOL textLegibility;              //@synthesize textLegibility=_textLegibility - In the implementation block
-(id)description;
-(unsigned long long)_hash;
-(double)pointSize;
-(int)traits;
-(void)setTraits:(int)arg1 ;
-(void)setPointSize:(double)arg1 ;
-(void)setTextLegibility:(BOOL)arg1 ;
-(BOOL)_isEqualToKey:(id)arg1 ;
-(BOOL)textLegibility;
@end

