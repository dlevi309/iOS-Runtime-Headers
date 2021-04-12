/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

}

@property (assign,nonatomic) long long categoryType;                                        //@synthesize categoryType=_categoryType - In the implementation block
@property (nonatomic,retain) HKUIMetricColors * categoryMetricColors;                       //@synthesize categoryMetricColors=_categoryMetricColors - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                          //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * displayImageName;                                     //@synthesize displayImageName=_displayImageName - In the implementation block
@property (nonatomic,retain) UIImage * displayImage;                                        //@synthesize displayImage=_displayImage - In the implementation block
@property (nonatomic,retain) UIImage * displayImageWhite;                                   //@synthesize displayImageWhite=_displayImageWhite - In the implementation block
@property (nonatomic,retain) NSArray * sampleTypes;                                         //@synthesize sampleTypes=_sampleTypes - In the implementation block
@property (nonatomic,readonly) NSDictionary * additionalPredicatesForCategory; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)displayName;
-(long long)categoryType;
-(void)setCategoryType:(long long)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(UIImage *)displayImage;
-(void)setSampleTypes:(NSArray *)arg1 ;
-(NSArray *)sampleTypes;
-(UIImage *)displayImageWhite;
-(HKUIMetricColors *)categoryMetricColors;
-(NSDictionary *)additionalPredicatesForCategory;
-(void)setCategoryMetricColors:(HKUIMetricColors *)arg1 ;
-(void)setDisplayImageName:(NSString *)arg1 ;
-(NSString *)displayImageName;
-(void)setDisplayImage:(UIImage *)arg1 ;
-(void)setDisplayImageWhite:(UIImage *)arg1 ;
@end

