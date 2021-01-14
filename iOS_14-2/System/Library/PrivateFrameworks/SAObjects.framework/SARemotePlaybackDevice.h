/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SARemoteDevice.h>
#import <SAObjects/SABackgroundContextObject.h>

@class NSString, NSDictionary;

@interface SARemotePlaybackDevice : SARemoteDevice <SABackgroundContextObject>

@property (nonatomic,copy) NSString * airPlayRouteId; 
@property (nonatomic,copy) NSString * entitlementKey; 
@property (nonatomic,copy) NSString * hashedRouteId; 
@property (nonatomic,copy) NSString * storefront; 
@property (nonatomic,copy) NSString * userToken; 
@property (nonatomic,copy) NSDictionary * utsRequiredRequestKeyValuePairs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)remotePlaybackDevice;
+(id)remotePlaybackDeviceWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)storefront;
-(void)setStorefront:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)userToken;
-(void)setUserToken:(NSString *)arg1 ;
-(NSString *)hashedRouteId;
-(void)setHashedRouteId:(NSString *)arg1 ;
-(NSString *)airPlayRouteId;
-(void)setAirPlayRouteId:(NSString *)arg1 ;
-(NSString *)entitlementKey;
-(void)setEntitlementKey:(NSString *)arg1 ;
-(NSDictionary *)utsRequiredRequestKeyValuePairs;
-(void)setUtsRequiredRequestKeyValuePairs:(NSDictionary *)arg1 ;
@end

