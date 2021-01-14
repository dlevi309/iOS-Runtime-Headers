/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKCollectionViewController.h>

@class NSArray, GKCollectionViewDataSource;

@interface GKBasicCollectionViewController : GKCollectionViewController {

	id _target;
	NSArray* _metricsForSections;
	GKCollectionViewDataSource* _initialDataSource;

}

@property (nonatomic,retain) NSArray * metricsForSections;                                //@synthesize metricsForSections=_metricsForSections - In the implementation block
@property (nonatomic,retain) GKCollectionViewDataSource * initialDataSource;              //@synthesize initialDataSource=_initialDataSource - In the implementation block
@property (nonatomic,retain) id target;                                                   //@synthesize target=_target - In the implementation block
-(void)setTarget:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)setInitialDataSource:(GKCollectionViewDataSource *)arg1 ;
-(id)initWithDataSource:(id)arg1 title:(id)arg2 ;
-(NSArray *)metricsForSections;
-(GKCollectionViewDataSource *)initialDataSource;
-(void)setMetricsForSections:(NSArray *)arg1 ;
-(void)configureDataSource;
-(CGSize)preferredContentSize;
-(void)setDataSource:(id)arg1 ;
-(id)target;
-(void)dealloc;
@end

