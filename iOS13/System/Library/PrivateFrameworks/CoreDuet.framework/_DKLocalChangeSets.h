/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class _DKChangeSet, NSDate;

@interface _DKLocalChangeSets : NSObject {

	_DKChangeSet* _additionChangeSet;
	_DKChangeSet* _deletionChangeSet;
	NSDate* _queryStartDate;

}

@property (nonatomic,retain) _DKChangeSet * additionChangeSet;              //@synthesize additionChangeSet=_additionChangeSet - In the implementation block
@property (nonatomic,retain) _DKChangeSet * deletionChangeSet;              //@synthesize deletionChangeSet=_deletionChangeSet - In the implementation block
@property (nonatomic,retain) NSDate * queryStartDate;                       //@synthesize queryStartDate=_queryStartDate - In the implementation block
-(NSDate *)queryStartDate;
-(id)initWithAdditionChangeSet:(id)arg1 deletionChangeSet:(id)arg2 queryStartDate:(id)arg3 ;
-(_DKChangeSet *)additionChangeSet;
-(_DKChangeSet *)deletionChangeSet;
-(void)setAdditionChangeSet:(_DKChangeSet *)arg1 ;
-(void)setDeletionChangeSet:(_DKChangeSet *)arg1 ;
-(void)setQueryStartDate:(NSDate *)arg1 ;
@end

