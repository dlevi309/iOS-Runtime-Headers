/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


#import <HealthUI/HealthUI-Structs.h>
@interface HKPointLabelEngine : NSObject {

	BOOL _isLabelShiftingEnabled;
	BOOL _lastRenderOverlapped;
	/*^block*/id _sizeForValue;
	long long _state;
	CGPoint _previousTransformedPoint;
	CGPoint _previousUntransformedPoint;
	CGPoint _currentTransformedPoint;
	CGPoint _currentUntransformedPoint;
	CGRect _boundingRegion;
	SCD_Struct_HK15 _previousRenderingData;
	SCD_Struct_HK15 _currentRenderingData;

}

@property (assign,nonatomic) long long state;                                    //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) CGPoint previousTransformedPoint;                   //@synthesize previousTransformedPoint=_previousTransformedPoint - In the implementation block
@property (assign,nonatomic) CGPoint previousUntransformedPoint;                 //@synthesize previousUntransformedPoint=_previousUntransformedPoint - In the implementation block
@property (assign,nonatomic) CGPoint currentTransformedPoint;                    //@synthesize currentTransformedPoint=_currentTransformedPoint - In the implementation block
@property (assign,nonatomic) CGPoint currentUntransformedPoint;                  //@synthesize currentUntransformedPoint=_currentUntransformedPoint - In the implementation block
@property (assign,nonatomic) SCD_Struct_HK11 previousRenderingData;              //@synthesize previousRenderingData=_previousRenderingData - In the implementation block
@property (assign,nonatomic) SCD_Struct_HK11 currentRenderingData;               //@synthesize currentRenderingData=_currentRenderingData - In the implementation block
@property (assign,nonatomic) BOOL lastRenderOverlapped;                          //@synthesize lastRenderOverlapped=_lastRenderOverlapped - In the implementation block
@property (nonatomic,readonly) CGRect boundingRegion;                            //@synthesize boundingRegion=_boundingRegion - In the implementation block
@property (assign,nonatomic) BOOL isLabelShiftingEnabled;                        //@synthesize isLabelShiftingEnabled=_isLabelShiftingEnabled - In the implementation block
@property (nonatomic,copy,readonly) id sizeForValue;                             //@synthesize sizeForValue=_sizeForValue - In the implementation block
-(void)setState:(long long)arg1 ;
-(long long)state;
-(CGRect)boundingRegion;
-(id)initWithBoundingRegion:(CGRect)arg1 isLabelShiftingEnabled:(BOOL)arg2 labelSizeBlock:(/*^block*/id)arg3 ;
-(BOOL)processTransformedPoint:(CGPoint)arg1 untransformedPoint:(CGPoint)arg2 ;
-(SCD_Struct_HK11)renderingData;
-(BOOL)processLastPoint;
-(long long)_slopeForPoint:(CGPoint)arg1 otherPoint:(CGPoint)arg2 ;
-(SCD_Struct_HK11)_computeRenderingDataForValue:(double)arg1 transformedPoint:(CGPoint)arg2 previousSlope:(long long)arg3 nextSlope:(long long)arg4 previousOptions:(long long)arg5 ;
-(void)_layoutTransformRectVerticallyForData:(SCD_Struct_HK11*)arg1 withTransformedPoint:(CGPoint)arg2 ;
-(void)_transformRectIfNeededForData:(SCD_Struct_HK11*)arg1 withTransformedPoint:(CGPoint)arg2 ;
-(BOOL)isLabelShiftingEnabled;
-(void)setIsLabelShiftingEnabled:(BOOL)arg1 ;
-(id)sizeForValue;
-(CGPoint)previousTransformedPoint;
-(void)setPreviousTransformedPoint:(CGPoint)arg1 ;
-(CGPoint)previousUntransformedPoint;
-(void)setPreviousUntransformedPoint:(CGPoint)arg1 ;
-(CGPoint)currentTransformedPoint;
-(void)setCurrentTransformedPoint:(CGPoint)arg1 ;
-(CGPoint)currentUntransformedPoint;
-(void)setCurrentUntransformedPoint:(CGPoint)arg1 ;
-(SCD_Struct_HK11)previousRenderingData;
-(void)setPreviousRenderingData:(SCD_Struct_HK11)arg1 ;
-(SCD_Struct_HK11)currentRenderingData;
-(void)setCurrentRenderingData:(SCD_Struct_HK11)arg1 ;
-(BOOL)lastRenderOverlapped;
-(void)setLastRenderOverlapped:(BOOL)arg1 ;
@end
