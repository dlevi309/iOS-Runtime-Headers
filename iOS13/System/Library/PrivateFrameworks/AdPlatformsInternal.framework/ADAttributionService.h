/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AdPlatformsInternal.framework/AdPlatformsInternal
*/

#import <AdCore/ADSingleton.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, NSMutableDictionary, NSNumber, NSString;

@interface ADAttributionService : ADSingleton <NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	NSMutableDictionary* _clients;
	NSNumber* _transactionID;

}

@property (retain) NSXPCListener * listener;                             //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * clients;              //@synthesize clients=_clients - In the implementation block
@property (nonatomic,retain) NSNumber * transactionID;                   //@synthesize transactionID=_transactionID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(NSXPCListener *)listener;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setListener:(NSXPCListener *)arg1 ;
-(NSNumber *)transactionID;
-(void)setTransactionID:(NSNumber *)arg1 ;
-(NSMutableDictionary *)clients;
-(void)setClients:(NSMutableDictionary *)arg1 ;
-(void)removeClientForToken:(id)arg1 ;
@end

