/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUItemCellContext.h>

@interface SUMediaItemCellContext : SUItemCellContext {

	double _artworkWidth;
	long long _hiddenMediaIconTypes;
	BOOL _itemsHaveArtwork;

}

@property (assign,nonatomic) double artworkWidth;                         //@synthesize artworkWidth=_artworkWidth - In the implementation block
@property (assign,nonatomic) long long hiddenMediaIconTypes;              //@synthesize hiddenMediaIconTypes=_hiddenMediaIconTypes - In the implementation block
@property (assign,nonatomic) BOOL itemsHaveArtwork;                       //@synthesize itemsHaveArtwork=_itemsHaveArtwork - In the implementation block
-(id)init;
-(double)artworkWidth;
-(void)setArtworkWidth:(double)arg1 ;
-(void)setHiddenMediaIconTypes:(long long)arg1 ;
-(void)setItemsHaveArtwork:(BOOL)arg1 ;
-(long long)hiddenMediaIconTypes;
-(BOOL)itemsHaveArtwork;
@end

