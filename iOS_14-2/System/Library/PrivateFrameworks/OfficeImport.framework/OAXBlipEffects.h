/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXBlipEffects : NSObject
+(id)readLuminanceEffect:(xmlNode*)arg1 ;
+(id)readGrayscaleEffect:(xmlNode*)arg1 ;
+(id)readBiLevelEffect:(xmlNode*)arg1 ;
+(id)readColorChangeEffect:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(id)readAlphaModFixEffect:(xmlNode*)arg1 ;
+(id)readDuotoneEffect:(xmlNode*)arg1 ;
+(void)writeAlphaModFixEffect:(id)arg1 to:(id)arg2 ;
+(void)writeBiLevelEffect:(id)arg1 to:(id)arg2 ;
+(void)writeColorChangeEffect:(id)arg1 to:(id)arg2 ;
+(void)writeDuotoneEffect:(id)arg1 to:(id)arg2 ;
+(void)writeGrayscaleEffect:(id)arg1 to:(id)arg2 ;
+(void)writeLuminanceEffect:(id)arg1 to:(id)arg2 ;
+(void)readBlipEffectsFromBlipRef:(xmlNode*)arg1 toBlipRef:(id)arg2 drawingState:(id)arg3 ;
+(void)writeBlipEffects:(id)arg1 to:(id)arg2 ;
+(id)duotoneTransferModeEnumMap;
@end

