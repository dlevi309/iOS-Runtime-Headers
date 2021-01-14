/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSURL *)uri;
-(NSString *)verb;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setUri:(NSURL *)arg1 ;
-(void)setVerb:(NSString *)arg1 ;
@end

