/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


@class NSBundle, NSString, NSArray;

@interface BSPluginManager : NSObject {

	NSBundle* _bundle;
	NSString* _pluginDirectory;
	NSArray* _pluginBundles;

}

@property (nonatomic,readonly) NSBundle * bundle;                            //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,copy,readonly) NSString * pluginDirectory;              //@synthesize pluginDirectory=_pluginDirectory - In the implementation block
@property (nonatomic,copy,readonly) NSArray * pluginBundles;                 //@synthesize pluginBundles=_pluginBundles - In the implementation block
+(id)mainManager;
-(NSBundle *)bundle;
-(NSArray *)pluginBundles;
-(id)pluginBundleForIdentifier:(id)arg1 ;
-(id)pluginBundleForName:(id)arg1 type:(id)arg2 ;
-(id)description;
-(id)pluginBundlesForType:(id)arg1 ;
-(NSString *)pluginDirectory;
@end

