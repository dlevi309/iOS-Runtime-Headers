/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

