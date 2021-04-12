/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithCollectionView:(id)arg1 ;
-(id)init;
-(void)enforceManualMapping;
-(id)_mappingIdentifierForSanitizedIndexPath:(id)arg1 ;
-(id)identifierForIndexPath:(id)arg1 ;
-(id)initWithTableView:(id)arg1 ;
-(void)reset;
-(void)updateWithUpdateItems:(id)arg1 ;
-(id)currentIndexPathForIdentifier:(id)arg1 ;
@end

