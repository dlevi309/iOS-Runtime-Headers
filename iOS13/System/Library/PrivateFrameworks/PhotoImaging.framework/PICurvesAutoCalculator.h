/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <NeutrinoCore/NUAutoCalculator.h>
#import <libobjc.A.dylib/NUTimeBased.h>

@class NSString;

@interface PICurvesAutoCalculator : NUAutoCalculator <NUTimeBased>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) SCD_Struct_PI8 time; 
+(id)dictionariesFromPoints:(id)arg1 ;
+(id)_defaultCurveArray;
+(id)autoValuesForBlackPoint:(double)arg1 whitePoint:(double)arg2 ;
-(void)submit:(/*^block*/id)arg1 ;
-(id)computeCurvesForImageHistogram:(id)arg1 ;
@end

