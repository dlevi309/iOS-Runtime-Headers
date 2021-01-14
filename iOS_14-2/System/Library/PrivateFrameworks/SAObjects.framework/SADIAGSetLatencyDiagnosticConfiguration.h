/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SADIAGSetLatencyDiagnosticConfiguration : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * diagnosticActions; 
+(id)setLatencyDiagnosticConfiguration;
+(id)setLatencyDiagnosticConfigurationWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)diagnosticActions;
-(void)setDiagnosticActions:(NSArray *)arg1 ;
@end

