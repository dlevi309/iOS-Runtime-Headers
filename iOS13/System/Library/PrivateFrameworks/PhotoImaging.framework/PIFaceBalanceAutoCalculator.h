/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <NeutrinoCore/NUAutoCalculator.h>
#import <libobjc.A.dylib/NUTimeBased.h>

@class NSString;

@interface PIFaceBalanceAutoCalculator : NUAutoCalculator <NUTimeBased> {

	long long _rawState;

}

@property (readonly) long long rawState;                            //@synthesize rawState=_rawState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) SCD_Struct_PI8 time; 
+(void)calculateRAWWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)calculateWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)faceBalanceResultFromFaceObservations:(id)arg1 request:(id)arg2 error:(out id*)arg3 ;
+(SCD_Struct_PI6)faceRectFromNormalizedFaceRet:(CGRect)arg1 forImageExtent:(SCD_Struct_PI6)arg2 scaleX:(double)arg3 scaleY:(double)arg4 ;
+(SCD_Struct_PI10)faceBalanceFromFaceImage:(id)arg1 forFaceRect:(SCD_Struct_PI6)arg2 ;
-(void)submit:(/*^block*/id)arg1 ;
-(long long)rawState;
-(id)initWithRequest:(id)arg1 isRAW:(BOOL)arg2 ;
@end

