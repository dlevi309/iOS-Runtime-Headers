/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSMutableDictionary *)clients;
-(id)init;
-(NSXPCListener *)listener;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)removeClientForToken:(id)arg1 ;
-(void)setTransactionID:(NSNumber *)arg1 ;
-(void)setClients:(NSMutableDictionary *)arg1 ;
-(NSNumber *)transactionID;
@end

