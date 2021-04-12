/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/PVLivePlayerSource.h>

@class PVFrameSet, NSString;

@interface PVLivePlayerImageSource : NSObject <PVLivePlayerSource> {

	PVFrameSet* _imageFrame;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithURL:(id)arg1 ;
-(void)pause;
-(void)play;
-(void)setMuted:(BOOL)arg1 ;
-(void)seekToTime:(SCD_Struct_PV20)arg1 ;
-(SCD_Struct_PV20)itemTimeForHostTime:(double)arg1 ;
-(id)initWithPVImageBuffer:(id)arg1 ;
-(id)imageBufferForHostTime:(double)arg1 ;
-(id)initWithUImage:(id)arg1 ;
@end

