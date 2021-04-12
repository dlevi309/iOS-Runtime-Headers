/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard
*/

#import <libobjc.A.dylib/PBDataProviderProtocol.h>

@class NSMutableDictionary, PBItemCollection, NSString;

@interface PBItemCollectionServicer : NSObject <PBDataProviderProtocol> {

	NSMutableDictionary* _cleanupQueue_cleanupHandlerByUUID;
	PBItemCollection* _itemCollection;

}

@property (nonatomic,retain) PBItemCollection * itemCollection;              //@synthesize itemCollection=_itemCollection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newServicerForConnection:(id)arg1 itemCollection:(id)arg2 ;
-(void)setItemCollection:(PBItemCollection *)arg1 ;
-(PBItemCollection *)itemCollection;
-(void)waitForItemRequestsDeliveryCompletion:(/*^block*/id)arg1 ;
-(void)helloCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithConnection:(id)arg1 itemCollection:(id)arg2 ;
-(void)loadRepresentationForItemAtIndex:(unsigned long long)arg1 type:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)callCleanupBlockWithUUID:(id)arg1 ;
@end

