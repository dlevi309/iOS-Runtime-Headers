/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices
*/

#import <CarPlayUIServices/CarPlayUIServices-Structs.h>
#import <UIKitCore/UIMutableCarPlayApplicationSceneSettings.h>
#import <libobjc.A.dylib/CRSUIApplicationSceneSettings.h>
#import <libobjc.A.dylib/CRSUIMutableMapStyleProviding.h>

@class NSString;

@interface CRSUIMutableApplicationSceneSettings : UIMutableCarPlayApplicationSceneSettings <CRSUIApplicationSceneSettings, CRSUIMutableMapStyleProviding>

@property (assign,nonatomic) double bannerHeight; 
@property (nonatomic,readonly) long long mapStyle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)bannerHeight;
-(void)setBannerHeight:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)mapStyle;
-(void)setMapStyle:(long long)arg1 ;
@end

