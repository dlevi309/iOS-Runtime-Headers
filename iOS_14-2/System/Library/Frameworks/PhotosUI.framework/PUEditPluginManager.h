/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@class NSArray;

@interface PUEditPluginManager : NSObject {

	unsigned long long _mediaType;
	NSArray* __plugins;

}

@property (setter=_setPlugins:,nonatomic,copy) NSArray * _plugins;              //@synthesize _plugins=__plugins - In the implementation block
@property (readonly) unsigned long long mediaType;                              //@synthesize mediaType=_mediaType - In the implementation block
+(id)sharedManagerForMediaType:(unsigned long long)arg1 ;
-(NSArray *)_plugins;
-(unsigned long long)mediaType;
-(BOOL)hasPlugins;
-(void)_setPlugins:(id)arg1 ;
-(id)pluginActivities;
-(id)_initWithMediaType:(unsigned long long)arg1 ;
-(id)_allowedPluginTypes;
-(void)rediscoverAvailablePlugins;
-(void)_discoveredAvailableExtensions:(id)arg1 ;
@end

