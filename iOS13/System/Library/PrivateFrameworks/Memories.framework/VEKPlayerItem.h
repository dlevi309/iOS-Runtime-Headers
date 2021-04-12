/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <AVFoundation/AVPlayerItem.h>

@class AltClipCollection, OrientationInfo;

@interface VEKPlayerItem : AVPlayerItem {

	AltClipCollection* _altInfo;
	OrientationInfo* _currentAltInfo;
	CGSize _targetSize;

}

@property (nonatomic,retain) AltClipCollection * altInfo;                          //@synthesize altInfo=_altInfo - In the implementation block
@property (assign,nonatomic,__weak) OrientationInfo * currentAltInfo;              //@synthesize currentAltInfo=_currentAltInfo - In the implementation block
@property (assign,nonatomic) CGSize targetSize;                                    //@synthesize targetSize=_targetSize - In the implementation block
@property (nonatomic,readonly) BOOL isRotated; 
@property (nonatomic,readonly) double aspect; 
-(BOOL)isRotated;
-(CGSize)targetSize;
-(void)setTargetSize:(CGSize)arg1 ;
-(double)aspect;
-(AltClipCollection *)altInfo;
-(OrientationInfo *)currentAltInfo;
-(void)setCurrentAltInfo:(OrientationInfo *)arg1 ;
-(void)setAltInfo:(AltClipCollection *)arg1 ;
@end

