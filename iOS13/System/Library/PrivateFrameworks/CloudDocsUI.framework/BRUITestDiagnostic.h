/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
*/


@class NSString, NSMutableDictionary;

@interface BRUITestDiagnostic : NSObject {

	NSString* _outputDirectoryPath;
	NSMutableDictionary* _diagnosticDataBySectionName;

}
-(BOOL)writeToDiskWithError:(id*)arg1 ;
-(void)addDiagnosticData:(id)arg1 forFilename:(id)arg2 sectionName:(id)arg3 ;
-(id)initWithOutputDirectoryPath:(id)arg1 ;
-(void)addDiagnosticData:(id)arg1 forFilename:(id)arg2 ;
@end

