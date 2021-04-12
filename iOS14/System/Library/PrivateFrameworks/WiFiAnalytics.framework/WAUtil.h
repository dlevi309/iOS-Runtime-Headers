/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
*/


@interface WAUtil : NSObject
+(id)deviceName;
+(id)_generateInvocationForMethod:(void*)arg1 ;
+(id)getMessageInstanceForKey:(id)arg1 andGroupType:(long long)arg2 ;
+(id)_getBaseTokenStorageKeychainQueryWithIdentifer:(id)arg1 ;
+(id)_getBasePersistenceKeychainQuery;
+(id)groupTypeToAWDComponentID;
+(unsigned long long)getAWDTimestamp;
+(id)getTokenForIdentifier:(id)arg1 ;
+(BOOL)storeToken:(id)arg1 withIdentifier:(id)arg2 ;
+(id)getCopyOfMessage:(id)arg1 withNumericalValuesSubstractedByValuesInMessage:(id)arg2 ;
+(id)getValueForEntitlementForCurrentProcess:(id)arg1 ;
+(id)groupTypeToString:(long long)arg1 ;
+(id)trimTokenForLogging:(id)arg1 ;
+(id)getObscureKey;
+(id)rotateUUIDsForMessage:(id)arg1 ;
+(id)rotateObscureKey;
+(id)unobscureModelData:(id)arg1 forModelkey:(id)arg2 ;
@end

