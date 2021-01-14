/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSectionedDataSourceManager.h>
#import <libobjc.A.dylib/PXSectionedDataSourceManagerObserver.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@class NSArray, PXInboxAggregateDataSource, NSString;

@interface PXInboxAggregateDataSourceManager : PXSectionedDataSourceManager <PXSectionedDataSourceManagerObserver, PXChangeObserver> {

	NSArray* _dataSourceManagers;

}

@property (nonatomic,readonly) PXInboxAggregateDataSource * dataSource; 
@property (nonatomic,readonly) NSArray * dataSourceManagers;                         //@synthesize dataSourceManagers=_dataSourceManagers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)createInitialDataSource;
-(void)_updateDataSource;
-(id)initWithDataSourceManagers:(id)arg1 ;
-(NSArray *)dataSourceManagers;
-(id)_dataSourceSnapshot;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

