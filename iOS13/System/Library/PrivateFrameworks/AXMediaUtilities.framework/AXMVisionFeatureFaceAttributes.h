/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface AXMVisionFeatureFaceAttributes : NSObject <NSSecureCoding> {

	long long _ageCategory;
	long long _genderCategory;
	long long _eyesCategory;
	long long _smilingCategory;
	long long _faceHairCategory;
	long long _hairColorCategory;
	long long _baldCategory;
	long long _glassesCategory;
	NSDictionary* _results;

}

@property (nonatomic,retain) NSDictionary * results;                     //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) long long ageCategory;                    //@synthesize ageCategory=_ageCategory - In the implementation block
@property (nonatomic,readonly) long long genderCategory;                 //@synthesize genderCategory=_genderCategory - In the implementation block
@property (nonatomic,readonly) long long eyesCategory;                   //@synthesize eyesCategory=_eyesCategory - In the implementation block
@property (nonatomic,readonly) long long smilingCategory;                //@synthesize smilingCategory=_smilingCategory - In the implementation block
@property (nonatomic,readonly) long long faceHairCategory;               //@synthesize faceHairCategory=_faceHairCategory - In the implementation block
@property (nonatomic,readonly) long long hairColorCategory;              //@synthesize hairColorCategory=_hairColorCategory - In the implementation block
@property (nonatomic,readonly) long long baldCategory;                   //@synthesize baldCategory=_baldCategory - In the implementation block
@property (nonatomic,readonly) long long glassesCategory;                //@synthesize glassesCategory=_glassesCategory - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)unitTestingFaceAttributes;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)results;
-(long long)smilingCategory;
-(long long)eyesCategory;
-(void)setResults:(NSDictionary *)arg1 ;
-(long long)ageCategory;
-(long long)genderCategory;
-(long long)faceHairCategory;
-(long long)hairColorCategory;
-(long long)baldCategory;
-(long long)glassesCategory;
-(long long)_AXMAgeCategoryForVisionCategoryIdentifier:(id)arg1 ;
-(long long)_AXMGenderCategoryForVisionCategoryIdentifier:(id)arg1 ;
-(long long)_AXMEyesCategoryForVisionCategoryIdentifier:(id)arg1 ;
-(long long)_AXMSmilingCategoryForVisionCategoryIdentifier:(id)arg1 ;
-(long long)_AXMFaceHairCategoryForVisionCategoryIdentifier:(id)arg1 ;
-(long long)_AXMHairColorCategoryForVisionCategoryIdentifier:(id)arg1 ;
-(long long)_AXMBaldCategoryForVisionCategoryIdentifier:(id)arg1 ;
-(long long)_AXMGlassesCategoryForVisionCategoryIdentifier:(id)arg1 ;
-(id)_accessibilityLabelForAgeCategory;
-(id)_accessibilityLabelForSmilingCategory;
-(id)_accessibilityLabelForFaceHairCategory;
-(id)_accessibilityLabelForHairColorCategory;
-(id)_accessibilityLabelForBaldCategory;
-(id)_accessibilityLabelForGlassesCategory;
-(id)initWithVisionFaceAttributes:(id)arg1 ;
-(id)initWithAVMetadataFaceObject:(id)arg1 ;
-(id)_accessibilityLabelForEyesCategory;
-(id)accessibilityLabelForAttributes;
@end

