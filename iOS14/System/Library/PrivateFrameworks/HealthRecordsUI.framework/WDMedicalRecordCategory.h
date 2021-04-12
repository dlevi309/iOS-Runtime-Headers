/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <HealthRecordsUI/HealthRecordsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HKUIMetricColors, NSString, UIImage, NSArray, NSDictionary;

@interface WDMedicalRecordCategory : NSObject <NSCopying> {

	long long _categoryType;
	HKUIMetricColors* _categoryMetricColors;
	NSString* _displayName;
	NSString* _displayImageName;
	UIImage* _displayImage;
	UIImage* _displayImageWhite;
	NSArray* _sampleTypes;
	NSDictionary* _additionalPredicatesForCategory;

}

@property (assign,nonatomic) long long categoryType;                                    //@synthesize categoryType=_categoryType - In the implementation block
@property (nonatomic,retain) HKUIMetricColors * categoryMetricColors;                   //@synthesize categoryMetricColors=_categoryMetricColors - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                      //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * displayImageName;                                 //@synthesize displayImageName=_displayImageName - In the implementation block
@property (nonatomic,retain) UIImage * displayImage;                                    //@synthesize displayImage=_displayImage - In the implementation block
@property (nonatomic,retain) UIImage * displayImageWhite;                               //@synthesize displayImageWhite=_displayImageWhite - In the implementation block
@property (nonatomic,copy) NSArray * sampleTypes;                                       //@synthesize sampleTypes=_sampleTypes - In the implementation block
@property (nonatomic,copy) NSDictionary * additionalPredicatesForCategory;              //@synthesize additionalPredicatesForCategory=_additionalPredicatesForCategory - In the implementation block
-(long long)categoryType;
-(void)setCategoryMetricColors:(HKUIMetricColors *)arg1 ;
-(void)setDisplayImageName:(NSString *)arg1 ;
-(NSString *)displayImageName;
-(void)setDisplayImageWhite:(UIImage *)arg1 ;
-(void)setAdditionalPredicatesForCategory:(NSDictionary *)arg1 ;
-(NSArray *)sampleTypes;
-(void)setCategoryType:(long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setSampleTypes:(NSArray *)arg1 ;
-(NSDictionary *)additionalPredicatesForCategory;
-(void)setDisplayName:(NSString *)arg1 ;
-(UIImage *)displayImage;
-(UIImage *)displayImageWhite;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(void)setDisplayImage:(UIImage *)arg1 ;
-(HKUIMetricColors *)categoryMetricColors;
@end

