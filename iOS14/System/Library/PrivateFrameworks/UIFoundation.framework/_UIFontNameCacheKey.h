/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setFontName:(NSString *)arg1 ;
-(NSString *)fontName;
-(int)traits;
-(void)setTraits:(int)arg1 ;
-(double)pointSize;
-(id)description;
-(void)setPointSize:(double)arg1 ;
-(BOOL)_isEqualToKey:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)_hash;
@end

