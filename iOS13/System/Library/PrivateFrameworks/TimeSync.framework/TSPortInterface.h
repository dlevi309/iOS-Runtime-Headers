/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
*/

#import <libobjc.A.dylib/TSgPTPNetworkPortClient.h>

@protocol OS_dispatch_queue;
@class NSObject, TSgPTPPort, NSString;

@interface TSPortInterface : NSObject <TSgPTPNetworkPortClient> {

	NSObject*<OS_dispatch_queue> _notificationsQueue;
	/*function pointer*/void* _macLookupTimeoutCallback;
	void* _macLookupTimeoutRefcon;
	TSgPTPPort* _port;

}

@property (nonatomic,retain) TSgPTPPort * port;                     //@synthesize port=_port - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(TSgPTPPort *)port;
-(void)setPort:(TSgPTPPort *)arg1 ;
-(void)didTimeoutOnMACLookupForPort:(id)arg1 ;
-(id)initWithgPTPPort:(id)arg1 onClockIdentifier:(unsigned long long)arg2 ;
-(void)setMACLookupTimeoutCallback:(/*function pointer*/void*)arg1 refcon:(void*)arg2 ;
@end

