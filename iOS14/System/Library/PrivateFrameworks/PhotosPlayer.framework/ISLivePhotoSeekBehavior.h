/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <PhotosPlayer/ISBehavior.h>

@interface ISLivePhotoSeekBehavior : ISBehavior {

	BOOL _isSeeking;
	BOOL _needsSeek;
	BOOL _needsTransitionToVideo;
	/*^block*/id _seekCompletionHandler;
	SCD_Struct_IS1 _seekTime;

}

@property (assign,nonatomic) SCD_Struct_IS1 seekTime;              //@synthesize seekTime=_seekTime - In the implementation block
@property (nonatomic,copy) id seekCompletionHandler;               //@synthesize seekCompletionHandler=_seekCompletionHandler - In the implementation block
-(SCD_Struct_IS1)seekTime;
-(void)activeDidChange;
-(long long)behaviorType;
-(void)setSeekCompletionHandler:(id)arg1 ;
-(void)setSeekTime:(SCD_Struct_IS1)arg1 ;
-(id)seekCompletionHandler;
-(id)initWithInitialLayoutInfo:(id)arg1 seekTime:(SCD_Struct_IS1)arg2 ;
-(void)_seekIfNeeded;
-(void)_callSeekCompletionHandler:(BOOL)arg1 ;
-(void)_handleDidSeekToSeekTime:(BOOL)arg1 ;
@end

