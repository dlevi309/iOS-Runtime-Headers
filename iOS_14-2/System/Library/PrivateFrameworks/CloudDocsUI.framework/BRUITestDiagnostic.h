/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

