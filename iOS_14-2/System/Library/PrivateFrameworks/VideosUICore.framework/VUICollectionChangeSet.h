/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
*/


@class VUICollectionChange, NSArray;

@interface VUICollectionChangeSet : NSObject {

	VUICollectionChange* _deleteChange;
	VUICollectionChange* _insertChange;
	NSArray* _moveChanges;
	NSArray* _updateChanges;

}

@property (nonatomic,readonly) BOOL hasChanges; 
@property (nonatomic,retain) VUICollectionChange * deleteChange;              //@synthesize deleteChange=_deleteChange - In the implementation block
@property (nonatomic,retain) VUICollectionChange * insertChange;              //@synthesize insertChange=_insertChange - In the implementation block
@property (nonatomic,copy) NSArray * moveChanges;                             //@synthesize moveChanges=_moveChanges - In the implementation block
@property (nonatomic,copy) NSArray * updateChanges;                           //@synthesize updateChanges=_updateChanges - In the implementation block
-(id)description;
-(BOOL)hasChanges;
-(VUICollectionChange *)insertChange;
-(void)setInsertChange:(VUICollectionChange *)arg1 ;
-(VUICollectionChange *)deleteChange;
-(void)setDeleteChange:(VUICollectionChange *)arg1 ;
-(NSArray *)moveChanges;
-(void)setMoveChanges:(NSArray *)arg1 ;
-(void)setUpdateChanges:(NSArray *)arg1 ;
-(NSArray *)updateChanges;
-(id)_changesKinds;
-(BOOL)containsOnlyChangeKind:(unsigned long long)arg1 ;
@end

