/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIService.framework/AccessibilityUIService
*/


#import <AccessibilityUIService/AccessibilityUIService-Structs.h>
@class NSMutableArray;

@interface AXUIServiceEntitlementChecker : NSObject {

	Class _serviceClass;
	NSMutableArray* _clientConnections;
	NSMutableArray* _entitlementsCaches;

}

@property (assign,nonatomic) Class serviceClass;                               //@synthesize serviceClass=_serviceClass - In the implementation block
@property (nonatomic,retain) NSMutableArray * clientConnections;               //@synthesize clientConnections=_clientConnections - In the implementation block
@property (nonatomic,retain) NSMutableArray * entitlementsCaches;              //@synthesize entitlementsCaches=_entitlementsCaches - In the implementation block
-(Class)serviceClass;
-(BOOL)_clientProcessWithAuditToken:(SCD_Struct_AX1*)arg1 hasEntitlement:(id)arg2 ;
-(void)clientConnectionWillBeTerminated:(id)arg1 ;
-(BOOL)serviceCanProcessMessageWithIdentifier:(unsigned long long)arg1 fromClientWithConnection:(id)arg2 possibleRequiredEntitlements:(id*)arg3 ;
-(void)setClientConnections:(NSMutableArray *)arg1 ;
-(unsigned long long)_indexOfClientConnection:(id)arg1 ;
-(NSMutableArray *)clientConnections;
-(NSMutableArray *)entitlementsCaches;
-(void)setEntitlementsCaches:(NSMutableArray *)arg1 ;
-(id)_possibleRequiredEntitlementForMessageWithIdentifier:(unsigned long long)arg1 ;
-(id)initWithServiceClass:(Class)arg1 ;
-(id)_singleRequiredEntitlementForMessageWithIdentifier:(unsigned long long)arg1 ;
-(void)setServiceClass:(Class)arg1 ;
-(void)dealloc;
@end

