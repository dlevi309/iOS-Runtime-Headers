/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
*/

#import <Espresso/Espresso-Structs.h>
#import <Espresso/EspressoDataFrameAttachment.h>

@interface EspressoDataFrameTensorAttachment : EspressoDataFrameAttachment {

	SCD_Struct_Es2* buffer;

}
+(SCD_Struct_Es2*)copyFromCVPixelBuffer:(CVBufferRef)arg1 ;
-(void)loadFromDict:(id)arg1 frameStorage:(id)arg2 ;
-(SCD_Struct_Es2*)copyAsEspressoBuffer;
@end

