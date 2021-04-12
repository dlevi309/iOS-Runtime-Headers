/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXGadgetProvider.h>
#import <libobjc.A.dylib/PXSectionedDataSourceManagerObserver.h>

@class NSMapTable, PXSuggestionsDataSourceManager, NSString, NSArray, PXAssetReference, PXAssetsDataSourceManager, PXSuggestionsDataSource;

@interface PXForYouSuggestionsGadgetProvider : PXGadgetProvider <PXSectionedDataSourceManagerObserver> {

	BOOL _hasGeneratedGadgets;
	NSMapTable* _keyAssetFetchesBySuggestion;
	PXSuggestionsDataSourceManager* _dataSourceManager;
	NSString* _localizedTitle;
	NSArray* _oneUpAssets;
	PXAssetReference* _oneUpInitialAssetReference;
	PXAssetsDataSourceManager* _oneUpDataSourceManager;
	PXSuggestionsDataSource* _dataSource;

}

@property (nonatomic,retain) NSArray * oneUpAssets;                                             //@synthesize oneUpAssets=_oneUpAssets - In the implementation block
@property (nonatomic,retain) PXAssetReference * oneUpInitialAssetReference;                     //@synthesize oneUpInitialAssetReference=_oneUpInitialAssetReference - In the implementation block
@property (nonatomic,retain) PXAssetsDataSourceManager * oneUpDataSourceManager;                //@synthesize oneUpDataSourceManager=_oneUpDataSourceManager - In the implementation block
@property (nonatomic,readonly) PXSuggestionsDataSource * dataSource;                            //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) PXSuggestionsDataSourceManager * dataSourceManager;              //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedTitle;                                  //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)generateGadgets;
-(NSString *)localizedTitle;
-(id)init;
-(void)loadDataForGadgets;
-(void)presentOneUpForSuggestion:(id)arg1 animated:(BOOL)arg2 ;
-(PXSuggestionsDataSource *)dataSource;
-(unsigned long long)estimatedNumberOfGadgets;
-(PXSuggestionsDataSourceManager *)dataSourceManager;
-(void)setDataSource:(id)arg1 changeDetails:(id)arg2 ;
-(void)suggestionGadgetsWantsOneUpPresentation:(id)arg1 animated:(BOOL)arg2 ;
-(id)_gadgetForAssetReference:(id)arg1 ;
-(PXAssetReference *)oneUpInitialAssetReference;
-(void)setOneUpInitialAssetReference:(PXAssetReference *)arg1 ;
-(void)configureGadget:(id)arg1 ;
-(id)initWithDataSourceManager:(id)arg1 localizedTitle:(id)arg2 ;
-(id)keyAssetForSuggestion:(id)arg1 ;
-(NSArray *)oneUpAssets;
-(PXAssetsDataSourceManager *)oneUpDataSourceManager;
-(void)setOneUpDataSourceManager:(PXAssetsDataSourceManager *)arg1 ;
-(void)setOneUpAssets:(NSArray *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)gadget:(id)arg1 didChange:(unsigned long long)arg2 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

