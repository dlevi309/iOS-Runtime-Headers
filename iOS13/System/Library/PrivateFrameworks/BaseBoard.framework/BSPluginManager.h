/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)managerForBundle:(id)arg1 ;
+(id)mainManager;
-(id)description;
-(id)initWithBundle:(id)arg1 ;
-(NSBundle *)bundle;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)pluginBundleForName:(id)arg1 type:(id)arg2 ;
-(id)pluginBundleForIdentifier:(id)arg1 ;
-(id)pluginBundlesForType:(id)arg1 ;
-(NSString *)pluginDirectory;
-(NSArray *)pluginBundles;
@end

