/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/


@class AVTPreset, NSString;

@interface AVTPresetDependency : NSObject {

	long long category;
	AVTPreset* preset;
	NSString* variantName;

}

@property (assign,nonatomic) long long category; 
@property (nonatomic,retain) AVTPreset * preset; 
@property (nonatomic,retain) NSString * variantName; 
-(id)debugDescription;
-(long long)category;
-(void)setCategory:(long long)arg1 ;
-(NSString *)variantName;
-(void)setVariantName:(NSString *)arg1 ;
-(void)setPreset:(AVTPreset *)arg1 ;
-(AVTPreset *)preset;
@end

