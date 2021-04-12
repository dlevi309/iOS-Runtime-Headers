/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic) SCD_Struct_PI7 time; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)calculateRAWWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)calculateWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)faceBalanceResultFromFaceObservations:(id)arg1 request:(id)arg2 error:(out id*)arg3 ;
+(SCD_Struct_PI6)faceRectFromNormalizedFaceRet:(CGRect)arg1 forImageExtent:(SCD_Struct_PI6)arg2 scaleX:(double)arg3 scaleY:(double)arg4 ;
+(SCD_Struct_PI10)faceBalanceFromFaceImage:(id)arg1 forFaceRect:(SCD_Struct_PI6)arg2 ;
-(long long)rawState;
-(void)submit:(/*^block*/id)arg1 ;
-(id)initWithRequest:(id)arg1 isRAW:(BOOL)arg2 ;
@end

