/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <libobjc.A.dylib/JFXMediaSettingsProvider.h>

@class NSString;

@interface JFXMediaSettings : NSObject <JFXMediaSettingsProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)providerDelegate;
+(id)sharedInstance;
+(int)timeScale;
+(int)frameRate;
+(CGSize)renderSize;
+(void)setProviderDelegate:(id)arg1 ;
+(CGSize)frameSize;
-(int)timeScale;
-(int)frameRate;
-(CGSize)renderSize;
-(CGSize)frameSize;
@end

