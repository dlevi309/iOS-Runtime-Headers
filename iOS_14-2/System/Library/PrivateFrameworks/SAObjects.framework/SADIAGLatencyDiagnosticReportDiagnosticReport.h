/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSURL, NSString;

@interface SADIAGLatencyDiagnosticReportDiagnosticReport : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * latency; 
@property (nonatomic,copy) NSURL * uri; 
@property (nonatomic,copy) NSString * verb; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)latencyDiagnosticReportDiagnosticReport;
+(id)latencyDiagnosticReportDiagnosticReportWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSURL *)uri;
-(NSString *)verb;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setUri:(NSURL *)arg1 ;
-(void)setLatency:(NSNumber *)arg1 ;
-(void)setVerb:(NSString *)arg1 ;
-(NSNumber *)latency;
@end

