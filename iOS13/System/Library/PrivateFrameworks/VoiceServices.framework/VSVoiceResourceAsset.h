/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)key;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)pitch;
-(void)setPitch:(float)arg1 ;
-(NSArray *)languages;
-(void)setLanguages:(NSArray *)arg1 ;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(void)setRate:(float)arg1 ;
-(float)rate;
-(long long)defaultVoiceType;
-(long long)defaultVoiceGender;
-(id)defaultVoice;
-(long long)defaultVoiceFootprint;
-(void)setSearchPathURL:(NSURL *)arg1 ;
-(NSDictionary *)vocalizerConfig;
-(NSURL *)searchPathURL;
-(NSDictionary *)voiceConfig;
-(id)_defaultVoice;
-(NSDictionary *)resourceMimeTypes;
-(NSArray *)resourceList;
-(id)serverVoiceNameForGender:(long long)arg1 ;
-(id)defaultTypeString;
-(id)defaultFootprintString;
-(void)setVoiceConfig:(NSDictionary *)arg1 ;
-(void)setVocalizerConfig:(NSDictionary *)arg1 ;
-(void)setResourceList:(NSArray *)arg1 ;
-(void)setResourceMimeTypes:(NSDictionary *)arg1 ;
@end

