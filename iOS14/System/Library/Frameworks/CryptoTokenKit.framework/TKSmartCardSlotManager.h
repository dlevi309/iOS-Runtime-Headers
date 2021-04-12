/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/

#import <libobjc.A.dylib/TKProtocolSlotClientNotification.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSMutableDictionary, NSArray, NSObject;

@interface TKSmartCardSlotManager : NSObject <TKProtocolSlotClientNotification> {

	NSXPCConnection* _connection;
	NSMutableDictionary* _endpoints;
	NSArray* _slotNames;
	NSObject*<OS_dispatch_queue> _slotNamesQueue;

}

@property (readonly) NSArray * slotNames; 
+(id)defaultManager;
-(id)init;
-(id)initWithServer:(id)arg1 ;
-(void)setSlotWithName:(id)arg1 endpoint:(id)arg2 type:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)getSlotWithName:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)slotNamed:(id)arg1 ;
-(NSArray *)slotNames;
@end

