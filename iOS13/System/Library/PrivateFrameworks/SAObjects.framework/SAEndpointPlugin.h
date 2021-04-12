/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAEndpoint.h>

@class NSString;

@interface SAEndpointPlugin : SAEndpoint

@property (nonatomic,copy) NSString * pluginPath; 
+(id)endpointPlugin;
+(id)endpointPluginWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)pluginPath;
-(id)encodedClassName;
-(void)setPluginPath:(NSString *)arg1 ;
@end

