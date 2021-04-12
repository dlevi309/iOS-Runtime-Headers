/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@class UIBezierPath, NTKSolarTimeModel;

@interface NTKSolarPath : NSObject {

	UIBezierPath* _bezierPath;
	CGRect _bounds;
	NTKSolarTimeModel* _solarTimeModel;
	BOOL _verticallyFitsPathToBounds;
	BOOL _usePlaceholderData;
	CGPoint _points[29];
	double _altitude[29];

}

@property (nonatomic,readonly) UIBezierPath * bezierPath;                       //@synthesize bezierPath=_bezierPath - In the implementation block
@property (nonatomic,readonly) CGRect bounds;                                   //@synthesize bounds=_bounds - In the implementation block
@property (nonatomic,readonly) NTKSolarTimeModel * solarTimeModel;              //@synthesize solarTimeModel=_solarTimeModel - In the implementation block
@property (nonatomic,readonly) BOOL verticallyFitsPathToBounds;                 //@synthesize verticallyFitsPathToBounds=_verticallyFitsPathToBounds - In the implementation block
-(CGRect)bounds;
-(UIBezierPath *)bezierPath;
-(NTKSolarTimeModel *)solarTimeModel;
-(id)initWithBounds:(CGRect)arg1 solarTimeModel:(id)arg2 verticallyFitsPathToBounds:(BOOL)arg3 usePlaceholderData:(BOOL)arg4 ;
-(double)altitudeAtPercentage:(double)arg1 ;
-(id)_computeSolarPath;
-(double)altitudeAtX:(double)arg1 ;
-(BOOL)verticallyFitsPathToBounds;
@end

