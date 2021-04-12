/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)traits;
-(void)setTraits:(int)arg1 ;
-(double)pointSize;
-(id)description;
-(void)setPointSize:(double)arg1 ;
-(BOOL)textLegibility;
-(BOOL)_isEqualToKey:(id)arg1 ;
-(void)setTextLegibility:(BOOL)arg1 ;
-(unsigned long long)_hash;
@end

