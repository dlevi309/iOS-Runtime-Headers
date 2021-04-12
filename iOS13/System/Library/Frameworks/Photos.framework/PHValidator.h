/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


#import <Photos/Photos-Structs.h>
@interface PHValidator : NSObject
+(BOOL)extension:(id)arg1 conformsToUTTypes:(id)arg2 ;
+(id)supportedMovieTypes;
+(id)supportedImageTypes;
+(BOOL)uti:(id)arg1 conformsToUTTypes:(id)arg2 ;
+(BOOL)url:(id)arg1 conformsToUTTypes:(id)arg2 ;
+(id)supportedAudioTypes;
+(id)supportedTypes;
+(unsigned char)mediaTypeForUTI:(id)arg1 ;
+(unsigned char)mediaTypeForURL:(id)arg1 ;
+(BOOL)isSupportedAudioUTI:(id)arg1 ;
+(BOOL)isSupportedMovieUTI:(id)arg1 ;
+(BOOL)isSupportedImageUTI:(id)arg1 ;
+(BOOL)isSupportedAudio:(id)arg1 ;
+(BOOL)isSupportedMovie:(id)arg1 ;
+(BOOL)isSupportedImage:(id)arg1 ;
-(void)getLivePhotoVideoMetadataFromURL:(id)arg1 pairingIdentifier:(id*)arg2 videoDuration:(SCD_Struct_PH9*)arg3 imageDisplayTime:(SCD_Struct_PH9*)arg4 ;
-(BOOL)validateURL:(id)arg1 withOptions:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)validateURLs:(id)arg1 withOptions:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)validateData:(id)arg1 withOptions:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)isValidImagePathExtension:(id)arg1 ;
-(BOOL)isValidVideoPathExtension:(id)arg1 ;
-(BOOL)_pathExtension:(id)arg1 conformsToType:(CFStringRef)arg2 ;
-(BOOL)_validateImageSource:(CGImageSourceRef)arg1 error:(id*)arg2 ;
-(BOOL)_validateVideoURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)_validateLivePhotoResourceURLs:(id)arg1 error:(id*)arg2 ;
-(void)getLivePhotoImageMetadataFromURL:(id)arg1 pairingIdentifier:(id*)arg2 ;
@end

