/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHAssetPropertySet.h>

@class NSString;

@interface PHAssetDescriptionProperties : PHAssetPropertySet {

	NSString* _title;
	NSString* _assetDescription;
	NSString* _accessibilityDescription;

}

@property (nonatomic,copy,readonly) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * assetDescription;                      //@synthesize assetDescription=_assetDescription - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessibilityDescription;              //@synthesize accessibilityDescription=_accessibilityDescription - In the implementation block
+(id)propertySetName;
+(id)propertiesToFetch;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
-(NSString *)assetDescription;
-(NSString *)accessibilityDescription;
-(NSString *)title;
@end

