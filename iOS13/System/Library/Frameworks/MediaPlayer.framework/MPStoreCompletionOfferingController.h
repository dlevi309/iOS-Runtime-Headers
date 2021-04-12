/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@protocol OS_dispatch_queue;
@class NSCache, NSMutableDictionary, NSObject, NSString;

@interface MPStoreCompletionOfferingController : NSObject <MCProfileConnectionObserver> {

	NSCache* _offeringCache;
	NSMutableDictionary* _lookupItemsByStoreLookupID;
	NSMutableDictionary* _lookupItemsByTokenID;
	unsigned long long _nextTokenID;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_getIsCMCDisabled:(BOOL*)arg1 disabledReason:(id*)arg2 ;
+(BOOL)_isCmcEnabled;
+(id)storeOfferingController;
+(void)setWantsArtwork:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(void)_defaultMediaLibraryDidChangeNotification:(id)arg1 ;
-(void)_storeAccountsDidChangeNotification:(id)arg1 ;
-(id)_sanitizedQuery:(id)arg1 ;
-(id)completionOfferingForAlbumItemsQuery:(id)arg1 ;
-(void)cancelCompletionOfferingLookup:(unsigned long long)arg1 ;
-(unsigned long long)startCompletionOfferingLookupForAlbumItemsQuery:(id)arg1 responseBlock:(/*^block*/id)arg2 ;
-(void)_dumpCache;
-(id)_onQueueGetInsertedLookupItemForAlbumItemsQuery:(id)arg1 requestAlreadyIssued:(BOOL*)arg2 responseBlock:(/*^block*/id)arg3 ;
-(void)_onQueueRemoveLookupItem:(id)arg1 ;
-(void)_onQueueRemoveLookupItemsForStoreLookupID:(id)arg1 ;
-(void)_onQueueCancelCompletionOfferingLookupTokenID:(unsigned long long)arg1 ;
-(void)_onQueuePostLookupCompletedForLookupItem:(id)arg1 offering:(id)arg2 error:(id)arg3 ;
-(void)_lookupCompletedWithResponse:(id)arg1 lookupItem:(id)arg2 error:(id)arg3 ;
-(id)_onQueueStartCompletionOfferingLookupForAlbumItemsQuery:(id)arg1 responseBlock:(/*^block*/id)arg2 ;
-(id)_onQueueCompletionOfferingForAlbumItemsQuery:(id)arg1 ;
-(void)_onQueueSetCachedCompletionOffering:(id)arg1 forStoreLookupID:(id)arg2 ;
-(void)_onQueueClearCache;
@end

