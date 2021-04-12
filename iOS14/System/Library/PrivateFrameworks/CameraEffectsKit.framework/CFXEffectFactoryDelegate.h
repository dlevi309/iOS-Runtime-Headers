/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <libobjc.A.dylib/JFXEffectFactoryDelegate.h>

@class NSString;

@interface CFXEffectFactoryDelegate : NSObject <JFXEffectFactoryDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)CFX_filterEffectsWithFactory:(id)arg1 ;
-(id)CFX_animojiEffectsWithFactory:(id)arg1 ;
-(id)CFX_overlayEffectsWithFactory:(id)arg1 ;
-(BOOL)CFX_disableExpensiveFilters;
-(BOOL)CFX_isExpensiveEffectID:(id)arg1 withFactory:(id)arg2 ;
-(BOOL)CFX_enoughPowerForStyleTransfer;
-(id)CFX_styleTransferEffectIDs;
-(void)effectFactory:(id)arg1 effectIDsAvailableForType:(int)arg2 completion:(/*^block*/id)arg3 ;
-(id)styleTransferEffectIDsForFactory:(id)arg1 ;
-(BOOL)effectFactory:(id)arg1 isStyleTransferEffectID:(id)arg2 ;
@end

