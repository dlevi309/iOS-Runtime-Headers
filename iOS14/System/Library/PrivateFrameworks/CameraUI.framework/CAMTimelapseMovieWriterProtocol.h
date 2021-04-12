/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol CAMTimelapseMovieWriterProtocol <NSObject>
@property (assign,getter=isSuspended,nonatomic) BOOL suspended; 
@required
-(BOOL)isSuspended;
-(void)setSuspended:(BOOL)arg1;
-(void)writeMovieFromImageFiles:(id)arg1 visMetadataFiles:(id)arg2 startDate:(id)arg3 location:(id)arg4 outputPath:(id)arg5 transform:(CGAffineTransform)arg6 framesPerSecond:(long long)arg7 preferHEVC:(BOOL)arg8 completionHandler:(/*^block*/id)arg9;

@end

