/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <libobjc.A.dylib/CLSQueryProtocol.h>

@protocol GEOMapServiceTicket;
@class CLSPOICache, NSArray, NSString;

@interface CLSBusinessGeoServiceQuery : NSObject <CLSQueryProtocol> {

	CLSPOICache* _cache;
	BOOL _isCancelled;
	NSArray* _muids;
	id<GEOMapServiceTicket> _ticket;
	NSArray* _resolvedBusinessItems;

}

@property (nonatomic,readonly) BOOL isCancelled;                             //@synthesize isCancelled=_isCancelled - In the implementation block
@property (nonatomic,copy,readonly) NSArray * muids;                         //@synthesize muids=_muids - In the implementation block
@property (nonatomic,readonly) id<GEOMapServiceTicket> ticket;               //@synthesize ticket=_ticket - In the implementation block
@property (nonatomic,readonly) NSArray * resolvedBusinessItems;              //@synthesize resolvedBusinessItems=_resolvedBusinessItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(BOOL)isCancelled;
-(id<GEOMapServiceTicket>)ticket;
-(NSArray *)muids;
-(void)submitWithHandler:(/*^block*/id)arg1 ;
-(void)prepareForRetry;
-(id)initWithMUIDs:(id)arg1 ;
-(NSArray *)resolvedBusinessItems;
@end

