/*
* Generated on Monday, March 1, 2021 at 2:35:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

#import <libacmobileshim.dylib/ACFComponents.h>

@protocol ACCTicketManagerProtocol, ACCSSOTGTStoragePolicy;
@interface ACCComponents : ACFComponents {

	id<ACCTicketManagerProtocol> _ticketManager;
	id<ACCSSOTGTStoragePolicy> _tgtStoragePolicy;

}

@property (nonatomic,retain) id<ACCSSOTGTStoragePolicy> tgtStoragePolicy;              //@synthesize tgtStoragePolicy=_tgtStoragePolicy - In the implementation block
@property (nonatomic,retain) id<ACCTicketManagerProtocol> ticketManager;               //@synthesize ticketManager=_ticketManager - In the implementation block
+(id)components;
+(id)defaultComponents;
-(void)dealloc;
-(id)createHandlerWithClass:(Class)arg1 context:(id)arg2 ;
-(id<ACCTicketManagerProtocol>)ticketManager;
-(id<ACCSSOTGTStoragePolicy>)tgtStoragePolicy;
-(void)setTgtStoragePolicy:(id<ACCSSOTGTStoragePolicy>)arg1 ;
-(void)setTicketManager:(id<ACCTicketManagerProtocol>)arg1 ;
@end

