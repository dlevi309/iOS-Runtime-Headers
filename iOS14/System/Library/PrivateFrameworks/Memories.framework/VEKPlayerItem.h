/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <AVFCore/AVPlayerItem.h>

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
-(CGSize)targetSize;
-(double)aspect;
-(void)setTargetSize:(CGSize)arg1 ;
-(BOOL)isRotated;
-(AltClipCollection *)altInfo;
-(OrientationInfo *)currentAltInfo;
-(void)setCurrentAltInfo:(OrientationInfo *)arg1 ;
-(void)setAltInfo:(AltClipCollection *)arg1 ;
@end

