/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKComplication.h>

@class NTKComplication;

@interface NTKComplicationTombstone : NTKComplication {

	NTKComplication* _complication;

}

@property (nonatomic,readonly) NTKComplication * complication;              //@synthesize complication=_complication - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)tombstoneWithComplication:(id)arg1 ;
-(id)appIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NTKComplication *)complication;
-(id)_generateUniqueIdentifier;
-(void)_addKeysToJSONDictionary:(id)arg1 ;
-(BOOL)supportsComplicationFamily:(long long)arg1 forDevice:(id)arg2 ;
@end

