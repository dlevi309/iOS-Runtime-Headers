/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXMemoriesFeedLayoutMetrics.h>

@interface PXMemoriesFeedWidgetLayoutMetrics : PXMemoriesFeedLayoutMetrics {

	unsigned long long _numberOfColumns;
	unsigned long long _numberOfRows;
	long long _layoutAxis;
	CGSize _interitemSpacing;

}

@property (assign,nonatomic) unsigned long long numberOfColumns;              //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfRows;                 //@synthesize numberOfRows=_numberOfRows - In the implementation block
@property (assign,nonatomic) CGSize interitemSpacing;                         //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (assign,nonatomic) long long layoutAxis;                            //@synthesize layoutAxis=_layoutAxis - In the implementation block
-(void)setNumberOfColumns:(unsigned long long)arg1 ;
-(void)setLayoutAxis:(long long)arg1 ;
-(long long)layoutAxis;
-(id)init;
-(unsigned long long)numberOfRows;
-(CGSize)interitemSpacing;
-(unsigned long long)numberOfColumns;
-(void)setNumberOfRows:(unsigned long long)arg1 ;
-(void)setInteritemSpacing:(CGSize)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

