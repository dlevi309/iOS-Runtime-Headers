/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthAppPlugin.bundle/HealthAppPlugin
*/

#import <libobjc.A.dylib/HDPlugin.h>

@class NSString;

@interface HDHealthAppPlugin : NSObject <HDPlugin>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * pluginIdentifier; 
-(NSString *)pluginIdentifier;
-(id)extensionForHealthDaemon:(id)arg1 ;
-(id)extensionForProfile:(id)arg1 ;
@end

