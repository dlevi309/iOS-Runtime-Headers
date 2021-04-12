/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStore/ISOperation.h>

@class SUMediaPlayerItem;

@interface SUPrepareMediaItemOperation : ISOperation {

	SUMediaPlayerItem* _mediaItem;

}

@property (nonatomic,copy,readonly) SUMediaPlayerItem * mediaPlayerItem;              //@synthesize mediaItem=_mediaItem - In the implementation block
-(id)init;
-(void)dealloc;
-(void)run;
-(id)initWithMediaPlayerItem:(id)arg1 ;
-(SUMediaPlayerItem *)mediaPlayerItem;
-(BOOL)_runHEADRequest:(id*)arg1 ;
@end

