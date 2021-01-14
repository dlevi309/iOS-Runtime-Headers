/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LiveFS.framework/LiveFS
*/

#import <libobjc.A.dylib/NSFileProviderLiveItemClientCore.h>

@class NSMutableDictionary, NSMapTable;

@interface LiveFSServiceClient : NSObject <NSFileProviderLiveItemClientCore> {

	NSMutableDictionary* _searchResultsBlocks;
	NSMutableDictionary* _searchCompletionBlocks;
	NSMapTable* _updateHandlers;

}

@property (retain) NSMutableDictionary * searchResultsBlocks;                 //@synthesize searchResultsBlocks=_searchResultsBlocks - In the implementation block
@property (retain) NSMutableDictionary * searchCompletionBlocks;              //@synthesize searchCompletionBlocks=_searchCompletionBlocks - In the implementation block
@property (retain) NSMapTable * updateHandlers;                               //@synthesize updateHandlers=_updateHandlers - In the implementation block
+(id)exportedClientInterface;
-(id)init;
-(void)connectionWasInvalidated;
-(NSMapTable *)updateHandlers;
-(void)setUpdateHandlers:(NSMapTable *)arg1 ;
-(void)LISearchResult:(id)arg1 paths:(id)arg2 attributes:(id)arg3 attributeSize:(unsigned)arg4 xAttrs:(id)arg5 resumePath:(id)arg6 ;
-(void)LISearchTokenDone:(id)arg1 result:(int)arg2 ;
-(void)LIUpdateUpdatedItem:(id)arg1 name:(id)arg2 interestedItem:(id)arg3 ;
-(void)LIUpdateUpdatedName:(id)arg1 interestedItem:(id)arg2 ;
-(void)LIUpdateDeletedItem:(id)arg1 name:(id)arg2 how:(int)arg3 interestedItem:(id)arg4 ;
-(void)LIUpdateDeletedName:(id)arg1 item:(id)arg2 how:(int)arg3 interestedItem:(id)arg4 ;
-(void)LIUpdateRenameFrom:(id)arg1 fromName:(id)arg2 fromID:(id)arg3 intoItem:(id)arg4 toName:(id)arg5 overID:(id)arg6 ;
-(void)LIUpdateVolumeWideUpdatedName:(id)arg1 interestedItem:(id)arg2 ;
-(void)LIUpdateVolumeWideDeletedName:(id)arg1 interestedItem:(id)arg2 ;
-(void)LIUpdateHistoryResetItem:(id)arg1 interestedItem:(id)arg2 ;
-(void)LIUpdateHistoryResetName:(id)arg1 interestedItem:(id)arg2 ;
-(void)LIUpdateDone:(id)arg1 ;
-(void)connectionWasInterupted;
-(int)LISCAddSearchHandlers:(id)arg1 resultHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)LISCDropSearchHandlers:(id)arg1 ;
-(int)LISCAddUpdateHandler:(id)arg1 forInterestedItem:(id)arg2 ;
-(void)LISCDropUpdateHandlerForInterestedItem:(id)arg1 ;
-(NSMutableDictionary *)searchResultsBlocks;
-(void)setSearchResultsBlocks:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)searchCompletionBlocks;
-(void)setSearchCompletionBlocks:(NSMutableDictionary *)arg1 ;
@end

