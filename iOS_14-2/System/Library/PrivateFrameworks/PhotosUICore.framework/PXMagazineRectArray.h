/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PXMagazineRectArray : NSObject <NSCopying> {

	PXMagazineRect* _rects;
	unsigned long long _currentIndex;
	unsigned long long _size;
	double _score;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (assign,nonatomic) double score;                            //@synthesize score=_score - In the implementation block
-(id)initWithSize:(unsigned long long)arg1 ;
-(double)score;
-(PXMagazineRect)rectAtIndex:(unsigned long long)arg1 ;
-(void)setScore:(double)arg1 ;
-(unsigned long long)count;
-(void)addRect:(PXMagazineRect)arg1 ;
-(unsigned long long)rowsUsed;
-(void)removeLastRect;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

