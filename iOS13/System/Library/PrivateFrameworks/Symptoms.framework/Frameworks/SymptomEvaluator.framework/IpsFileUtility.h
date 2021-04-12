/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@interface IpsFileUtility : NSObject
+(id)_createIpsFileNameWithPrefix:(id)arg1 date:(id)arg2 inDirectory:(id)arg3 ;
+(id)_createDataForCrashReporterIpsHeaderWithBugType:(id)arg1 contentType:(id)arg2 date:(id)arg3 additionalFields:(id)arg4 ;
+(id)formattedDateForFilename:(id)arg1 ;
-(void)dealloc;
-(BOOL)createIpsFileWithBugType:(id)arg1 contentType:(id)arg2 additionalIpsHeaders:(id)arg3 ipsData:(id)arg4 inDirectory:(id)arg5 fileNamePrefix:(id)arg6 ;
-(BOOL)_checkDirectoryAndCreateIfNecessary:(id)arg1 ;
-(BOOL)_writeIpsFileWithBugType:(id)arg1 contentType:(id)arg2 additionalIpsHeaders:(id)arg3 ipsData:(id)arg4 inDirectory:(id)arg5 fileNamePrefix:(id)arg6 ;
-(BOOL)createIpsFileWithBugType:(id)arg1 contentType:(id)arg2 additionalIpsHeaders:(id)arg3 ipsContent:(id)arg4 inDirectory:(id)arg5 fileNamePrefix:(id)arg6 ;
@end

