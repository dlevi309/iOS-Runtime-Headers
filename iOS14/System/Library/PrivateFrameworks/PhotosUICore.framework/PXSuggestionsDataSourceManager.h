/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSectionedDataSourceManager.h>
#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>

@class PXSuggestionsDataSource, NSString;

@interface PXSuggestionsDataSourceManager : PXSectionedDataSourceManager <PXPhotoLibraryUIChangeObserver> {

	unsigned short _dataSourceType;

}

@property (nonatomic,readonly) unsigned short dataSourceType;                     //@synthesize dataSourceType=_dataSourceType - In the implementation block
@property (nonatomic,readonly) PXSuggestionsDataSource * dataSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)baseFetchPredicate;
+(id)typePredicateForDataSourceType:(unsigned short)arg1 ;
+(id)mostRecentCreationDateForPXSuggestionDataSourceType:(unsigned short)arg1 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 ;
-(unsigned short)dataSourceType;
-(id)createInitialDataSource;
-(id)init;
-(id)initWithDataSourceType:(unsigned short)arg1 ;
-(void)_handleChangeWithDetails:(id)arg1 ;
@end

