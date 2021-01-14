/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)muids;
-(void)submitWithHandler:(/*^block*/id)arg1 ;
-(id<GEOMapServiceTicket>)ticket;
-(void)cancel;
-(BOOL)isCancelled;
-(void)prepareForRetry;
-(id)initWithMUIDs:(id)arg1 ;
-(NSArray *)resolvedBusinessItems;
@end

