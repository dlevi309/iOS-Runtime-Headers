/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXGadgetAnchorHelperDelegate, PXGadget;
@class PXGadgetNavigationHelper, PXGadgetDataSourceManager;

@interface PXGadgetAnchorHelper : NSObject {

	id<PXGadgetAnchorHelperDelegate> _delegate;
	long long _anchorPosition;
	id<PXGadget> _currentAnchor;
	PXGadgetNavigationHelper* _navigationHelper;
	PXGadgetDataSourceManager* _dataSourceManager;

}

@property (nonatomic,retain) id<PXGadget> currentAnchor;                                    //@synthesize currentAnchor=_currentAnchor - In the implementation block
@property (nonatomic,retain) PXGadgetNavigationHelper * navigationHelper;                   //@synthesize navigationHelper=_navigationHelper - In the implementation block
@property (nonatomic,retain) PXGadgetDataSourceManager * dataSourceManager;                 //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (assign,nonatomic,__weak) id<PXGadgetAnchorHelperDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long anchorPosition;                                      //@synthesize anchorPosition=_anchorPosition - In the implementation block
@property (nonatomic,readonly) BOOL hasAnchor; 
-(void)setAnchorPosition:(long long)arg1 ;
-(void)navigateToAnchorIfNeeded;
-(id<PXGadgetAnchorHelperDelegate>)delegate;
-(void)saveGadgetAsAnchor:(id)arg1 ;
-(void)setDataSourceManager:(PXGadgetDataSourceManager *)arg1 ;
-(id)initWithNavigationHelper:(id)arg1 dataSourceManager:(id)arg2 ;
-(id)_convertIndexPathToGadget:(id)arg1 ;
-(void)setDelegate:(id<PXGadgetAnchorHelperDelegate>)arg1 ;
-(PXGadgetDataSourceManager *)dataSourceManager;
-(long long)anchorPosition;
-(id)_generateAnchor;
-(BOOL)hasAnchor;
-(PXGadgetNavigationHelper *)navigationHelper;
-(void)setNavigationHelper:(PXGadgetNavigationHelper *)arg1 ;
-(void)saveAnchor;
-(void)clearAnchor;
-(id<PXGadget>)currentAnchor;
-(void)setCurrentAnchor:(id<PXGadget>)arg1 ;
@end

