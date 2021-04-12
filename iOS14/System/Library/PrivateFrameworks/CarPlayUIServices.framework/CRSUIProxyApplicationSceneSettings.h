/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices
*/

#import <CarPlayUIServices/CarPlayUIServices-Structs.h>
#import <CarPlayUIServices/CRSUIApplicationSceneSettings.h>
#import <libobjc.A.dylib/CRSUIProxyApplicationSceneSettings.h>
@class NSString;


@protocol CRSUIProxyApplicationSceneSettings <CRSUIMapStyleProviding>
@property (nonatomic,copy,readonly) NSString * proxiedApplicationBundleIdentifier; 
@property (nonatomic,readonly) BOOL proxiedApplicationLinkedOnOrAfterYukon; 
@required
-(NSString *)proxiedApplicationBundleIdentifier;
-(BOOL)proxiedApplicationLinkedOnOrAfterYukon;

@end


@class NSString;

@interface CRSUIProxyApplicationSceneSettings : CRSUIApplicationSceneSettings <CRSUIProxyApplicationSceneSettings>

@property (nonatomic,copy,readonly) NSString * proxiedApplicationBundleIdentifier; 
@property (nonatomic,readonly) BOOL proxiedApplicationLinkedOnOrAfterYukon; 
@property (nonatomic,readonly) long long mapStyle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)proxiedApplicationBundleIdentifier;
-(long long)mapStyle;
-(BOOL)proxiedApplicationLinkedOnOrAfterYukon;
@end

