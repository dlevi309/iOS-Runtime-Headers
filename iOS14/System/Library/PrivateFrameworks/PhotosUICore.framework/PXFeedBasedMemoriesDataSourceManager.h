/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXMemoriesDataSourceManager.h>
#import <libobjc.A.dylib/PXSectionedDataSourceManagerObserver.h>

@class PXMemoriesFeedWidgetDataSourceManager, PXMemoriesFeedDataSource, NSString;

@interface PXFeedBasedMemoriesDataSourceManager : PXMemoriesDataSourceManager <PXSectionedDataSourceManagerObserver> {

	PXMemoriesFeedWidgetDataSourceManager* _childDataSourceManager;
	PXMemoriesFeedDataSource* _childDataSource;
	NSRange _dataSourceRange;

}

@property (nonatomic,readonly) PXMemoriesFeedWidgetDataSourceManager * childDataSourceManager;              //@synthesize childDataSourceManager=_childDataSourceManager - In the implementation block
@property (nonatomic,retain) PXMemoriesFeedDataSource * childDataSource;                                    //@synthesize childDataSource=_childDataSource - In the implementation block
@property (nonatomic,readonly) BOOL shouldHandleEntireDataSource; 
@property (assign,nonatomic) NSRange dataSourceRange;                                                       //@synthesize dataSourceRange=_dataSourceRange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)createInitialDataSource;
-(id)initWithMemoriesFeedWidgetDataSourceManager:(id)arg1 ;
-(id)_adjustDataSourceIfNeeded:(id)arg1 ;
-(id)_adjustChangedIndexSetIfNeeded:(id)arg1 ;
-(id)_adjustChangeDetailsIfNeeded:(id)arg1 previousDataSource:(id)arg2 newDataSource:(id)arg3 ;
-(PXMemoriesFeedWidgetDataSourceManager *)childDataSourceManager;
-(PXMemoriesFeedDataSource *)childDataSource;
-(void)setChildDataSource:(PXMemoriesFeedDataSource *)arg1 ;
-(void)setDataSourceRange:(NSRange)arg1 ;
-(NSRange)dataSourceRange;
-(BOOL)shouldHandleEntireDataSource;
-(void)_handleDataSourceChange;
-(void)updateCurrentMemoriesNonPendingAndNotificationStatus;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

