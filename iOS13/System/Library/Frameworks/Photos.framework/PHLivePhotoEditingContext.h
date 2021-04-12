/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


#import <Photos/Photos-Structs.h>
@class ISEditSession, CIImage;

@interface PHLivePhotoEditingContext : NSObject {

	ISEditSession* _editSession;

}

@property (readonly) CIImage * fullSizeImage; 
@property (readonly) SCD_Struct_PH9 duration; 
@property (readonly) SCD_Struct_PH9 photoTime; 
@property (copy) id frameProcessor; 
@property (assign) float audioVolume; 
@property (readonly) unsigned orientation; 
+(id)errorWithUnderlyingError:(id)arg1 ;
-(id)init;
-(void)cancel;
-(unsigned)orientation;
-(SCD_Struct_PH9)duration;
-(float)audioVolume;
-(void)setAudioVolume:(float)arg1 ;
-(CIImage *)fullSizeImage;
-(SCD_Struct_PH9)photoTime;
-(id)initWithLivePhotoEditingInput:(id)arg1 ;
-(id)frameProcessor;
-(void)setFrameProcessor:(id)arg1 ;
-(void)prepareLivePhotoForPlaybackWithTargetSize:(CGSize)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)saveLivePhotoToOutput:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

