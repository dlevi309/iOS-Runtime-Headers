/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@interface CAMTimelapseDiskUtilities : NSObject
+(BOOL)writeSecondaryStateToDisk:(id)arg1 forTimelapseUUID:(id)arg2 ;
+(BOOL)hasPendingWork;
+(id)directoryPathForTimelapseUUID:(id)arg1 ;
+(id)fileNameForImageFrameIndex:(long long)arg1 ;
+(BOOL)writeStateToDisk:(id)arg1 createDirectoryIfNeeded:(BOOL)arg2 ;
+(id)fileNameForImageVISIndex:(long long)arg1 ;
+(id)stateFileName;
+(id)dummyFilePathForTimelapseUUID:(id)arg1 ;
+(id)timelapseDirectoryPath;
+(id)timelapseDirectoryPathCreateIfNeeded:(BOOL)arg1 ;
+(id)readSortedStatesFromDiskMergeSecondaryState:(BOOL)arg1 ;
+(long long)frameIndexFromImageFileName:(id)arg1 ;
+(BOOL)reserveDummyFileForTimelapseUUID:(id)arg1 width:(long long)arg2 height:(long long)arg3 useHEVC:(BOOL)arg4 ;
+(id)readSecondaryStateForTimelapseUUID:(id)arg1 ;
+(id)updateSecondaryStateForTimelapseUUID:(id)arg1 withStopReasons:(long long)arg2 stopTime:(id)arg3 ;
+(BOOL)removeDummyFileForTimelapseUUID:(id)arg1 ;
+(id)secondaryStateFilePathForTimelapseUUID:(id)arg1 ;
+(id)stateFilePathForTimelapseUUID:(id)arg1 ;
+(id)updateSecondaryStateForMovieWriteAttemptForTimelapseUUID:(id)arg1 ;
+(id)readFrameFilePathsForTimelapseUUID:(id)arg1 ;
+(id)sortedArrayFromFilePathDictionary:(id)arg1 reverse:(BOOL)arg2 ;
+(id)timelapseUUIDsOnDisk;
+(id)updateSecondaryStateForTimelapseUUID:(id)arg1 forStateReadSuccessfully:(BOOL)arg2 ;
+(id)dummyFileName;
+(id)readStateForTimelapseUUID:(id)arg1 mergeSecondaryState:(BOOL)arg2 ;
+(id)secondaryStateFileName;
@end

