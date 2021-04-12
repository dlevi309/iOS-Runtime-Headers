/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices
*/

#import <CarPlayUIServices/CarPlayUIServices-Structs.h>
#import <UIKitCore/UIApplicationSceneSettings.h>
#import <libobjc.A.dylib/CRSUIInstrumentClusterSceneSettings.h>

@protocol CRSUIInstrumentClusterSceneSettings <NSObject>
@property (nonatomic,readonly) unsigned long long itemType; 
@property (nonatomic,readonly) unsigned long long showsCompass; 
@property (nonatomic,readonly) unsigned long long showsSpeedLimit; 
@required
-(unsigned long long)itemType;
-(unsigned long long)showsCompass;
-(unsigned long long)showsSpeedLimit;

@end


@class NSString;

@interface CRSUIInstrumentClusterSceneSettings : UIApplicationSceneSettings <CRSUIInstrumentClusterSceneSettings>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long itemType; 
@property (nonatomic,readonly) unsigned long long showsCompass; 
@property (nonatomic,readonly) unsigned long long showsSpeedLimit; 
-(NSString *)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)itemType;
-(unsigned long long)showsCompass;
-(unsigned long long)showsSpeedLimit;
@end

