/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DesktopServicesPriv.framework/DesktopServicesPriv
*/


#import <DesktopServicesPriv/DesktopServicesPriv-Structs.h>
@class NSString;

@interface DSNSSizerOutput : NSObject {

	unsigned _conflicts;
	long long _userVisibleItemCount;
	long long _fsItemCount;
	long long _logicalBytesTotal;
	long long _physicalBytesTotal;
	long long _mergeSourceNewerConflictsCount;
	long long _mergeSourceItemsNotInDestinationCount;
	long long _mergeDestinationNewerConflictsCount;
	long long _mergeDestinationNewerConflictsBytes;
	long long _mergeMatchedFilesCount;
	long long _mergeMatchedFilesBytes;
	long long _mergeDiffMetaDataFilesCount;
	long long _mergeDestinationItemsNotInSourceCount;
	long long _mergePhysicalDelta;
	NSString* _sourcePath;
	NSString* _destinationPath;
	long long _conflictPhysicalDelta;
	unsigned long long _maxFileSize;

}

@property (assign,nonatomic) long long userVisibleItemCount;                               //@synthesize userVisibleItemCount=_userVisibleItemCount - In the implementation block
@property (assign,nonatomic) long long fsItemCount;                                        //@synthesize fsItemCount=_fsItemCount - In the implementation block
@property (assign,nonatomic) long long logicalBytesTotal;                                  //@synthesize logicalBytesTotal=_logicalBytesTotal - In the implementation block
@property (assign,nonatomic) long long physicalBytesTotal;                                 //@synthesize physicalBytesTotal=_physicalBytesTotal - In the implementation block
@property (assign,nonatomic) long long mergeSourceNewerConflictsCount;                     //@synthesize mergeSourceNewerConflictsCount=_mergeSourceNewerConflictsCount - In the implementation block
@property (assign,nonatomic) long long mergeSourceItemsNotInDestinationCount;              //@synthesize mergeSourceItemsNotInDestinationCount=_mergeSourceItemsNotInDestinationCount - In the implementation block
@property (assign,nonatomic) long long mergeDestinationNewerConflictsCount;                //@synthesize mergeDestinationNewerConflictsCount=_mergeDestinationNewerConflictsCount - In the implementation block
@property (assign,nonatomic) long long mergeDestinationNewerConflictsBytes;                //@synthesize mergeDestinationNewerConflictsBytes=_mergeDestinationNewerConflictsBytes - In the implementation block
@property (assign,nonatomic) long long mergeMatchedFilesCount;                             //@synthesize mergeMatchedFilesCount=_mergeMatchedFilesCount - In the implementation block
@property (assign,nonatomic) long long mergeMatchedFilesBytes;                             //@synthesize mergeMatchedFilesBytes=_mergeMatchedFilesBytes - In the implementation block
@property (assign,nonatomic) long long mergeDiffMetaDataFilesCount;                        //@synthesize mergeDiffMetaDataFilesCount=_mergeDiffMetaDataFilesCount - In the implementation block
@property (assign,nonatomic) long long mergeDestinationItemsNotInSourceCount;              //@synthesize mergeDestinationItemsNotInSourceCount=_mergeDestinationItemsNotInSourceCount - In the implementation block
@property (assign,nonatomic) long long mergePhysicalDelta;                                 //@synthesize mergePhysicalDelta=_mergePhysicalDelta - In the implementation block
@property (nonatomic,retain) NSString * sourcePath;                                        //@synthesize sourcePath=_sourcePath - In the implementation block
@property (nonatomic,retain) NSString * destinationPath;                                   //@synthesize destinationPath=_destinationPath - In the implementation block
@property (assign,nonatomic) long long conflictPhysicalDelta;                              //@synthesize conflictPhysicalDelta=_conflictPhysicalDelta - In the implementation block
@property (assign,nonatomic) unsigned long long maxFileSize;                               //@synthesize maxFileSize=_maxFileSize - In the implementation block
@property (assign,nonatomic) unsigned conflicts;                                           //@synthesize conflicts=_conflicts - In the implementation block
-(unsigned long long)maxFileSize;
-(NSString *)destinationPath;
-(void)setConflicts:(unsigned)arg1 ;
-(void)setSourcePath:(NSString *)arg1 ;
-(void)setDestinationPath:(NSString *)arg1 ;
-(unsigned)conflicts;
-(void)setMaxFileSize:(unsigned long long)arg1 ;
-(NSString *)sourcePath;
-(id)initWithSizerOutput:(TSizerOutput*)arg1 ;
-(id)initWithSpaceNeeds:(DestinationSpaceNeeds)arg1 ;
-(long long)userVisibleItemCount;
-(void)setUserVisibleItemCount:(long long)arg1 ;
-(long long)fsItemCount;
-(void)setFsItemCount:(long long)arg1 ;
-(long long)logicalBytesTotal;
-(void)setLogicalBytesTotal:(long long)arg1 ;
-(long long)physicalBytesTotal;
-(void)setPhysicalBytesTotal:(long long)arg1 ;
-(long long)mergeSourceNewerConflictsCount;
-(void)setMergeSourceNewerConflictsCount:(long long)arg1 ;
-(long long)mergeSourceItemsNotInDestinationCount;
-(void)setMergeSourceItemsNotInDestinationCount:(long long)arg1 ;
-(long long)mergeDestinationNewerConflictsCount;
-(void)setMergeDestinationNewerConflictsCount:(long long)arg1 ;
-(long long)mergeDestinationNewerConflictsBytes;
-(void)setMergeDestinationNewerConflictsBytes:(long long)arg1 ;
-(long long)mergeMatchedFilesCount;
-(void)setMergeMatchedFilesCount:(long long)arg1 ;
-(long long)mergeMatchedFilesBytes;
-(void)setMergeMatchedFilesBytes:(long long)arg1 ;
-(long long)mergeDiffMetaDataFilesCount;
-(void)setMergeDiffMetaDataFilesCount:(long long)arg1 ;
-(long long)mergeDestinationItemsNotInSourceCount;
-(void)setMergeDestinationItemsNotInSourceCount:(long long)arg1 ;
-(long long)mergePhysicalDelta;
-(void)setMergePhysicalDelta:(long long)arg1 ;
-(long long)conflictPhysicalDelta;
-(void)setConflictPhysicalDelta:(long long)arg1 ;
@end
