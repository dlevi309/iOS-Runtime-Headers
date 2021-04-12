/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSString, NSDictionary;

@interface MCSharedDeviceConfigurationPayload : MCPayload {

	NSString* _lockScreenFootnote;
	NSString* _assetTagInformation;

}

@property (nonatomic,readonly) NSString * lockScreenFootnote;               //@synthesize lockScreenFootnote=_lockScreenFootnote - In the implementation block
@property (nonatomic,readonly) NSString * assetTagInformation;              //@synthesize assetTagInformation=_assetTagInformation - In the implementation block
@property (nonatomic,readonly) NSDictionary * configuration; 
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(NSDictionary *)configuration;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(NSString *)lockScreenFootnote;
-(NSString *)assetTagInformation;
@end

