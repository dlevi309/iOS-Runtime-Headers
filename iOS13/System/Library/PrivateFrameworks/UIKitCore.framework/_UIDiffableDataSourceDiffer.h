/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIDiffableDataSourceDiffer.h>

@protocol _UIDiffableDataSourceDiffer
@required
-(id)computeUpdates;

@end


@protocol UIDiffableDataSourceInfo;
@interface _UIDiffableDataSourceDiffer : NSObject <_UIDiffableDataSourceDiffer> {

	id<UIDiffableDataSourceInfo> _beforeDataSourceInfo;
	id<UIDiffableDataSourceInfo> _afterDataSourceInfo;

}

@property (nonatomic,retain) id<UIDiffableDataSourceInfo> beforeDataSourceInfo;              //@synthesize beforeDataSourceInfo=_beforeDataSourceInfo - In the implementation block
@property (nonatomic,retain) id<UIDiffableDataSourceInfo> afterDataSourceInfo;               //@synthesize afterDataSourceInfo=_afterDataSourceInfo - In the implementation block
+(id)differWithBeforeDataSourceInfo:(id)arg1 afterDataSourceInfo:(id)arg2 ;
-(id)description;
-(id)computeUpdates;
-(id<UIDiffableDataSourceInfo>)beforeDataSourceInfo;
-(id<UIDiffableDataSourceInfo>)afterDataSourceInfo;
-(id)initWithBeforeDataSource:(id)arg1 afterDataSource:(id)arg2 ;
-(id)_computeUpdatesForIdentifierBasedDiff;
-(id)_computeSectionBoundaryMovesForItemDiffer:(id)arg1 ;
-(id)_sectionUpdatesForDiffResults:(id)arg1 deletedSections:(id)arg2 insertedSections:(id)arg3 ;
-(id)_itemUpdatesForDiffResults:(id)arg1 sectionBoundaryMoves:(id)arg2 deletedSections:(id)arg3 insertedSections:(id)arg4 ;
-(BOOL)_verifyForUpdates:(id)arg1 ;
-(void)setBeforeDataSourceInfo:(id<UIDiffableDataSourceInfo>)arg1 ;
-(void)setAfterDataSourceInfo:(id<UIDiffableDataSourceInfo>)arg1 ;
@end

