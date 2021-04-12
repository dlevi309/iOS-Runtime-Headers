/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXGadgetProvider.h>
#import <libobjc.A.dylib/PXSectionedDataSourceManagerObserver.h>
#import <libobjc.A.dylib/PXMessagesCMMSuggestionGadgetActionDelegate.h>

@class PXCMMSuggestionsDataSourceManager, PXCMMSuggestionsDataSource, PXMessagesExtensionViewModel, NSArray, NSString;

@interface PXMessagesCMMSuggestionsGadgetProvider : PXGadgetProvider <PXSectionedDataSourceManagerObserver, PXMessagesCMMSuggestionGadgetActionDelegate> {

	PXCMMSuggestionsDataSourceManager* _suggestionsDataSourceManager;
	PXCMMSuggestionsDataSource* _dataSource;
	BOOL _didGenerateGadgets;
	PXMessagesExtensionViewModel* _viewModel;
	NSArray* _suggestionGadgets;
	double _contentHeightAdjustment;

}

@property (nonatomic,retain) PXCMMSuggestionsDataSourceManager * suggestionsDataSourceManager;              //@synthesize suggestionsDataSourceManager=_suggestionsDataSourceManager - In the implementation block
@property (assign,nonatomic) double contentHeightAdjustment;                                                //@synthesize contentHeightAdjustment=_contentHeightAdjustment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
-(void)generateGadgets;
-(id)init;
-(unsigned long long)estimatedNumberOfGadgets;
-(void)setSuggestionsDataSourceManager:(PXCMMSuggestionsDataSourceManager *)arg1 ;
-(PXCMMSuggestionsDataSourceManager *)suggestionsDataSourceManager;
-(void)_setDataSource:(id)arg1 changes:(id)arg2 ;
-(void)didSelectSuggestionGadget:(id)arg1 ;
-(id)initWithViewModel:(id)arg1 suggestionsDataSourceManager:(id)arg2 ;
-(void)setContentHeightAdjustment:(double)arg1 ;
-(id)_createSuggestionGadgetWithSuggestion:(id)arg1 ;
-(void)_updateNoContentGadgetIfNeeded;
-(double)contentHeightAdjustment;
-(id)initWithIdentifier:(id)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

