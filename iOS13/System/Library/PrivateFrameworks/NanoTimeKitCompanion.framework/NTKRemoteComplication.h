/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKComplication.h>

@class NSString;

@interface NTKRemoteComplication : NTKComplication {

	NSString* _clientIdentifier;
	NSString* _appBundleIdentifier;

}

@property (nonatomic,readonly) NSString * clientIdentifier;                 //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * appBundleIdentifier;              //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_allComplicationConfigurationsWithType:(unsigned long long)arg1 ;
+(id)complicationWithClientIdentifier:(id)arg1 appBundleIdentifier:(id)arg2 ;
+(id)_remoteStocksComplication;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)appBundleIdentifier;
-(NSString *)clientIdentifier;
-(id)localizedRichDetailText;
-(id)localizedDetailText;
-(id)initWithComplicationType:(unsigned long long)arg1 ;
-(void)_addKeysToJSONDictionary:(id)arg1 ;
-(id)_initWithComplicationType:(unsigned long long)arg1 JSONDictionary:(id)arg2 ;
-(id)localizedKeylineLabelText;
-(id)customDailySnapshotKey;
-(id)localizedRichKeylineLabelText;
@end

