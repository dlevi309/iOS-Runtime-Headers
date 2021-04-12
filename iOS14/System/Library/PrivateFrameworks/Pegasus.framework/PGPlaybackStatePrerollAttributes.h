/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
*/


@class NSDictionary, UIColor;

@interface PGPlaybackStatePrerollAttributes : NSObject {

	NSDictionary* _dictionaryRepresentation;

}

@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation;              //@synthesize dictionaryRepresentation=_dictionaryRepresentation - In the implementation block
@property (nonatomic,readonly) long long contentType; 
@property (nonatomic,readonly) double requiredLinearPlaybackEndTime; 
@property (nonatomic,readonly) UIColor * preferredTintColor; 
+(id)prerollAttributesForAdContentWithRequiredLinearPlaybackEndTime:(double)arg1 preferredTintColor:(id)arg2 ;
+(id)prerollAttributesForSponsoredContentWithRequiredLinearPlaybackEndTime:(double)arg1 preferredTintColor:(id)arg2 ;
-(NSDictionary *)dictionaryRepresentation;
-(id)succinctDescription;
-(UIColor *)preferredTintColor;
-(double)requiredLinearPlaybackEndTime;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(long long)contentType;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithRequiredLinearPlaybackEndTime:(double)arg1 preferredTintColor:(id)arg2 contentType:(long long)arg3 ;
-(id)preferredTintColorDescription;
@end

