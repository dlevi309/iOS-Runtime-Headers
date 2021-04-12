/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTCacheableResource.h>

@class AVTPreset, NSString;

@interface AVTPresetResources : NSObject <AVTCacheableResource> {

	AVTPreset* _preset;

}

@property (nonatomic,readonly) AVTPreset * preset;                            //@synthesize preset=_preset - In the implementation block
@property (nonatomic,copy,readonly) NSString * presetIdentifier; 
@property (nonatomic,readonly) id resources; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)resources;
-(BOOL)requiresEncryption;
-(id)initWithPreset:(id)arg1 ;
-(NSString *)presetIdentifier;
-(AVTPreset *)preset;
-(id)volatileIdentifierForScope:(id)arg1 ;
-(unsigned long long)costForScope:(id)arg1 ;
@end

