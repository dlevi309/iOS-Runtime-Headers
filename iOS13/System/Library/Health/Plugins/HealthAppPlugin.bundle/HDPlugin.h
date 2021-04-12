/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthAppPlugin.bundle/HealthAppPlugin
*/

@class NSString;


@protocol HDPlugin <NSObject>
@property (nonatomic,copy,readonly) NSString * pluginIdentifier; 
@optional
+(BOOL)shouldLoadPluginForDaemon:(id)arg1;

@required
-(NSString *)pluginIdentifier;
-(id)extensionForHealthDaemon:(id)arg1;
-(id)extensionForProfile:(id)arg1;

@end

