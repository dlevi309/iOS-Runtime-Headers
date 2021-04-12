/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)addDiagnosticsGenerator:(id)arg1 ;
-(void)removeDiagnosticsGenerator:(id)arg1 ;
@end

