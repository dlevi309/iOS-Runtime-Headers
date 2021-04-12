/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
*/

#import <SymptomAnalytics/ObjectAnalytics.h>

@interface DiagnosticCaseStorageAnalytics : ObjectAnalytics
-(id)initWithWorkspace:(id)arg1 withCache:(BOOL)arg2 ;
-(id)init;
-(id)diagnosticCaseStorageWithIdentifier:(id)arg1 ;
-(id)diagnosticCaseDictionaryKeys;
-(id)diagnosticCaseStorageDictionaryForIdentifier:(id)arg1 properties:(id)arg2 ;
-(id)diagnosticCaseStorageWithId:(id)arg1 ;
-(id)historicalDiagnosticCaseStorageFromIdentifier:(id)arg1 count:(unsigned long long)arg2 ;
-(id)historicalDiagnosticCaseStorageDictionaryFromIdentifier:(id)arg1 withEvents:(BOOL)arg2 count:(unsigned long long)arg3 ;
-(id)allDiagnosticCasesStorage;
-(id)allDiagnosticCasesStorageDictionariesWithProperties:(id)arg1 ;
-(long long)removeAllDiagnosticCaseStorages;
@end

