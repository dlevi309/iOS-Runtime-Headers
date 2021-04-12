/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKComplication.h>

@class NTKComplication, NSNumber, NSString;

@interface NTKGreenfieldPlaceholderComplication : NTKComplication {

	NTKComplication* _complication;
	NSNumber* _appStoreItemId;
	NSString* _appName;

}

@property (nonatomic,readonly) NTKComplication * complication;              //@synthesize complication=_complication - In the implementation block
@property (nonatomic,readonly) NSNumber * appStoreItemId;                   //@synthesize appStoreItemId=_appStoreItemId - In the implementation block
@property (nonatomic,readonly) NSString * appName;                          //@synthesize appName=_appName - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)placeholderWithComplication:(id)arg1 appStoreItemId:(id)arg2 appName:(id)arg3 ;
+(id)placeholderWithComplication:(id)arg1 ;
-(id)appIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)appName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NTKComplication *)complication;
-(NSNumber *)appStoreItemId;
-(id)_generateUniqueIdentifier;
-(void)_addKeysToJSONDictionary:(id)arg1 ;
-(id)_initWithComplicationType:(unsigned long long)arg1 JSONDictionary:(id)arg2 ;
-(id)localizedKeylineLabelText;
-(id)localizedDetailText;
-(id)localizedRichDetailText;
-(BOOL)supportsComplicationFamily:(long long)arg1 forDevice:(id)arg2 ;
-(id)localizedRichKeylineLabelText;
@end

