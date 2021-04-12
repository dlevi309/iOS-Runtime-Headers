/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSOrderedSet;

@interface VUIMediaItemEntityTypesFetchResponse : NSObject {

	BOOL _localMediaItemsAvailable;
	NSOrderedSet* _mediaItemEntityTypes;

}

@property (nonatomic,copy) NSOrderedSet * mediaItemEntityTypes;                                             //@synthesize mediaItemEntityTypes=_mediaItemEntityTypes - In the implementation block
@property (assign,getter=areLocalMediaItemsAvailable,nonatomic) BOOL localMediaItemsAvailable;              //@synthesize localMediaItemsAvailable=_localMediaItemsAvailable - In the implementation block
-(id)init;
-(id)description;
-(BOOL)_updateWithResponse:(id)arg1 changes:(id)arg2 replaceContentsOnNilChanges:(BOOL)arg3 ;
-(void)setMediaItemEntityTypes:(NSOrderedSet *)arg1 ;
-(void)setLocalMediaItemsAvailable:(BOOL)arg1 ;
-(NSOrderedSet *)mediaItemEntityTypes;
-(BOOL)areLocalMediaItemsAvailable;
@end

