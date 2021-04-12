/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UITableView, UICollectionView, NSMutableDictionary;

@interface _UIIndexPathIdentityTracker : NSObject {

	UITableView* _tableView;
	UICollectionView* _collectionView;
	id _identityBasedDataSource;
	NSMutableDictionary* _mapping;
	BOOL _enforcesManualMapping;

}
-(id)init;
-(void)reset;
-(id)initWithCollectionView:(id)arg1 ;
-(id)initWithTableView:(id)arg1 ;
-(void)updateWithUpdateItems:(id)arg1 ;
-(id)identifierForIndexPath:(id)arg1 ;
-(id)currentIndexPathForIdentifier:(id)arg1 ;
-(id)_mappingIdentifierForSanitizedIndexPath:(id)arg1 ;
-(void)enforceManualMapping;
@end

