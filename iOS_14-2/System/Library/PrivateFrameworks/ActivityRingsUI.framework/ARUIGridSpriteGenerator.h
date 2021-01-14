/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/


@interface ARUIGridSpriteGenerator : NSObject {

	unsigned long long _spriteCount;
	unsigned long long _framesPerSprite;
	unsigned long long _columnsPerSprite;
	unsigned long long _rowsPerSprite;

}
+(id)generatorWithSpriteCount:(unsigned long long)arg1 framesPerSprite:(unsigned long long)arg2 rowsPerSprite:(unsigned long long)arg3 columnsPerSprite:(unsigned long long)arg4 ;
-(id)initWithSpriteCount:(unsigned long long)arg1 framesPerSprite:(unsigned long long)arg2 rowsPerSprite:(unsigned long long)arg3 columnsPerSprite:(unsigned long long)arg4 ;
-(2)originForSpriteAtIndex:(unsigned long long)arg1 ;
-(1)frameSize;
-(id)spriteAtIndex:(unsigned long long)arg1 ;
-(id)generateSprites;
@end

