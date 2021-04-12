/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXMemoriesUIViewController.h>
#import <libobjc.A.dylib/PXUserInterfaceFeatureViewController.h>
#import <libobjc.A.dylib/PXScrollViewControllerObserver.h>
#import <libobjc.A.dylib/PXUIViewControllerZoomTransitionEndPoint.h>

@protocol PXForYouMemoriesViewControllerDelegate;
@class PXFeedBasedMemoriesDataSourceManager, NSString;

@interface PXForYouMemoriesViewController : PXMemoriesUIViewController <PXUserInterfaceFeatureViewController, PXScrollViewControllerObserver, PXUIViewControllerZoomTransitionEndPoint> {

	BOOL _shouldHandleEntireDataSource;
	id<PXForYouMemoriesViewControllerDelegate> _delegate;
	unsigned long long _rowType;
	NSRange _dataSourceRange;

}

@property (nonatomic,readonly) BOOL shouldHandleEntireDataSource;                                     //@synthesize shouldHandleEntireDataSource=_shouldHandleEntireDataSource - In the implementation block
@property (nonatomic,readonly) PXFeedBasedMemoriesDataSourceManager * dataSourceManager; 
@property (assign,nonatomic,__weak) id<PXForYouMemoriesViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) NSRange dataSourceRange;                                                 //@synthesize dataSourceRange=_dataSourceRange - In the implementation block
@property (assign,nonatomic) unsigned long long rowType;                                              //@synthesize rowType=_rowType - In the implementation block
@property (nonatomic,readonly) long long userInterfaceFeature; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL keepsSourceRegionOfInterestContent; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(id)initWithDataSourceManager:(id)arg1 ;
-(id<PXForYouMemoriesViewControllerDelegate>)delegate;
-(unsigned long long)rowType;
-(long long)userInterfaceFeature;
-(void)setRowType:(unsigned long long)arg1 ;
-(void)setDelegate:(id<PXForYouMemoriesViewControllerDelegate>)arg1 ;
-(void)setDataSourceRange:(NSRange)arg1 ;
-(void)_alignToNearestGadget;
-(id)createNewLayoutGenerator;
-(BOOL)prepareToNavigateToDetailsForMemoryUUID:(id)arg1 ;
-(NSRange)dataSourceRange;
-(void)_scrollMemoryReferenceToVisible:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)shouldHandleEntireDataSource;
-(void)viewDidLoad;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)scrollViewControllerWillEndScrolling:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
@end

