/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <libobjc.A.dylib/SpotlightReceiver.h>

@class SGDSuggestManager, SGCoalescingDropBox, NSString;

@interface SGDSpotlightReceiver : NSObject <SpotlightReceiver> {

	SGDSuggestManager* _manager;
	SGCoalescingDropBox* _purgeAndDeleteIdentifiersDropbox;
	SGCoalescingDropBox* _deleteDomainIdentifiersDropbox;
	SGCoalescingDropBox* _deleteInteractionBundleIdDropbox;
	SGCoalescingDropBox* _deleteInteractionIdDropbox;
	SGCoalescingDropBox* _deleteInteractionGroupIdDropbox;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithManager:(id)arg1 ;
-(void)addOrUpdateSearchableItems:(id)arg1 bundleID:(id)arg2 ;
-(id)init;
-(id)supportedContentTypes;
-(void)deleteAllInteractionsWithBundleID:(id)arg1 protectionClass:(id)arg2 ;
-(void)deleteAllSearchableItemsWithBundleID:(id)arg1 ;
-(void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 bundleID:(id)arg2 ;
-(void)purgeSearchableItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2 ;
-(void)addInteractions:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 ;
-(void)deleteSearchableItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2 ;
-(void)deleteInteractionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 ;
-(void)addUserAction:(id)arg1 withItem:(id)arg2 ;
-(void)deleteInteractionsWithGroupIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 ;
@end

