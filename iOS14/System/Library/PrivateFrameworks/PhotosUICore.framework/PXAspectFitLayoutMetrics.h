/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXLayoutMetrics.h>

@interface PXAspectFitLayoutMetrics : PXLayoutMetrics {

	double _interTileSpacing;
	long long _minTilesPerRow;
	long long _maxTilesPerRow;
	double _minRowAspectRatio;
	UIEdgeInsets _contentInsets;

}

@property (assign,nonatomic) double interTileSpacing;                 //@synthesize interTileSpacing=_interTileSpacing - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;              //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) long long minTilesPerRow;                //@synthesize minTilesPerRow=_minTilesPerRow - In the implementation block
@property (assign,nonatomic) long long maxTilesPerRow;                //@synthesize maxTilesPerRow=_maxTilesPerRow - In the implementation block
@property (assign,nonatomic) double minRowAspectRatio;                //@synthesize minRowAspectRatio=_minRowAspectRatio - In the implementation block
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(id)init;
-(UIEdgeInsets)contentInsets;
-(void)setInterTileSpacing:(double)arg1 ;
-(long long)minTilesPerRow;
-(void)setMinTilesPerRow:(long long)arg1 ;
-(long long)maxTilesPerRow;
-(void)setMaxTilesPerRow:(long long)arg1 ;
-(double)minRowAspectRatio;
-(void)setMinRowAspectRatio:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)interTileSpacing;
@end

