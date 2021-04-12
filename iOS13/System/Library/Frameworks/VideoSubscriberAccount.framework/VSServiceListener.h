/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <libobjc.A.dylib/VSServiceConnectionHandlerDelegate.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSArray, NSXPCInterface, NSMutableSet, NSString;

@interface VSServiceListener : NSObject <VSServiceConnectionHandlerDelegate, NSXPCListenerDelegate> {

	NSArray* _entitlementNames;
	NSXPCInterface* _exportedInterface;
	id _exportedObject;
	NSMutableSet* _connectionHandlers;

}

@property (nonatomic,retain) NSMutableSet * connectionHandlers;               //@synthesize connectionHandlers=_connectionHandlers - In the implementation block
@property (nonatomic,copy) NSArray * entitlementNames;                        //@synthesize entitlementNames=_entitlementNames - In the implementation block
@property (nonatomic,retain) NSXPCInterface * exportedInterface;              //@synthesize exportedInterface=_exportedInterface - In the implementation block
@property (nonatomic,retain) id exportedObject;                               //@synthesize exportedObject=_exportedObject - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setExportedObject:(id)arg1 ;
-(void)setExportedInterface:(NSXPCInterface *)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)exportedObject;
-(NSXPCInterface *)exportedInterface;
-(NSMutableSet *)connectionHandlers;
-(void)setEntitlementNames:(NSArray *)arg1 ;
-(void)connectionHandlerDidFinish:(id)arg1 ;
-(NSArray *)entitlementNames;
-(void)_addConnectionHandler:(id)arg1 ;
-(void)_removeConnectionHandler:(id)arg1 ;
-(void)setConnectionHandlers:(NSMutableSet *)arg1 ;
@end

