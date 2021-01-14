/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isClassCLocked;
-(id)init;
-(id)getDevicesInternal;
-(id)attributeNamesWithError:(id*)arg1 ;
-(id)initWithClientId:(unsigned long long)arg1 ;
-(id)budgetNamesWithError:(id*)arg1 ;
-(id)attributeForName:(id)arg1 type:(long long)arg2 error:(id*)arg3 ;
-(id)initWithClientId:(unsigned long long)arg1 enableCaching:(BOOL)arg2 ;
-(id)attributeForName:(id)arg1 type:(long long)arg2 clientId:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)budgetForName:(id)arg1 type:(long long)arg2 error:(id*)arg3 ;
-(id)registerAttributeWithName:(id)arg1 type:(long long)arg2 dataProtectionClass:(id)arg3 error:(id*)arg4 ;
-(id)registerBudgetWithName:(id)arg1 value:(long long)arg2 type:(long long)arg3 error:(id*)arg4 ;
-(id)attributeFromFullname:(id)arg1 error:(id*)arg2 ;
-(id)registerBudgetWithName:(id)arg1 value:(long long)arg2 type:(long long)arg3 withOptions:(unsigned long long)arg4 error:(id*)arg5 ;
-(BOOL)deleteClientDataWithError:(id*)arg1 ;
-(id)representationStringFromAttribute:(id)arg1 value:(id)arg2 error:(id*)arg3 ;
-(id)attributeFromRepresentation:(id)arg1 error:(id*)arg2 ;
-(id)representationStringFromAttribute:(id)arg1 value:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(BOOL)registerForDeviceChanges;
-(id)attributeExtendedComponentsFromRepresentation:(id)arg1 error:(id*)arg2 ;
-(id)copyDevicesUncached;
-(id)attributeComponentsFromRepresentation:(id)arg1 error:(id*)arg2 ;
-(id)getDeviceFromDescription:(id)arg1 error:(id*)arg2 ;
-(BOOL)setDevicesChangedHandlerWithError:(id*)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)broadcastSystemDataWithError:(id*)arg1 ;
-(BOOL)setNonAppBundleIdWithError:(id)arg1 error:(id*)arg2 ;
-(BOOL)setNonAppBundlIdWithError:(id)arg1 error:(id*)arg2 ;
-(BOOL)setActiveComplications:(id)arg1 error:(id*)arg2 ;
-(BOOL)setGlancesLingeredOn:(id)arg1 error:(id*)arg2 ;
-(CDDClientConnection *)cddClientConnection;
-(void)setUnlocked:(BOOL)arg1 ;
-(id)description;
-(unsigned long long)clientId;
-(id)getDevices;
-(BOOL)unlocked;
@end

