/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_HK14 _previousRenderingData;
	SCD_Struct_HK14 _currentRenderingData;

}

@property (assign,nonatomic) long long state;                                    //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) CGPoint previousTransformedPoint;                   //@synthesize previousTransformedPoint=_previousTransformedPoint - In the implementation block
@property (assign,nonatomic) CGPoint previousUntransformedPoint;                 //@synthesize previousUntransformedPoint=_previousUntransformedPoint - In the implementation block
@property (assign,nonatomic) CGPoint currentTransformedPoint;                    //@synthesize currentTransformedPoint=_currentTransformedPoint - In the implementation block
@property (assign,nonatomic) CGPoint currentUntransformedPoint;                  //@synthesize currentUntransformedPoint=_currentUntransformedPoint - In the implementation block
@property (assign,nonatomic) SCD_Struct_HK15 previousRenderingData;              //@synthesize previousRenderingData=_previousRenderingData - In the implementation block
@property (assign,nonatomic) SCD_Struct_HK15 currentRenderingData;               //@synthesize currentRenderingData=_currentRenderingData - In the implementation block
@property (assign,nonatomic) BOOL lastRenderOverlapped;                          //@synthesize lastRenderOverlapped=_lastRenderOverlapped - In the implementation block
@property (nonatomic,readonly) CGRect boundingRegion;                            //@synthesize boundingRegion=_boundingRegion - In the implementation block
@property (assign,nonatomic) BOOL isLabelShiftingEnabled;                        //@synthesize isLabelShiftingEnabled=_isLabelShiftingEnabled - In the implementation block
@property (nonatomic,copy,readonly) id sizeForValue;                             //@synthesize sizeForValue=_sizeForValue - In the implementation block
-(long long)state;
-(void)setState:(long long)arg1 ;
-(CGRect)boundingRegion;
-(long long)_slopeForPoint:(CGPoint)arg1 otherPoint:(CGPoint)arg2 ;
-(SCD_Struct_HK15)_computeRenderingDataForValue:(double)arg1 transformedPoint:(CGPoint)arg2 previousSlope:(long long)arg3 nextSlope:(long long)arg4 previousOptions:(long long)arg5 ;
-(id)initWithBoundingRegion:(CGRect)arg1 isLabelShiftingEnabled:(BOOL)arg2 labelSizeBlock:(/*^block*/id)arg3 ;
-(BOOL)processTransformedPoint:(CGPoint)arg1 untransformedPoint:(CGPoint)arg2 ;
-(BOOL)processLastPoint;
-(SCD_Struct_HK15)renderingData;
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
-(SCD_Struct_HK15)previousRenderingData;
-(void)setPreviousRenderingData:(SCD_Struct_HK15)arg1 ;
-(SCD_Struct_HK15)currentRenderingData;
-(void)setCurrentRenderingData:(SCD_Struct_HK15)arg1 ;
-(BOOL)lastRenderOverlapped;
-(void)setLastRenderOverlapped:(BOOL)arg1 ;
@end

