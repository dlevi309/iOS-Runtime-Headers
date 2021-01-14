/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)_offerPath;
+(id)_offerFullPath;
+(id)defaultOfferManager;
-(void)saveOffer:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)clearOffers:(/*^block*/id)arg1 ;
-(void)_activeAccountChangedNotification:(id)arg1 ;
-(void)fetchOffers:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setOffers:(NSArray *)arg1 ;
-(void)_setOffers:(id)arg1 ;
-(id)_connection;
-(NSArray *)offers;
-(id)_offers;
@end

