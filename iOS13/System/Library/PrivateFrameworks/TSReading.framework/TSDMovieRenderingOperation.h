/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDSwatchRenderingOperation.h>

@class TSDMovieInfo;

@interface TSDMovieRenderingOperation : TSDSwatchRenderingOperation {

	TSDMovieInfo* mMovieInfo;
	BOOL mShouldClipVertically;

}

@property (retain) TSDMovieInfo * movieInfo; 
-(void)dealloc;
-(TSDMovieInfo *)movieInfo;
-(void)setMovieInfo:(TSDMovieInfo *)arg1 ;
-(void)doWorkWithReadLock;
-(id)initWithPreset:(id)arg1 imageSize:(CGSize)arg2 imageScale:(double)arg3 swatchFrame:(CGRect)arg4 movieInfo:(id)arg5 documentRoot:(id)arg6 shouldClipVertically:(BOOL)arg7 ;
-(id)initWithPreset:(id)arg1 imageSize:(CGSize)arg2 imageScale:(double)arg3 swatchFrame:(CGRect)arg4 movieInfo:(id)arg5 documentRoot:(id)arg6 ;
@end

