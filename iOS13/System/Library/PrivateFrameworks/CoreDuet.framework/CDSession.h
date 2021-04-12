/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class CDDClientConnection;

@interface CDSession : NSObject {

	BOOL _unlocked;
	CDDClientConnection* _cddClientConnection;
	unsigned long long _clientId;

}

@property (readonly) CDDClientConnection * cddClientConnection;              //@synthesize cddClientConnection=_cddClientConnection - In the implementation block
@property (readonly) unsigned long long clientId;                            //@synthesize clientId=_clientId - In the implementation block
@property (assign) BOOL unlocked;                                            //@synthesize unlocked=_unlocked - In the implementation block
+(id)sharedSessionWithClientId:(unsigned long long)arg1 ;
-(id)init;
-(id)description;
-(id)getDevicesInternal;
-(BOOL)isClassCLocked;
-(id)initWithClientId:(unsigned long long)arg1 ;
-(id)initWithClientId:(unsigned long long)arg1 enableCaching:(BOOL)arg2 ;
-(id)attributeNamesWithError:(id*)arg1 ;
-(id)budgetNamesWithError:(id*)arg1 ;
-(id)attributeForName:(id)arg1 type:(long long)arg2 clientId:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)attributeForName:(id)arg1 type:(long long)arg2 error:(id*)arg3 ;
-(id)budgetForName:(id)arg1 type:(long long)arg2 error:(id*)arg3 ;
-(id)registerAttributeWithName:(id)arg1 type:(long long)arg2 dataProtectionClass:(id)arg3 error:(id*)arg4 ;
-(id)registerBudgetWithName:(id)arg1 value:(long long)arg2 type:(long long)arg3 error:(id*)arg4 ;
-(id)registerBudgetWithName:(id)arg1 value:(long long)arg2 type:(long long)arg3 withOptions:(unsigned long long)arg4 error:(id*)arg5 ;
-(BOOL)deleteClientDataWithError:(id*)arg1 ;
-(id)attributeFromFullname:(id)arg1 error:(id*)arg2 ;
-(id)representationStringFromAttribute:(id)arg1 value:(id)arg2 error:(id*)arg3 ;
-(id)representationStringFromAttribute:(id)arg1 value:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)attributeFromRepresentation:(id)arg1 error:(id*)arg2 ;
-(id)attributeExtendedComponentsFromRepresentation:(id)arg1 error:(id*)arg2 ;
-(id)attributeComponentsFromRepresentation:(id)arg1 error:(id*)arg2 ;
-(BOOL)registerForDeviceChanges;
-(id)getDevices;
-(id)copyDevicesUncached;
-(BOOL)setDevicesChangedHandlerWithError:(id*)arg1 handler:(/*^block*/id)arg2 ;
-(id)getDeviceFromDescription:(id)arg1 error:(id*)arg2 ;
-(BOOL)broadcastSystemDataWithError:(id*)arg1 ;
-(BOOL)setNonAppBundleIdWithError:(id)arg1 error:(id*)arg2 ;
-(BOOL)setNonAppBundlIdWithError:(id)arg1 error:(id*)arg2 ;
-(BOOL)setActiveComplications:(id)arg1 error:(id*)arg2 ;
-(BOOL)setGlancesLingeredOn:(id)arg1 error:(id*)arg2 ;
-(CDDClientConnection *)cddClientConnection;
-(unsigned long long)clientId;
-(BOOL)unlocked;
-(void)setUnlocked:(BOOL)arg1 ;
@end

