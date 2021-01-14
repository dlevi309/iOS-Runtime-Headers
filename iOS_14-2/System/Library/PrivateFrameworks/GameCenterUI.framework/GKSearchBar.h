/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <UIKitCore/UISearchBar.h>

@class GKCollectionViewDataSource;

@interface GKSearchBar : UISearchBar {

	GKCollectionViewDataSource* _dataSource;
	long long _sectionIndex;

}

@property (nonatomic,retain) GKCollectionViewDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) long long sectionIndex;                               //@synthesize sectionIndex=_sectionIndex - In the implementation block
-(GKCollectionViewDataSource *)dataSource;
-(long long)sectionIndex;
-(void)setSectionIndex:(long long)arg1 ;
-(void)setDataSource:(GKCollectionViewDataSource *)arg1 ;
-(void)dealloc;
@end

