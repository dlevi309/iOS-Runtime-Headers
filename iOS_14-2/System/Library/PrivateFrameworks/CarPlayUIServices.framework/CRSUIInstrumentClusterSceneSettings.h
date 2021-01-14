/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices
*/

#import <CarPlayUIServices/CarPlayUIServices-Structs.h>
#import <UIKitCore/UICarPlayApplicationSceneSettings.h>
#import <libobjc.A.dylib/CRSUIInstrumentClusterSceneSettings.h>

@protocol CRSUIInstrumentClusterSceneSettings <CRSUIMapStyleProviding>
@property (nonatomic,readonly) unsigned long long itemType; 
@property (nonatomic,readonly) unsigned long long showsCompass; 
@property (nonatomic,readonly) unsigned long long showsSpeedLimit; 
@required
-(unsigned long long)showsCompass;
-(unsigned long long)itemType;
-(unsigned long long)showsSpeedLimit;

@end


@class NSString;

@interface CRSUIInstrumentClusterSceneSettings : UICarPlayApplicationSceneSettings <CRSUIInstrumentClusterSceneSettings>

@property (nonatomic,readonly) unsigned long long itemType; 
@property (nonatomic,readonly) unsigned long long showsCompass; 
@property (nonatomic,readonly) unsigned long long showsSpeedLimit; 
@property (nonatomic,readonly) long long mapStyle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)showsCompass;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(unsigned long long)itemType;
-(unsigned long long)showsSpeedLimit;
-(long long)mapStyle;
@end

