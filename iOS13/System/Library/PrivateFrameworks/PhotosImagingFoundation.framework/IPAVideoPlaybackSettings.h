/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <PhotosImagingFoundation/IPAEditDescription.h>

@interface IPAVideoPlaybackSettings : IPAEditDescription {

	SCD_Struct_IP1 _naturalDuration;

}

@property (nonatomic,readonly) SCD_Struct_IP1 naturalDuration;              //@synthesize naturalDuration=_naturalDuration - In the implementation block
+(void)initialize;
+(Class)expectedOperationClass;
+(id)playbackSettingsForAdjustments:(id)arg1 ;
+(Class)operationClassForIdentifier:(id)arg1 ;
+(id)presetifyAdjustmentStack:(id)arg1 ;
-(id)debugDescription;
-(BOOL)isEqualToDescription:(id)arg1 ;
-(id)initWithOperations:(id)arg1 ;
-(SCD_Struct_IP2)naturalPlaybackRange;
-(SCD_Struct_IP1)scaledTimeFromNaturalTime:(SCD_Struct_IP1)arg1 ;
-(id)descriptionByInsertingOrReplacingOperation:(id)arg1 ;
-(SCD_Struct_IP1)scaledDuration;
-(SCD_Struct_IP2)scaledPlaybackRangeForScaledDuration:(SCD_Struct_IP1)arg1 ;
-(SCD_Struct_IP1)naturalTimeFromScaledTime:(SCD_Struct_IP1)arg1 ;
-(SCD_Struct_IP1)naturalTimeForPosterFrame;
-(id)archivalRepresentation;
-(id)initWithOperations:(id)arg1 naturalDuration:(SCD_Struct_IP1)arg2 ;
-(unsigned long long)sortOrderForOperationWithIdentifier:(id)arg1 ;
-(id)descriptionWithOperations:(id)arg1 ;
-(id)descriptionByAddingOperation:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)descriptionByAddingOperation:(id)arg1 ;
-(id)descriptionByReplacingOperation:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)operationWithIdentifier:(id)arg1 ;
-(id)posterFrameOperation;
-(id)trimOperation;
-(id)slomoOperation;
-(SCD_Struct_IP1)naturalDuration;
@end

