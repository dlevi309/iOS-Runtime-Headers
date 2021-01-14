/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStore/ISOperation.h>

@class SUMediaPlayerItem;

@interface SUPrepareMediaItemOperation : ISOperation {

	SUMediaPlayerItem* _mediaItem;

}

@property (nonatomic,copy,readonly) SUMediaPlayerItem * mediaPlayerItem;              //@synthesize mediaItem=_mediaItem - In the implementation block
-(void)run;
-(id)init;
-(void)dealloc;
-(id)initWithMediaPlayerItem:(id)arg1 ;
-(SUMediaPlayerItem *)mediaPlayerItem;
-(BOOL)_runHEADRequest:(id*)arg1 ;
@end

