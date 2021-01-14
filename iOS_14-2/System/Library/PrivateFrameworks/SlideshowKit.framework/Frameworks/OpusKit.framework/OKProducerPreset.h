/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/


@class NSString, NSDictionary, NSArray;

@interface OKProducerPreset : NSObject {

	NSString* _family;
	NSString* _name;
	NSDictionary* _presetDictionary;
	NSString* _localizedName;
	NSArray* _guidelines;
	NSArray* _audioURLs;

}
-(BOOL)isLocal;
-(id)localizedName;
-(BOOL)isAvailable;
-(id)init;
-(id)guidelines;
-(BOOL)supportsSettingType:(unsigned long long)arg1 ;
-(id)uniqueIdentifier;
-(id)audioURLs;
-(id)backgroundColor;
-(id)family;
-(BOOL)isDefault;
-(id)pluginIdentifier;
-(void)dealloc;
-(id)initWithFamily:(id)arg1 name:(id)arg2 andDictionary:(id)arg3 ;
-(id)initWithFamily:(id)arg1 andPluginIdentifier:(id)arg2 ;
-(id)_settingKeyForType:(unsigned long long)arg1 ;
@end

