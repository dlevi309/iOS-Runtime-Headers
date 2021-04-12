/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NTKComplication *)complication;
-(void)_addKeysToJSONDictionary:(id)arg1 ;
@end

