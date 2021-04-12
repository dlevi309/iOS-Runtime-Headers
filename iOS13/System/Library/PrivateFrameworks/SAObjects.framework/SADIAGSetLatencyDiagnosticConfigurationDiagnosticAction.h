/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSURL, NSString;

@interface SADIAGSetLatencyDiagnosticConfigurationDiagnosticAction : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSURL * uri; 
@property (nonatomic,copy) NSString * verb; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)setLatencyDiagnosticConfigurationDiagnosticAction;
+(id)setLatencyDiagnosticConfigurationDiagnosticActionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)verb;
-(NSURL *)uri;
-(void)setUri:(NSURL *)arg1 ;
-(void)setVerb:(NSString *)arg1 ;
-(id)encodedClassName;
@end

