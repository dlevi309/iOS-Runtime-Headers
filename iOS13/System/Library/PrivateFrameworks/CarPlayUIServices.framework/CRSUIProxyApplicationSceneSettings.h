/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices
*/

#import <CarPlayUIServices/CarPlayUIServices-Structs.h>
#import <UIKitCore/UIApplicationSceneSettings.h>
#import <libobjc.A.dylib/CRSUIProxyApplicationSceneSettings.h>
@class NSString;


@protocol CRSUIProxyApplicationSceneSettings <NSObject>
@property (nonatomic,copy,readonly) NSString * proxiedApplicationBundleIdentifier; 
@property (nonatomic,readonly) BOOL proxiedApplicationLinkedOnOrAfterYukon; 
@required
-(NSString *)proxiedApplicationBundleIdentifier;
-(BOOL)proxiedApplicationLinkedOnOrAfterYukon;

@end


@class NSString;

@interface CRSUIProxyApplicationSceneSettings : UIApplicationSceneSettings <CRSUIProxyApplicationSceneSettings>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * proxiedApplicationBundleIdentifier; 
@property (nonatomic,readonly) BOOL proxiedApplicationLinkedOnOrAfterYukon; 
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)proxiedApplicationBundleIdentifier;
-(BOOL)proxiedApplicationLinkedOnOrAfterYukon;
@end

