/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@interface PPPaths : NSObject
+(id)logDirectory;
+(id)topDirectory;
+(id)subdirectory:(id)arg1 ;
+(id)filename:(id)arg1 subdirectory:(id)arg2 ;
+(id)topDirectoryCreateIfNeeded:(BOOL)arg1 ;
+(id)subdirectory:(id)arg1 createIfNeeded:(BOOL)arg2 ;
+(id)filename:(id)arg1 subdirectory:(id)arg2 createIfNeeded:(BOOL)arg3 ;
+(id)logSubdirectory:(id)arg1 ;
+(id)filename:(id)arg1 logSubdirectory:(id)arg2 ;
+(id)logDirectoryCreateIfNeeded:(BOOL)arg1 ;
+(id)logSubdirectory:(id)arg1 createIfNeeded:(BOOL)arg2 ;
+(id)filename:(id)arg1 logSubdirectory:(id)arg2 createIfNeeded:(BOOL)arg3 ;
@end

