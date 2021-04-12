/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)localizedName;
-(id)JSONObjectRepresentation;
-(NSSet *)disabledBundleIdentifiers;
-(id)dailySnapshotKey;
-(BOOL)isValidOption;
-(id)initWithJSONObjectRepresentation:(id)arg1 forDevice:(id)arg2 ;
-(id)initWithDisabledDataSourceIdentifiers:(id)arg1 forDevice:(id)arg2 ;
-(id)_alphabeticallySortedIdentifiers;
@end

