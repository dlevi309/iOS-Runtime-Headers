/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/


#import <AVKit/AVKit-Structs.h>
@class PGPlaybackStatePrerollAttributes, UIColor;

@interface AVPictureInPicturePrerollAttributes : NSObject {

	PGPlaybackStatePrerollAttributes* _pegasusAttributes;
	SCD_Struct_AV3 _requiredLinearPlaybackEndTime;

}

@property (nonatomic,readonly) PGPlaybackStatePrerollAttributes * pegasusAttributes;              //@synthesize pegasusAttributes=_pegasusAttributes - In the implementation block
@property (nonatomic,readonly) SCD_Struct_AV3 requiredLinearPlaybackEndTime;                      //@synthesize requiredLinearPlaybackEndTime=_requiredLinearPlaybackEndTime - In the implementation block
@property (nonatomic,readonly) UIColor * preferredTintColor; 
+(id)prerollAttributesForAdContentWithRequiredLinearPlaybackEndTime:(SCD_Struct_AV3)arg1 preferredTintColor:(id)arg2 ;
+(id)prerollAttributesForSponsoredContentWithRequiredLinearPlaybackEndTime:(SCD_Struct_AV3)arg1 preferredTintColor:(id)arg2 ;
-(PGPlaybackStatePrerollAttributes *)pegasusAttributes;
-(id)initWithPlaybackStatePrerollAttributes:(id)arg1 requiredLinearPlaybackEndTime:(SCD_Struct_AV3)arg2 ;
-(UIColor *)preferredTintColor;
-(SCD_Struct_AV3)requiredLinearPlaybackEndTime;
@end

