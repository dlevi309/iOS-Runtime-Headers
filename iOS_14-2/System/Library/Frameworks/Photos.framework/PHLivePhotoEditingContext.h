/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


#import <Photos/Photos-Structs.h>
@class PFLivePhotoEditSession, CIImage;

@interface PHLivePhotoEditingContext : NSObject {

	PFLivePhotoEditSession* _editSession;

}

@property (readonly) CIImage * fullSizeImage; 
@property (readonly) SCD_Struct_PH9 duration; 
@property (readonly) SCD_Struct_PH9 photoTime; 
@property (copy) id frameProcessor; 
@property (assign) float audioVolume; 
@property (readonly) unsigned orientation; 
+(id)errorWithUnderlyingError:(id)arg1 ;
-(id)init;
-(void)setAudioVolume:(float)arg1 ;
-(unsigned)orientation;
-(SCD_Struct_PH9)photoTime;
-(CIImage *)fullSizeImage;
-(SCD_Struct_PH9)duration;
-(void)cancel;
-(float)audioVolume;
-(id)initWithLivePhotoEditingInput:(id)arg1 ;
-(id)frameProcessor;
-(void)setFrameProcessor:(id)arg1 ;
-(void)prepareLivePhotoForPlaybackWithTargetSize:(CGSize)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)saveLivePhotoToOutput:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

