/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKEditOption.h>

@class NSSet;

@interface NTKUpNextDisabledDataSourcesEditOption : NTKEditOption {

	NSSet* _disabledBundleIdentifiers;

}

@property (nonatomic,readonly) NSSet * disabledBundleIdentifiers;              //@synthesize disabledBundleIdentifiers=_disabledBundleIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)optionWithDisabledDataSourceIdentifiers:(id)arg1 forDevice:(id)arg2 ;
-(id)localizedName;
-(void)encodeWithCoder:(id)arg1 ;
-(NSSet *)disabledBundleIdentifiers;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dailySnapshotKey;
-(id)JSONObjectRepresentation;
-(BOOL)isValidOption;
-(id)initWithJSONObjectRepresentation:(id)arg1 forDevice:(id)arg2 ;
-(id)initWithDisabledDataSourceIdentifiers:(id)arg1 forDevice:(id)arg2 ;
-(id)_alphabeticallySortedIdentifiers;
@end

