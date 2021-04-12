/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/_UIFontCacheKey.h>

@class NSString;

@interface _UIFontNameCacheKey : _UIFontCacheKey {

	int _traits;
	NSString* _fontName;
	double _pointSize;

}

@property (nonatomic,copy) NSString * fontName;              //@synthesize fontName=_fontName - In the implementation block
@property (assign,nonatomic) int traits;                     //@synthesize traits=_traits - In the implementation block
@property (assign,nonatomic) double pointSize;               //@synthesize pointSize=_pointSize - In the implementation block
-(void)dealloc;
-(id)description;
-(unsigned long long)_hash;
-(NSString *)fontName;
-(void)setFontName:(NSString *)arg1 ;
-(double)pointSize;
-(int)traits;
-(void)setTraits:(int)arg1 ;
-(void)setPointSize:(double)arg1 ;
-(BOOL)_isEqualToKey:(id)arg1 ;
@end

