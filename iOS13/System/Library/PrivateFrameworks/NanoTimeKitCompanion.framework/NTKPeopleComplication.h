/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKComplication.h>

@class NSString;

@interface NTKPeopleComplication : NTKComplication {

	NSString* _contactID;
	NSString* _shortName;
	NSString* _fullName;
	NSString* _abbreviation;

}

@property (nonatomic,readonly) NSString * contactID;                 //@synthesize contactID=_contactID - In the implementation block
@property (nonatomic,readonly) NSString * shortName;                 //@synthesize shortName=_shortName - In the implementation block
@property (nonatomic,readonly) NSString * fullName;                  //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,readonly) NSString * abbreviation;              //@synthesize abbreviation=_abbreviation - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_allComplicationConfigurationsWithType:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)abbreviation;
-(NSString *)contactID;
-(NSString *)fullName;
-(NSString *)shortName;
-(id)localizedRichDetailText;
-(id)localizedDetailText;
-(void)_addKeysToJSONDictionary:(id)arg1 ;
-(id)_initWithComplicationType:(unsigned long long)arg1 JSONDictionary:(id)arg2 ;
-(id)localizedKeylineLabelText;
-(BOOL)appearsInDailySnapshotForFamily:(long long)arg1 ;
-(id)customDailySnapshotKey;
-(BOOL)snapshotContext:(id)arg1 isStaleRelativeToContext:(id)arg2 ;
-(id)localizedRichKeylineLabelText;
@end

