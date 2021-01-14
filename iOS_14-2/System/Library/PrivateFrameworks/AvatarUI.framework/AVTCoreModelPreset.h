/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@class NSDictionary, AVTPreset, NSString;

@interface AVTCoreModelPreset : NSObject {

	BOOL _defaultPreset;
	NSDictionary* _tags;
	AVTPreset* _preset;

}

@property (nonatomic,copy,readonly) NSDictionary * tags;                               //@synthesize tags=_tags - In the implementation block
@property (getter=isDefaultPreset,nonatomic,readonly) BOOL defaultPreset;              //@synthesize defaultPreset=_defaultPreset - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * localizedName; 
@property (nonatomic,readonly) AVTPreset * preset;                                     //@synthesize preset=_preset - In the implementation block
+(id)tagSetFromPreset:(id)arg1 ;
-(NSString *)localizedName;
-(NSDictionary *)tags;
-(id)description;
-(unsigned long long)hash;
-(AVTPreset *)preset;
-(NSString *)identifier;
-(id)initWithPreset:(id)arg1 ;
-(id)copyForPairedCategory:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isDefaultPreset;
-(id)initWithPreset:(id)arg1 isDefaultPreset:(BOOL)arg2 ;
@end

