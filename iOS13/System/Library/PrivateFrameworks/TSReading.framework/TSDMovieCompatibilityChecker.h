/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@class AVAsset, NSError, NSSet;

@interface TSDMovieCompatibilityChecker : NSObject {

	AVAsset* mAsset;
	long long mCompatibilityLevel;
	NSError* mError;
	SCD_Struct_TS86 mCustomMaxPlayableVideoDimensions;
	NSSet* mCustomPlayableVideoCodecTypes;
	int mCustomMaxPlayableVideoPixelsPerFrame;

}

@property (nonatomic,readonly) long long compatibilityLevel; 
@property (nonatomic,readonly) NSError * error; 
-(id)init;
-(void)dealloc;
-(NSError *)error;
-(void)cancel;
-(id)initWithAsset:(id)arg1 ;
-(void)p_didFinishCheckingCompatibilityUpToLevel:(long long)arg1 actualLevel:(long long)arg2 didCancel:(BOOL)arg3 error:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)p_isLoadedAssetPlayableOnAllDevices;
-(void)checkCompatibilityUpToLevel:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)p_assetHasSupportedFileTypeOnAllDevices;
-(BOOL)p_isVideoTrackPlayableOnAllDevices:(id)arg1 ;
-(BOOL)p_isAudioTrackPlayableOnAllDevices:(id)arg1 ;
-(BOOL)p_isSorenson3VideoFormatPlayableOnAllDevices:(opaqueCMFormatDescriptionRef)arg1 ;
-(BOOL)p_isH264VideoFormatPlayableOnAllDevices:(opaqueCMFormatDescriptionRef)arg1 ;
-(BOOL)p_isMPEG4VideoFormatPlayableOnAllDevices:(opaqueCMFormatDescriptionRef)arg1 ;
-(BOOL)p_isH263VideoFormatPlayableOnAllDevices:(opaqueCMFormatDescriptionRef)arg1 ;
-(id)p_sampleDescriptionExtensionAtomDataFromVideoFormatDescription:(opaqueCMFormatDescriptionRef)arg1 forAtomType:(id)arg2 ;
-(void)checkCustomCompatibilityWithVideoCodecTypes:(id)arg1 maxPlayableVideoDimensions:(CGSize)arg2 maxPlayableVideoPixelsPerFrame:(int)arg3 completionHandler:(/*^block*/id)arg4 ;
-(long long)compatibilityLevel;
@end

