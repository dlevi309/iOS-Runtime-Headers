/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXLayoutMetrics.h>

@interface PXEditorialLayoutMetrics : PXLayoutMetrics {

	BOOL _useSaliency;
	BOOL _useNewImplementation;
	unsigned long long _numberOfColumns;
	double _interTileSpacing;
	double _headerHeight;
	unsigned long long _lowerItemCountThreshold;
	UIEdgeInsets _padding;

}

@property (assign,nonatomic) unsigned long long numberOfColumns;                      //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
@property (assign,nonatomic) double interTileSpacing;                                 //@synthesize interTileSpacing=_interTileSpacing - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                                    //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) double headerHeight;                                     //@synthesize headerHeight=_headerHeight - In the implementation block
@property (assign,nonatomic) unsigned long long lowerItemCountThreshold;              //@synthesize lowerItemCountThreshold=_lowerItemCountThreshold - In the implementation block
@property (assign,nonatomic) BOOL useSaliency;                                        //@synthesize useSaliency=_useSaliency - In the implementation block
@property (assign,nonatomic) BOOL useNewImplementation;                               //@synthesize useNewImplementation=_useNewImplementation - In the implementation block
-(void)setNumberOfColumns:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)numberOfColumns;
-(void)setUseSaliency:(BOOL)arg1 ;
-(unsigned long long)lowerItemCountThreshold;
-(void)setLowerItemCountThreshold:(unsigned long long)arg1 ;
-(BOOL)useNewImplementation;
-(void)setUseNewImplementation:(BOOL)arg1 ;
-(void)setInterTileSpacing:(double)arg1 ;
-(void)setHeaderHeight:(double)arg1 ;
-(UIEdgeInsets)padding;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(double)headerHeight;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)useSaliency;
-(double)interTileSpacing;
@end

