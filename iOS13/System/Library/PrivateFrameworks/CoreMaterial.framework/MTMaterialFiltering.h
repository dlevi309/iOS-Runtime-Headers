/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial
*/

@class NSArray, NSString;


@protocol MTMaterialFiltering <NSObject>
@property (nonatomic,readonly) double luminanceAmount; 
@property (nonatomic,copy,readonly) NSArray * luminanceValues; 
@property (nonatomic,readonly) double blurRadius; 
@property (getter=isAverageColorEnabled,nonatomic,readonly) BOOL averageColorEnabled; 
@property (nonatomic,readonly) double saturation; 
@property (nonatomic,readonly) double brightness; 
@property (nonatomic,readonly) CAColorMatrix colorMatrix; 
@property (nonatomic,readonly) double zoom; 
@property (nonatomic,readonly) double backdropScale; 
@property (nonatomic,copy,readonly) NSString * blurInputQuality; 
@property (getter=isBlurAtEnd,nonatomic,readonly) BOOL blurAtEnd; 
@required
-(double)saturation;
-(double)brightness;
-(double)zoom;
-(double)blurRadius;
-(NSString *)blurInputQuality;
-(double)luminanceAmount;
-(NSArray *)luminanceValues;
-(CAColorMatrix)colorMatrix;
-(BOOL)isBlurAtEnd;
-(double)backdropScale;
-(BOOL)isAverageColorEnabled;

@end

