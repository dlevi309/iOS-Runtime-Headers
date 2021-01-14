/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXRecipientSearchDataSourceManager.h>
#import <libobjc.A.dylib/CNAutocompleteSearchConsumer.h>

@protocol OS_dispatch_queue;
@class NSObject, CNAutocompleteSearchManager, NSNumber, NSMutableArray, NSDictionary, PXIDSAddressQueryController, NSArray, PXCNRecipientSearchDataSource, NSString;

@interface PXCNRecipientSearchDataSourceManager : PXRecipientSearchDataSourceManager <CNAutocompleteSearchConsumer> {

	NSObject*<OS_dispatch_queue> _creationQueue;
	CNAutocompleteSearchManager* _searchManager;
	NSNumber* _currentSearchTaskID;
	AI _currentAtomicSearchTaskID;
	NSMutableArray* _autocompleteSearchResults;
	NSDictionary* _searchResultsByDestination;
	PXIDSAddressQueryController* _addressQueryController;
	NSArray* __searchResults;

}

@property (nonatomic,readonly) PXCNRecipientSearchDataSource * dataSource; 
@property (setter=_setSearchResults:,nonatomic,retain) NSArray * _searchResults;              //@synthesize _searchResults=__searchResults - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_creationQueue_creatingRecipientSearchResultsForResults:(id)arg1 forSearchTaskID:(id)arg2 ;
-(void)_finishedCreatingRecipientSearchResults:(id)arg1 forSearchTaskID:(id)arg2 ;
-(id)init;
-(void)removeRecipientResult:(id)arg1 ;
-(void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2 ;
-(void)finishedSearchingForAutocompleteResults;
-(void)_setSearchResults:(id)arg1 ;
-(NSArray *)_searchResults;
-(void)_createDataSource;
-(void)queryStringDidChange;
-(void)_handleAddressQueryResults:(id)arg1 error:(id)arg2 ;
@end

