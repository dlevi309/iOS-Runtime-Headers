/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)helloCompletionBlock:(/*^block*/id)arg1 ;
-(PBItemCollection *)itemCollection;
-(void)setItemCollection:(PBItemCollection *)arg1 ;
-(void)waitForItemRequestsDeliveryCompletion:(/*^block*/id)arg1 ;
-(id)initWithConnection:(id)arg1 itemCollection:(id)arg2 ;
-(void)loadRepresentationForItemAtIndex:(unsigned long long)arg1 type:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)callCleanupBlockWithUUID:(id)arg1 ;
@end

