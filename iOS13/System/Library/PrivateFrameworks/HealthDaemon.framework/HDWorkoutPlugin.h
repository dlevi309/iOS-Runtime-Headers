/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDPlugin.h>

@class NSString;

@interface HDWorkoutPlugin : NSObject <HDPlugin>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * pluginIdentifier; 
+(BOOL)shouldLoadPluginForDaemon:(id)arg1 ;
-(NSString *)pluginIdentifier;
-(id)extensionForHealthDaemon:(id)arg1 ;
-(id)extensionForProfile:(id)arg1 ;
@end

