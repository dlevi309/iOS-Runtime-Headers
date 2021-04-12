/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class VUICollectionChangeSet;

@interface VUIMediaItemEntityTypesFetchResponseChanges : NSObject {

	BOOL _localMediaItemsAvailableDidChange;
	VUICollectionChangeSet* _mediaItemEntityTypesChangeSet;

}

@property (nonatomic,readonly) VUICollectionChangeSet * mediaItemEntityTypesChangeSet;              //@synthesize mediaItemEntityTypesChangeSet=_mediaItemEntityTypesChangeSet - In the implementation block
@property (nonatomic,readonly) BOOL localMediaItemsAvailableDidChange;                              //@synthesize localMediaItemsAvailableDidChange=_localMediaItemsAvailableDidChange - In the implementation block
-(id)init;
-(id)description;
-(VUICollectionChangeSet *)mediaItemEntityTypesChangeSet;
-(BOOL)localMediaItemsAvailableDidChange;
-(id)initWithMediaItemEntityTypesChangeSet:(id)arg1 localMediaItemsAvailableDidChange:(BOOL)arg2 ;
@end

