/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <libobjc.A.dylib/JFXCompositionPlayableElementsDataSource.h>

@class CFXClip, NSString;

@interface CFXExportClipDataSource : NSObject <JFXCompositionPlayableElementsDataSource> {

	CFXClip* _clip;

}

@property (nonatomic,retain) CFXClip * clip;                        //@synthesize clip=_clip - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)imageScale;
-(CFXClip *)clip;
-(int)timeScale;
-(long long)count;
-(int)frameRate;
-(void)setClip:(CFXClip *)arg1 ;
-(CGSize)renderSize;
-(int)duration;
-(CGSize)frameSize;
-(BOOL)isExporting;
-(BOOL)screenCanShow2160P;
-(BOOL)use2160Pcontent:(BOOL)arg1 ;
-(id)playableElementAtIndex:(long long)arg1 ;
-(id)initWithClip:(id)arg1 ;
@end

