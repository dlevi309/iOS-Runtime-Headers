/*
* Generated on Thursday, January 14, 2021 at 2:29:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

