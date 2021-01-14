/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class MPMediaItem;

@interface _MPModelLibraryKeepLocalChangeRequestUpdateItemOperation : MPAsyncOperation {

	MPMediaItem* _mediaItem;
	long long _keepLocal;

}

@property (nonatomic,retain) MPMediaItem * mediaItem;              //@synthesize mediaItem=_mediaItem - In the implementation block
@property (assign,nonatomic) long long keepLocal;                  //@synthesize keepLocal=_keepLocal - In the implementation block
-(void)execute;
-(void)setMediaItem:(MPMediaItem *)arg1 ;
-(long long)keepLocal;
-(void)setKeepLocal:(long long)arg1 ;
-(MPMediaItem *)mediaItem;
@end

