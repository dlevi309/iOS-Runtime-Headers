/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <NeutrinoCore/NUAutoCalculator.h>
#import <libobjc.A.dylib/NUTimeBased.h>

@class NSString;

@interface PICurvesAutoCalculator : NUAutoCalculator <NUTimeBased>

@property (assign,nonatomic) SCD_Struct_PI7 time; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dictionariesFromPoints:(id)arg1 ;
+(id)_defaultCurveArray;
+(id)autoValuesForBlackPoint:(double)arg1 whitePoint:(double)arg2 ;
-(void)submit:(/*^block*/id)arg1 ;
-(id)computeCurvesForImageHistogram:(id)arg1 ;
@end

