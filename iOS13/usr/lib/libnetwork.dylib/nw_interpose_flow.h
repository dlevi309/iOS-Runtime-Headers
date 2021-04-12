/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnetwork.dylib
*/


@protocol OS_nw_interface, OS_nw_path_flow_registration, OS_nw_path_flow;
@class NSObject;

@interface nw_interpose_flow : NSObject {

	NSObject*<OS_nw_interface> _interface;
	NSObject*<OS_nw_path_flow_registration> _registration;
	NSObject*<OS_nw_path_flow> _flow;
	/*^block*/id _eventHandler;

}
-(void)dealloc;
-(void)close;
-(void)resetFlow:(id)arg1 ;
-(id)initWithInterface:(id)arg1 registration:(id)arg2 eventHandler:(/*^block*/id)arg3 ;
-(void)notifyFlowEvent:(int)arg1 ;
-(void)closeFlow;
-(void)clearFlowEventHandler;
-(BOOL)matchNexusAgent:(unsigned char)arg1 ;
-(BOOL)matchNexusAgentWithFlow:(id)arg1 ;
-(BOOL)matchNexusInstance:(id)arg1 ;
@end

