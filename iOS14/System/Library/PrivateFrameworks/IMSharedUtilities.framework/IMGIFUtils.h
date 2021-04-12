/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
@interface IMGIFUtils : NSObject
+(BOOL)writeNewFileAtPath:(id)arg1 withProperties:(id)arg2 fromImageSource:(CGImageSourceRef)arg3 error:(id*)arg4 ;
+(BOOL)writeLoopCount:(long long)arg1 destinationFilePath:(id)arg2 fromImageSource:(CGImageSourceRef)arg3 error:(id*)arg4 ;
+(id)fileWriter;
+(void)setFileWriter:(id)arg1 ;
+(long long)loopCountFromGifProperties:(id)arg1 ;
+(BOOL)readLoopCount:(long long*)arg1 fromImageSource:(CGImageSourceRef)arg2 error:(id*)arg3 ;
+(BOOL)isGIFFileAtPath:(id)arg1 ;
+(BOOL)writeDefaultPropertiesToDestinationRef:(CGImageDestinationRef)arg1 withOptionalAdditionalGifProperties:(id)arg2 error:(id*)arg3 ;
+(BOOL)copyGifFromPath:(id)arg1 toDestinationPath:(id)arg2 error:(id*)arg3 ;
+(BOOL)writeLoopCount:(long long)arg1 withFileAtPath:(id)arg2 error:(id*)arg3 ;
+(id)logger;
+(BOOL)isGifUti:(id)arg1 ;
+(BOOL)setOutgoingError:(id*)arg1 errorCode:(long long)arg2 comment:(id)arg3 ;
+(BOOL)readFileProperties:(id*)arg1 fromImageSource:(CGImageSourceRef)arg2 error:(id*)arg3 ;
+(id)gifPropertiesFromFileProperties:(id)arg1 ;
+(BOOL)readGifProperties:(id*)arg1 fromImageSource:(CGImageSourceRef)arg2 error:(id*)arg3 ;
+(id)randomFileName;
+(id)defaultFileProperties;
+(id)setGifProperities:(id)arg1 onFileProperties:(id)arg2 ;
+(id)addGifProperties:(id)arg1 toFileProperties:(id)arg2 ;
+(BOOL)readFileProperties:(id*)arg1 fromImageSource:(CGImageSourceRef)arg2 withUpdatedLoopCount:(long long)arg3 error:(id*)arg4 ;
+(id)randomTempFilePath;
-(id)logger;
@end

