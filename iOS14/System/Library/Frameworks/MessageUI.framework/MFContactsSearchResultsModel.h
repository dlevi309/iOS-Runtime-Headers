/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MessageUI-Structs.h>
#import <libobjc.A.dylib/_MFSearchResultsConsumer.h>

@class NSOperationQueue, NSArray, NSMutableDictionary, NSString;

@interface MFContactsSearchResultsModel : NSObject <_MFSearchResultsConsumer> {

	NSOperationQueue* _queue;
	NSArray* _recentSearchResults;
	NSArray* _infrequentRecentSearchResults;
	NSMutableDictionary* _localSearchResultsByAddress;
	NSMutableDictionary* _serverSearchResultsByAddress;
	NSMutableDictionary* _recentRecipientsByAddress;
	CFArrayRef _resultTypesSortOrder;
	CFArrayRef _resultTypesPriorityOrder;
	CFSetRef _finishedResultTypes;
	unsigned long long _preferredType;
	BOOL _favorMobileNumbers;
	int _resetCount;
	NSArray* _enteredRecipients;

}

@property (nonatomic,retain) NSArray * enteredRecipients;              //@synthesize enteredRecipients=_enteredRecipients - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)_isResetting;
-(void)_addResults:(id)arg1 ofType:(unsigned long long)arg2 ;
-(id)initWithFavorMobileNumbers:(BOOL)arg1 ;
-(id)initWithResultTypeSortOrderComparator:(/*function pointer*/void*)arg1 resultTypePriorityComparator:(/*function pointer*/void*)arg2 favorMobileNumbers:(BOOL)arg3 ;
-(id)_dictionaryForResultType:(unsigned long long)arg1 ;
-(id)_bestRecipientForAddress:(id)arg1 fallback:(id)arg2 ;
-(void)_addBestRecipientsForRecipients:(id)arg1 excluding:(id)arg2 toArray:(id)arg3 ;
-(BOOL)_shouldProcessResultsAfterFinishingType:(unsigned long long)arg1 ;
-(BOOL)_didFinishSearchForType:(unsigned long long)arg1 ;
-(void)_enumerateSearchResultTypesInSortOrderUsingBlock:(/*^block*/id)arg1 ;
-(void)_appendSortedResultsOfType:(unsigned long long)arg1 excluding:(id)arg2 toResults:(id)arg3 ;
-(void)addResults:(id)arg1 ofType:(unsigned long long)arg2 ;
-(void)_finishSearchOfType:(unsigned long long)arg1 ;
-(void)processAddedResultsOfType:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(NSArray *)enteredRecipients;
-(void)setEnteredRecipients:(NSArray *)arg1 ;
-(void)reset;
-(void)dealloc;
@end

