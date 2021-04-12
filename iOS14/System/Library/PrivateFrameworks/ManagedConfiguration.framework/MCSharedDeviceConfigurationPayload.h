/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)lockScreenFootnote;
-(NSString *)assetTagInformation;
-(NSDictionary *)configuration;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
@end

