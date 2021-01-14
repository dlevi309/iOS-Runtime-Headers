/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
*/

#import <libobjc.A.dylib/MFDiagnosticsGenerator.h>

@class MFWeakSet, NSLock, NSString;

@interface MFDiagnostics : NSObject <MFDiagnosticsGenerator> {

	MFWeakSet* _diagnosticsGenerators;
	NSLock* _diagnosticLock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(id)init;
-(id)copyDiagnosticInformation;
-(void)removeDiagnosticsGenerator:(id)arg1 ;
-(void)addDiagnosticsGenerator:(id)arg1 ;
@end

