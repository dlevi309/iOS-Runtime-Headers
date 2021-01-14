/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSectionedDataSourceManager.h>
#import <libobjc.A.dylib/PXDataSectionManagerChangeObserver.h>

@class NSArray, NSString;

@interface PXStackedDataSourceManager : PXSectionedDataSourceManager <PXDataSectionManagerChangeObserver> {

	BOOL _initialDataSourceCreated;
	NSArray* _dataSectionManagers;

}

@property (assign,nonatomic) BOOL initialDataSourceCreated;              //@synthesize initialDataSourceCreated=_initialDataSourceCreated - In the implementation block
@property (nonatomic,copy) NSArray * dataSectionManagers;                //@synthesize dataSectionManagers=_dataSectionManagers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)createInitialDataSource;
-(id)initWithDataSectionManagers:(id)arg1 ;
-(void)_registerAsChangeObserverForDataSectionManagers:(id)arg1 ;
-(void)_unregisterAsChangeObserverForDataSectionManagers:(id)arg1 ;
-(void)_updateDataSourceWithSectionChanges:(id)arg1 itemChanges:(id)arg2 ;
-(void)setDataSectionManagers:(NSArray *)arg1 ;
-(NSArray *)dataSectionManagers;
-(BOOL)initialDataSourceCreated;
-(void)setInitialDataSourceCreated:(BOOL)arg1 ;
-(id)_newDataSource;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

