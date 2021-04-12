/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
*/

@class NSString;


@protocol HDPlugin <NSObject>
@property (nonatomic,copy,readonly) NSString * pluginIdentifier; 
@optional
+(BOOL)shouldLoadPluginForDaemon:(id)arg1;

@required
-(id)extensionForProfile:(id)arg1;
-(id)extensionForHealthDaemon:(id)arg1;
-(NSString *)pluginIdentifier;

@end

