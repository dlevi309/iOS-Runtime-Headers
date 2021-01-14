/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthAppPlugin.bundle/HealthAppPlugin
*/

#import <libobjc.A.dylib/HDPlugin.h>

@class NSString;

@interface HDHealthAppPlugin : NSObject <HDPlugin>

@property (nonatomic,copy,readonly) NSString * pluginIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)extensionForProfile:(id)arg1 ;
-(id)extensionForHealthDaemon:(id)arg1 ;
-(NSString *)pluginIdentifier;
@end

