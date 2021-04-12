/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

