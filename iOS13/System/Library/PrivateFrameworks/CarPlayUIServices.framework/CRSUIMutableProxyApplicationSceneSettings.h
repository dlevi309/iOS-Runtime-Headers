/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices
*/

#import <CarPlayUIServices/CarPlayUIServices-Structs.h>
#import <UIKitCore/UIMutableApplicationSceneSettings.h>
#import <libobjc.A.dylib/CRSUIProxyApplicationSceneSettings.h>

@class NSString;

@interface CRSUIMutableProxyApplicationSceneSettings : UIMutableApplicationSceneSettings <CRSUIProxyApplicationSceneSettings>

@property (nonatomic,copy) NSString * proxiedApplicationBundleIdentifier; 
@property (assign,nonatomic) BOOL proxiedApplicationLinkedOnOrAfterYukon; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)proxiedApplicationBundleIdentifier;
-(BOOL)proxiedApplicationLinkedOnOrAfterYukon;
-(void)setProxiedApplicationBundleIdentifier:(NSString *)arg1 ;
-(void)setProxiedApplicationLinkedOnOrAfterYukon:(BOOL)arg1 ;
@end

