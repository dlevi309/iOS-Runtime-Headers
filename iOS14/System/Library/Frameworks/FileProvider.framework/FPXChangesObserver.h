/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FPXObserver.h>
#import <libobjc.A.dylib/NSFileProviderChangeObserver.h>

@class NSMutableArray, NSData, NSString;

@interface FPXChangesObserver : FPXObserver <NSFileProviderChangeObserver> {

	NSMutableArray* _changedItems;
	NSMutableArray* _deletedItemIDs;
	NSData* _originalSyncAnchor;
	/*^block*/id _finishedBlock;

}

@property (copy) id finishedBlock;                                  //@synthesize finishedBlock=_finishedBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithObservedItemID:(id)arg1 domainContext:(id)arg2 ;
-(id)initWithObservedItemID:(id)arg1 domainContext:(id)arg2 previousChangeToken:(id)arg3 ;
-(void)didUpdateItems:(id)arg1 ;
-(void)didDeleteItemsWithIdentifiers:(id)arg1 ;
-(void)finishEnumeratingChangesUpToSyncAnchor:(id)arg1 moreComing:(BOOL)arg2 ;
-(void)finishEnumeratingWithError:(id)arg1 ;
-(id)finishedBlock;
-(void)setFinishedBlock:(id)arg1 ;
@end

