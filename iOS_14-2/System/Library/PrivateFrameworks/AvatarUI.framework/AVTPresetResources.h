/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)volatileIdentifierForScope:(id)arg1 ;
-(unsigned long long)costForScope:(id)arg1 ;
-(BOOL)requiresEncryption;
-(AVTPreset *)preset;
-(id)initWithPreset:(id)arg1 ;
-(NSString *)presetIdentifier;
@end

