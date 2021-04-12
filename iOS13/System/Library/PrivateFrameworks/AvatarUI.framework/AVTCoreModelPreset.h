/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@class NSDictionary, AVTPreset, NSString;

@interface AVTCoreModelPreset : NSObject {

	NSDictionary* _tags;
	AVTPreset* _preset;

}

@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * localizedName; 
@property (nonatomic,copy,readonly) NSDictionary * tags;                   //@synthesize tags=_tags - In the implementation block
@property (nonatomic,readonly) AVTPreset * preset;                         //@synthesize preset=_preset - In the implementation block
+(id)tagSetFromPreset:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(NSString *)localizedName;
-(NSDictionary *)tags;
-(id)initWithPreset:(id)arg1 ;
-(AVTPreset *)preset;
-(id)copyForPairedCategory:(long long)arg1 ;
@end

