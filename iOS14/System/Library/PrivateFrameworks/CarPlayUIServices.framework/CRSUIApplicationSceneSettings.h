/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices
*/

#import <CarPlayUIServices/CarPlayUIServices-Structs.h>
#import <UIKitCore/UICarPlayApplicationSceneSettings.h>
#import <libobjc.A.dylib/CRSUIApplicationSceneSettings.h>

@protocol CRSUIApplicationSceneSettings <CRSUIMapStyleProviding>
@property (nonatomic,readonly) double bannerHeight; 
@required
-(double)bannerHeight;

@end


@class NSString;

@interface CRSUIApplicationSceneSettings : UICarPlayApplicationSceneSettings <CRSUIApplicationSceneSettings>

@property (nonatomic,readonly) double bannerHeight; 
@property (nonatomic,readonly) long long mapStyle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)bannerHeight;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(long long)mapStyle;
@end

