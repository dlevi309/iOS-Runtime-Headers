/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
*/


@class NSMutableArray;

@interface BPSSubscriberList : NSObject {

	NSMutableArray* _items;
	NSMutableArray* _tickets;
	long long _nextTicket;

}

@property (nonatomic,retain) NSMutableArray * items;                //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSMutableArray * tickets;              //@synthesize tickets=_tickets - In the implementation block
@property (assign,nonatomic) long long nextTicket;                  //@synthesize nextTicket=_nextTicket - In the implementation block
-(void)setItems:(NSMutableArray *)arg1 ;
-(id)init;
-(NSMutableArray *)items;
-(long long)appendElement:(id)arg1 ;
-(NSMutableArray *)tickets;
-(id)claimAll;
-(void)removeTicket:(long long)arg1 ;
-(long long)nextTicket;
-(void)setNextTicket:(long long)arg1 ;
-(void)setTickets:(NSMutableArray *)arg1 ;
@end

