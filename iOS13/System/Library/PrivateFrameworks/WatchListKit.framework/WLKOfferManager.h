/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSArray;

@interface WLKOfferManager : NSObject {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _offers;

}

@property (nonatomic,retain) NSArray * offers;              //@synthesize offers=_offers - In the implementation block
+(id)defaultOfferManager;
+(id)_offerFullPath;
+(id)_offerPath;
-(id)init;
-(id)_connection;
-(NSArray *)offers;
-(void)setOffers:(NSArray *)arg1 ;
-(id)_offers;
-(void)saveOffer:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchOffers:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)clearOffers:(/*^block*/id)arg1 ;
-(void)_setOffers:(id)arg1 ;
@end

