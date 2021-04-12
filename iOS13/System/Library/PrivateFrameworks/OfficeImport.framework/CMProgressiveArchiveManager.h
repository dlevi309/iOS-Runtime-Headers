/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMStylingArchiveManager.h>

@class NSMutableDictionary, NSDate, NSMutableString;

@interface CMProgressiveArchiveManager : CMStylingArchiveManager {

	const void* mClient;
	SCD_Struct_CM14* mCallBacks;
	NSMutableDictionary* mDataCache;
	BOOL mMainDataInited;
	NSDate* mStartDate;
	NSDate* mLastCommitDate;
	NSMutableString* mHtmlLogString;

}
-(BOOL)isCancelled;
-(void)pushText:(id)arg1 toPath:(id)arg2 ;
-(void)pushCssToPath:(id)arg1 ;
-(void)commitDataAtPath:(id)arg1 ;
-(void)closeResourceAtPath:(id)arg1 ;
-(id)copyResourceWithName:(id)arg1 type:(int)arg2 ;
-(void)pushData:(id)arg1 toPath:(id)arg2 ;
-(BOOL)isProgressive;
-(id)initWithClient:(const void*)arg1 andCallBacks:(SCD_Struct_CM14*)arg2 ;
@end

