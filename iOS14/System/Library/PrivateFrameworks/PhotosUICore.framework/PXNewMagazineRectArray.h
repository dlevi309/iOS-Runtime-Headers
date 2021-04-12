/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class PXNewMagazineGrid;

@interface PXNewMagazineRectArray : NSObject {

	unsigned long long _currentIndex;
	unsigned long long _size;
	PXNewMagazineGrid* _tileGrid;
	BOOL _isPerfectEnding;
	double _score;
	unsigned long long _endingType;
	PXMagazineRect* _rects;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (assign,nonatomic) double score;                               //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) unsigned long long endingType;              //@synthesize endingType=_endingType - In the implementation block
@property (nonatomic,readonly) PXMagazineRect* rects;                    //@synthesize rects=_rects - In the implementation block
-(PXMagazineRect*)rects;
-(double)score;
-(PXMagazineRect)rectAtIndex:(unsigned long long)arg1 ;
-(void)setScore:(double)arg1 ;
-(unsigned long long)count;
-(void)addRect:(PXMagazineRect)arg1 ;
-(unsigned long long)rowsUsed;
-(void)removeLastRect;
-(unsigned long long)endingType;
-(void)reset;
-(BOOL)nextEmptyTileX:(long long*)arg1 Y:(long long*)arg2 maxWidth:(long long*)arg3 ;
-(BOOL)isPerfectEnding;
-(BOOL)isGoodEnding;
-(id)initWithSize:(unsigned long long)arg1 tileGrid:(id)arg2 ;
-(id)immutableCopyForCurrentRectsCount;
-(double)tileDensity;
-(BOOL)isEqualToRectArray:(id)arg1 ;
-(void)setEndingType:(unsigned long long)arg1 ;
-(void)dealloc;
@end

