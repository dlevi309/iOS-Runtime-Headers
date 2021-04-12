/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAEndpoint.h>

@class NSString;

@interface SAEndpointPlugin : SAEndpoint

@property (nonatomic,copy) NSString * pluginPath; 
+(id)endpointPlugin;
+(id)endpointPluginWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setPluginPath:(NSString *)arg1 ;
-(NSString *)pluginPath;
@end

