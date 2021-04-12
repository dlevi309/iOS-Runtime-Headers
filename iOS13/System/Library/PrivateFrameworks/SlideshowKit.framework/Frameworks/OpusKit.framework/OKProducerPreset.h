/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id)localizedName;
-(id)uniqueIdentifier;
-(id)pluginIdentifier;
-(id)family;
-(BOOL)isAvailable;
-(id)backgroundColor;
-(BOOL)isLocal;
-(BOOL)isDefault;
-(id)audioURLs;
-(id)guidelines;
-(BOOL)supportsSettingType:(unsigned long long)arg1 ;
-(id)initWithFamily:(id)arg1 name:(id)arg2 andDictionary:(id)arg3 ;
-(id)initWithFamily:(id)arg1 andPluginIdentifier:(id)arg2 ;
-(id)_settingKeyForType:(unsigned long long)arg1 ;
@end

