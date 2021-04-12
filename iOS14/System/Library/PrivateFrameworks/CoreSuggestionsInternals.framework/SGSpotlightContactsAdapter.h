/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <libobjc.A.dylib/SGJournalContactsObserver.h>

@class NSURL, SGSqlEntityStore, NSString;

@interface SGSpotlightContactsAdapter : NSObject <SGJournalContactsObserver> {

	NSURL* _vCardsDirectoryURL;
	SGSqlEntityStore* _store;

}

@property (assign,nonatomic,__weak) SGSqlEntityStore * store;              //@synthesize store=_store - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dispatchGroup;
+(id)entityIdentifiersFromCNIdentifiers:(id)arg1 ;
+(id)searchableIndex;
+(void)notifyWhenFlushed:(/*^block*/id)arg1 ;
-(void)confirmOrRejectContact:(id)arg1 ;
-(void)setStore:(SGSqlEntityStore *)arg1 ;
-(SGSqlEntityStore *)store;
-(void)addContact:(id)arg1 ;
-(void)confirmContact:(id)arg1 ;
-(void)rejectContact:(id)arg1 ;
-(void)removeAllStoredPseudoContacts;
-(id)initWithSGSqlEntityStore:(id)arg1 ;
-(id)pseudoContactVcardDirectory;
-(id)urlForRecordIdVCard:(id)arg1 ;
-(id)urlForStorageContactVCard:(id)arg1 ;
-(id)coreSpotlightAttributeSetForContact:(id)arg1 ;
-(id)searchableItemsForContactsForInternalIdentifiers:(id)arg1 ;
-(void)sendContactToSpotlight:(id)arg1 ;
-(void)removeAllPseudoContactsInIdSet:(id)arg1 ;
@end

