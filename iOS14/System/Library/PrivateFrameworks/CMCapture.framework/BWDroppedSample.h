/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@class NSString, NSArray;

@interface BWDroppedSample : NSObject {

	NSString* _reason;
	SCD_Struct_BW8 _pts;
	NSArray* _backPressureSemaphoresToIgnore;

}

@property (readonly) NSString * reason; 
@property (readonly) SCD_Struct_BW8 pts; 
@property (readonly) NSArray * backPressureSemaphoresToIgnore; 
+(id)newDroppedSampleWithReason:(id)arg1 pts:(SCD_Struct_BW8)arg2 ;
+(id)newDroppedSampleFromDroppedSample:(id)arg1 backPressureSemaphoresToIgnore:(id)arg2 ;
-(SCD_Struct_BW8)pts;
-(id)_initDroppedSampleWithReason:(id)arg1 pts:(SCD_Struct_BW8)arg2 backPressureSemaphoresToIgnore:(id)arg3 ;
-(NSString *)reason;
-(NSArray *)backPressureSemaphoresToIgnore;
-(void)dealloc;
@end

