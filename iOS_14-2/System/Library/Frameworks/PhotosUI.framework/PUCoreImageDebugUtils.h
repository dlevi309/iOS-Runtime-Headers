/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@interface PUCoreImageDebugUtils : NSObject
+(id)getDebugFiles;
+(void)setDebugModeEnabled:(BOOL)arg1 dumpInputs:(BOOL)arg2 dumpOutputs:(BOOL)arg3 dumpIntermediates:(BOOL)arg4 dumpTiming:(BOOL)arg5 ;
+(id)debugFilesDirectory;
+(void)deleteDebugDirectory;
+(id)listDebugFilesViewController;
+(id)shareSheetViewController;
@end

