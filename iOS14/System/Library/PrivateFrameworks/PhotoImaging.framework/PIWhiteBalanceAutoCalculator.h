/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <NeutrinoCore/NUAutoCalculator.h>
#import <libobjc.A.dylib/NUTimeBased.h>

@class NSString;

@interface PIWhiteBalanceAutoCalculator : NUAutoCalculator <NUTimeBased>

@property (assign,nonatomic) SCD_Struct_PI7 time; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)submit:(/*^block*/id)arg1 ;
-(BOOL)_useTempTint:(SCD_Struct_PI11)arg1 ;
-(SCD_Struct_PI11)_correctedRGBResultFromResult:(SCD_Struct_PI11)arg1 ;
-(SCD_Struct_PI11)_chooseNeutralGrayForNonSushi:(SCD_Struct_PI12)arg1 ;
-(CGPoint)_chooseTempTintForSushi:(SCD_Struct_PI12)arg1 RAWProperties:(id)arg2 brightness:(double)arg3 ;
@end

