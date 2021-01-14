/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
*/

#import <TextToSpeech/TTSAssetBase.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSURL, NSDictionary;

@interface TTSVoiceResourceAsset : TTSAssetBase <NSSecureCoding> {

	NSArray* _languages;
	NSArray* _resourceList;
	NSURL* _searchPathURL;
	NSDictionary* _voiceConfig;

}

@property (nonatomic,copy) NSDictionary * voiceConfig;              //@synthesize voiceConfig=_voiceConfig - In the implementation block
@property (nonatomic,copy) NSArray * languages;                     //@synthesize languages=_languages - In the implementation block
@property (nonatomic,copy) NSArray * resourceList;                  //@synthesize resourceList=_resourceList - In the implementation block
@property (nonatomic,copy) NSURL * searchPathURL;                   //@synthesize searchPathURL=_searchPathURL - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)legacyPlatforms;
-(NSArray *)languages;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)resourceList;
-(id)description;
-(NSURL *)searchPathURL;
-(void)setSearchPathURL:(NSURL *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLanguages:(NSArray *)arg1 ;
-(NSDictionary *)voiceConfig;
-(id)defaultVoice;
-(id)defaultTypeString;
-(id)defaultFootprintString;
-(void)setVoiceConfig:(NSDictionary *)arg1 ;
-(void)setResourceList:(NSArray *)arg1 ;
-(void)syncWithConfigFile:(id)arg1 voiceType:(long long)arg2 ;
@end

