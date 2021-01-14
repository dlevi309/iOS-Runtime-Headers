/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
*/


@class NSCache;

@interface STSPluginLoader : NSObject {

	NSCache* _pluginCache;

}

@property (nonatomic,retain) NSCache * pluginCache;              //@synthesize pluginCache=_pluginCache - In the implementation block
-(id)init;
-(NSCache *)pluginCache;
-(id)pluginWithName:(id)arg1 ;
-(void)setPluginCache:(NSCache *)arg1 ;
@end

