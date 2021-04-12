/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
*/

#import <SymptomAnalytics/ObjectAnalytics.h>

@interface DiagnosticCaseSummaryAnalytics : ObjectAnalytics
+(id)listCaseSummaryProperties;
+(void)extractPbAttachmentsFromString:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)listSummaryItemFromCaseSummaryDictionary:(id)arg1 ;
+(id)pbRequestForCases:(id)arg1 ;
+(id)stringRepresentationOfAttachmentsWithSize:(id)arg1 ;
-(id)initWithWorkspace:(id)arg1 withCache:(BOOL)arg2 ;
-(id)init;
-(id)diagnosticCaseSummaryDictionaryForIdentifier:(id)arg1 properties:(id)arg2 ;
-(void)insertEntityForDiagnosticCase:(id)arg1 ;
-(void)updateSubmittedCases:(id)arg1 ;
-(long long)removeDiagnosticCaseSummariesWithState:(short)arg1 olderThan:(unsigned long long)arg2 ;
-(long long)removeAllDiagnosticCaseSummaries;
-(id)fetchCaseSummariesWithIdentifiers:(id)arg1 ;
-(id)fetchCaseSummariesOfType:(id)arg1 fromIdentifier:(id)arg2 count:(unsigned long long)arg3 ;
@end

