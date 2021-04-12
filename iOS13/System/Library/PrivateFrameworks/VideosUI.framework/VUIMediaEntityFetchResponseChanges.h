/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class VUICollectionChangeSet;

@interface VUIMediaEntityFetchResponseChanges : NSObject {

	VUICollectionChangeSet* _mediaEntitiesChangeSet;
	VUICollectionChangeSet* _groupingChangeSet;

}

@property (nonatomic,retain) VUICollectionChangeSet * mediaEntitiesChangeSet;              //@synthesize mediaEntitiesChangeSet=_mediaEntitiesChangeSet - In the implementation block
@property (nonatomic,retain) VUICollectionChangeSet * groupingChangeSet;                   //@synthesize groupingChangeSet=_groupingChangeSet - In the implementation block
-(id)init;
-(id)description;
-(id)initWithMediaEntitiesChangeSet:(id)arg1 ;
-(void)setGroupingChangeSet:(VUICollectionChangeSet *)arg1 ;
-(VUICollectionChangeSet *)mediaEntitiesChangeSet;
-(VUICollectionChangeSet *)groupingChangeSet;
-(void)setMediaEntitiesChangeSet:(VUICollectionChangeSet *)arg1 ;
@end

