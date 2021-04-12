/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


#import <Celestial/Celestial-Structs.h>
@class NSString, NSArray;

@interface BWDroppedSample : NSObject {

	NSString* _reason;
	SCD_Struct_BW2 _pts;
	NSArray* _backPressureSemaphoresToIgnore;

}

@property (readonly) NSString * reason; 
@property (readonly) SCD_Struct_BW2 pts; 
@property (readonly) NSArray * backPressureSemaphoresToIgnore; 
+(id)newDroppedSampleWithReason:(id)arg1 pts:(SCD_Struct_BW2)arg2 ;
+(id)newDroppedSampleFromDroppedSample:(id)arg1 backPressureSemaphoresToIgnore:(id)arg2 ;
-(void)dealloc;
-(NSString *)reason;
-(SCD_Struct_BW2)pts;
-(NSArray *)backPressureSemaphoresToIgnore;
-(id)_initDroppedSampleWithReason:(id)arg1 pts:(SCD_Struct_BW2)arg2 backPressureSemaphoresToIgnore:(id)arg3 ;
@end

