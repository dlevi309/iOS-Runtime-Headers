/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <ClockComplications/CLKCComplication.h>
#import <libobjc.A.dylib/NTKComplicationItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTKComplication : CLKCComplication <NTKComplicationItem, NSSecureCoding, NSCopying> {

	NSString* _uniqueIdentifier;
	NSString* _appIdentifier;
	unsigned long long _complicationType;

}

@property (nonatomic,readonly) NSString * ntk_identifier; 
@property (nonatomic,readonly) NSString * ntk_sectionIdentifier; 
@property (nonatomic,readonly) unsigned long long ntk_itemType; 
@property (nonatomic,readonly) NSString * ntk_contactIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * uniqueIdentifier;                          //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * appIdentifier;                    //@synthesize appIdentifier=_appIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long complicationType;              //@synthesize complicationType=_complicationType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)anyComplicationOfType:(unsigned long long)arg1 ;
+(id)_allComplicationConfigurationsWithType:(unsigned long long)arg1 ;
+(id)allComplicationsOfType:(unsigned long long)arg1 ;
+(id)nullComplication;
+(Class)_complicationClassForType:(unsigned long long)arg1 ;
+(id)complicationWithJSONObjectRepresentation:(id)arg1 ;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(NSString *)appIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)uniqueIdentifier;
-(NSString *)description;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)complicationType;
-(id)localizedSectionHeaderName;
-(NSString *)ntk_sectionIdentifier;
-(NSString *)ntk_identifier;
-(NSString *)ntk_contactIdentifier;
-(id)ntk_localizedNameWithOptions:(unsigned long long)arg1 forRichComplicationSlot:(BOOL)arg2 ;
-(unsigned long long)ntk_itemType;
-(id)initWithComplicationType:(unsigned long long)arg1 ;
-(void)_addKeysToJSONDictionary:(id)arg1 ;
-(id)_initWithComplicationType:(unsigned long long)arg1 JSONDictionary:(id)arg2 ;
-(id)localizedKeylineLabelText;
-(id)localizedDetailText;
-(BOOL)appearsInDailySnapshotForFamily:(long long)arg1 ;
-(id)customDailySnapshotKeyForFamily:(long long)arg1 device:(id)arg2 ;
-(BOOL)snapshotContext:(id)arg1 isStaleRelativeToContext:(id)arg2 ;
-(id)localizedRichDetailText;
-(id)JSONObjectRepresentation;
-(void)handleAddedFromFaceSharing;
-(BOOL)supportsComplicationFamily:(long long)arg1 forDevice:(id)arg2 ;
-(id)_generateAppIdentifier;
-(void)_handleAddedFromFaceSharing;
-(id)localizedRichKeylineLabelText;
-(void)_setComplicationType:(unsigned long long)arg1 ;
@end

