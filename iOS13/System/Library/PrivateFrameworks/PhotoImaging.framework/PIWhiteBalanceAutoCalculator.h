/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <NeutrinoCore/NUAutoCalculator.h>
#import <libobjc.A.dylib/NUTimeBased.h>

@class NSString;

@interface PIWhiteBalanceAutoCalculator : NUAutoCalculator <NUTimeBased>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) SCD_Struct_PI8 time; 
-(void)submit:(/*^block*/id)arg1 ;
-(BOOL)_useTempTint:(SCD_Struct_PI11)arg1 ;
-(SCD_Struct_PI11)_correctedRGBResultFromResult:(SCD_Struct_PI11)arg1 ;
-(SCD_Struct_PI11)_chooseNeutralGrayForNonSushi:(SCD_Struct_PI12)arg1 ;
-(CGPoint)_chooseTempTintForSushi:(SCD_Struct_PI12)arg1 RAWProperties:(id)arg2 brightness:(double)arg3 ;
@end

