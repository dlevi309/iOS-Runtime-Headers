/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
*/


@class NSIndexSet, VUICollectionChangeSet;

@interface VUICollectionChange : NSObject {

	unsigned long long _changeKind;
	NSIndexSet* _sourceIndexes;
	NSIndexSet* _destinationIndexes;
	VUICollectionChangeSet* _updateChangeSet;

}

@property (nonatomic,readonly) unsigned long long changeKind;                       //@synthesize changeKind=_changeKind - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * sourceIndexes;                     //@synthesize sourceIndexes=_sourceIndexes - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * destinationIndexes;                //@synthesize destinationIndexes=_destinationIndexes - In the implementation block
@property (nonatomic,retain) VUICollectionChangeSet * updateChangeSet;              //@synthesize updateChangeSet=_updateChangeSet - In the implementation block
-(id)init;
-(id)description;
-(id)initWithChangeKind:(unsigned long long)arg1 sourceIndexes:(id)arg2 destinationIndexes:(id)arg3 ;
-(void)setUpdateChangeSet:(VUICollectionChangeSet *)arg1 ;
-(NSIndexSet *)sourceIndexes;
-(NSIndexSet *)destinationIndexes;
-(VUICollectionChangeSet *)updateChangeSet;
-(unsigned long long)changeKind;
@end

