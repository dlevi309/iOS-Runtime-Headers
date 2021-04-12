/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/PVLivePlayerSource.h>

@class PVFrameSet, PVLivePlayerCameraRenderLink, NSString;

@interface PVLivePlayerCameraSource : NSObject <PVLivePlayerSource> {

	HGSynchronizable* _lock;
	PVFrameSet* _mostRecentFrameSet;
	PVLivePlayerCameraRenderLink* _renderLink;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)pause;
-(void)play;
-(SCD_Struct_PV22)itemTimeForHostTime:(double)arg1 ;
-(void)setMuted:(BOOL)arg1 ;
-(void)seekToTime:(SCD_Struct_PV22)arg1 ;
-(void)dealloc;
-(void)cameraFrameSetRecieved:(id)arg1 ;
-(void)cameraFrameSetDropped;
-(void)registerRenderLink:(id)arg1 ;
-(id)imageBufferForHostTime:(double)arg1 ;
@end

