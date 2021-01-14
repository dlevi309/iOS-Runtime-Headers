/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

