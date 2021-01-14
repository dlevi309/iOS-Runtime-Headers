/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)closeFlow;
-(id)initWithInterface:(id)arg1 registration:(id)arg2 eventHandler:(/*^block*/id)arg3 ;
-(void)resetFlow:(id)arg1 ;
-(void)close;
-(BOOL)matchNexusAgentWithFlow:(id)arg1 ;
-(void)clearFlowEventHandler;
-(void)notifyFlowEvent:(int)arg1 ;
-(BOOL)matchNexusAgent:(unsigned char)arg1 ;
-(BOOL)matchNexusInstance:(id)arg1 ;
-(void)dealloc;
@end

