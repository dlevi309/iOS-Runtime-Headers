/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, PXSettings, NSDictionary;

@interface PXSettingsConfiguration : NSObject <NSSecureCoding> {

	NSString* _name;
	PXSettings* _settings;
	NSDictionary* _archive;

}

@property (nonatomic,readonly) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) PXSettings * settings;               //@synthesize settings=_settings - In the implementation block
@property (nonatomic,readonly) NSDictionary * archive;              //@synthesize archive=_archive - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)sharableStringForConfigurations:(id)arg1 ;
+(id)configurationsFromSharableString:(id)arg1 ;
-(id)init;
-(NSDictionary *)archive;
-(id)initWithName:(id)arg1 settings:(id)arg2 ;
-(id)initWithName:(id)arg1 settings:(id)arg2 archive:(id)arg3 ;
-(id)copyWithUpdatedSettingsValues;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithName:(id)arg1 ;
-(NSString *)name;
-(PXSettings *)settings;
-(id)initWithCoder:(id)arg1 ;
@end

