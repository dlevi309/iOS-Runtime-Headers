/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSString;

@interface NTKFaceConfiguration : NSObject <NSCopying, NSSecureCoding> {

	NSMutableDictionary* _complications;
	NSMutableDictionary* _editModeConfigurations;
	NSMutableDictionary* _metrics;
	BOOL _resourceDirectoryExists;
	NSString* _name;

}

@property (nonatomic,copy) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL resourceDirectoryExists;              //@synthesize resourceDirectoryExists=_resourceDirectoryExists - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)metricForKey:(id)arg1 ;
-(id)validationString;
-(id)optionForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(id)complicationForSlot:(id)arg1 ;
-(void)setComplication:(id)arg1 forSlot:(id)arg2 ;
-(void)setOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)setResourceDirectoryExists:(BOOL)arg1 ;
-(void)appendEditModesToDailySnapshotKey:(id)arg1 ;
-(void)setMetric:(id)arg1 forKey:(id)arg2 ;
-(void)incrementMetricForKey:(id)arg1 ;
-(BOOL)resourceDirectoryExists;
-(void)addConfigurationKeysToJSONDictionary:(id)arg1 ;
-(id)initWithJSONDictionary:(id)arg1 editModeMapping:(id)arg2 forDevice:(id)arg3 ;
-(void)setMetricsFromConfiguration:(id)arg1 ;
-(void)_enumerateEditModeConfigurationsWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateComplicationsWithBlock:(/*^block*/id)arg1 ;
-(id)_dateMetricsKeys;
-(void)_applyMetrics:(id)arg1 ;
-(void)_applyCustomizationDescription:(id)arg1 editModeMapping:(id)arg2 forDevice:(id)arg3 ;
-(void)_applyComplicationsDescription:(id)arg1 ;
@end

