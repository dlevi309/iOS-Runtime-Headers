/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
*/

#import <VoiceServices/VSAssetBase.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSURL, NSDictionary;

@interface VSVoiceResourceAsset : VSAssetBase <NSSecureCoding> {

	float _rate;
	float _pitch;
	float _volume;
	NSArray* _languages;
	NSURL* _searchPathURL;
	NSDictionary* _voiceConfig;
	NSDictionary* _vocalizerConfig;
	NSArray* _resourceList;
	NSDictionary* _resourceMimeTypes;

}

@property (nonatomic,copy) NSDictionary * voiceConfig;                    //@synthesize voiceConfig=_voiceConfig - In the implementation block
@property (assign,nonatomic) float rate;                                  //@synthesize rate=_rate - In the implementation block
@property (assign,nonatomic) float pitch;                                 //@synthesize pitch=_pitch - In the implementation block
@property (assign,nonatomic) float volume;                                //@synthesize volume=_volume - In the implementation block
@property (nonatomic,retain) NSDictionary * vocalizerConfig;              //@synthesize vocalizerConfig=_vocalizerConfig - In the implementation block
@property (nonatomic,copy) NSArray * languages;                           //@synthesize languages=_languages - In the implementation block
@property (nonatomic,copy) NSArray * resourceList;                        //@synthesize resourceList=_resourceList - In the implementation block
@property (nonatomic,copy) NSDictionary * resourceMimeTypes;              //@synthesize resourceMimeTypes=_resourceMimeTypes - In the implementation block
@property (nonatomic,copy) NSURL * searchPathURL;                         //@synthesize searchPathURL=_searchPathURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(float)pitch;
-(void)setVolume:(float)arg1 ;
-(NSArray *)languages;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setRate:(float)arg1 ;
-(NSArray *)resourceList;
-(id)description;
-(float)rate;
-(NSURL *)searchPathURL;
-(long long)defaultVoiceFootprint;
-(void)setSearchPathURL:(NSURL *)arg1 ;
-(id)key;
-(id)initWithCoder:(id)arg1 ;
-(void)setLanguages:(NSArray *)arg1 ;
-(void)setPitch:(float)arg1 ;
-(long long)defaultVoiceType;
-(long long)defaultVoiceGender;
-(float)volume;
-(NSDictionary *)vocalizerConfig;
-(NSDictionary *)voiceConfig;
-(id)_defaultVoice;
-(id)defaultVoice;
-(NSDictionary *)resourceMimeTypes;
-(id)serverVoiceNameForGender:(long long)arg1 ;
-(id)defaultTypeString;
-(id)defaultFootprintString;
-(void)setVoiceConfig:(NSDictionary *)arg1 ;
-(void)setVocalizerConfig:(NSDictionary *)arg1 ;
-(void)setResourceList:(NSArray *)arg1 ;
-(void)setResourceMimeTypes:(NSDictionary *)arg1 ;
@end

