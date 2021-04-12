/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/AFContextDonation.h>

@protocol OS_dispatch_queue;
@class NSMapTable, NSXPCConnection, NSObject, NSString;

@interface AFContextDonationService : NSObject <AFContextDonation> {

	NSMapTable* _transformersByType;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultService;
-(void)_clearConnection;
-(id)_init;
-(id)_connection;
-(void)registerContextTransformer:(id)arg1 forType:(id)arg2 ;
-(void)donateContext:(id)arg1 withMetadata:(id)arg2 pushToRemote:(BOOL)arg3 ;
@end

