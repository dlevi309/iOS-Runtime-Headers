/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices
*/

#import <CarPlayUIServices/CarPlayUIServices-Structs.h>
#import <CarPlayUIServices/CRSUIMutableApplicationSceneSettings.h>
#import <libobjc.A.dylib/CRSUIProxyApplicationSceneSettings.h>
#import <libobjc.A.dylib/CRSUIMutableMapStyleProviding.h>

@class NSString;

@interface CRSUIMutableProxyApplicationSceneSettings : CRSUIMutableApplicationSceneSettings <CRSUIProxyApplicationSceneSettings, CRSUIMutableMapStyleProviding>

@property (nonatomic,copy) NSString * proxiedApplicationBundleIdentifier; 
@property (assign,nonatomic) BOOL proxiedApplicationLinkedOnOrAfterYukon; 
@property (nonatomic,readonly) long long mapStyle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)proxiedApplicationBundleIdentifier;
-(long long)mapStyle;
-(void)setMapStyle:(long long)arg1 ;
-(BOOL)proxiedApplicationLinkedOnOrAfterYukon;
-(void)setProxiedApplicationBundleIdentifier:(NSString *)arg1 ;
-(void)setProxiedApplicationLinkedOnOrAfterYukon:(BOOL)arg1 ;
@end

