/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices
*/

#import <CarPlayUIServices/CarPlayUIServices-Structs.h>
#import <UIKitCore/UIMutableCarPlayApplicationSceneSettings.h>
#import <libobjc.A.dylib/CRSUIInstrumentClusterSceneSettings.h>
#import <libobjc.A.dylib/CRSUIMutableMapStyleProviding.h>

@class NSString;

@interface CRSUIMutableInstrumentClusterSceneSettings : UIMutableCarPlayApplicationSceneSettings <CRSUIInstrumentClusterSceneSettings, CRSUIMutableMapStyleProviding>

@property (assign,nonatomic) unsigned long long itemType; 
@property (assign,nonatomic) unsigned long long showsCompass; 
@property (assign,nonatomic) unsigned long long showsSpeedLimit; 
@property (nonatomic,readonly) long long mapStyle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setShowsCompass:(unsigned long long)arg1 ;
-(unsigned long long)showsCompass;
-(void)setItemType:(unsigned long long)arg1 ;
-(NSString *)description;
-(unsigned long long)itemType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)showsSpeedLimit;
-(long long)mapStyle;
-(void)setMapStyle:(long long)arg1 ;
-(void)setShowsSpeedLimit:(unsigned long long)arg1 ;
@end

