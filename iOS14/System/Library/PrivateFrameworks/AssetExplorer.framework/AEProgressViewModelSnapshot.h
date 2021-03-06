/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
*/


#import <AssetExplorer/AssetExplorer-Structs.h>
@class NSDictionary, PXIndexPathSet;

@interface AEProgressViewModelSnapshot : NSObject {

	unsigned long long _correspondingDataSourceIdentifier;
	NSDictionary* __progressByIndexPath;
	PXIndexPathSet* __pathsWithProgress;

}

@property (nonatomic,readonly) NSDictionary * _progressByIndexPath;                               //@synthesize _progressByIndexPath=__progressByIndexPath - In the implementation block
@property (nonatomic,readonly) PXIndexPathSet * _pathsWithProgress;                               //@synthesize _pathsWithProgress=__pathsWithProgress - In the implementation block
@property (nonatomic,readonly) unsigned long long correspondingDataSourceIdentifier;              //@synthesize correspondingDataSourceIdentifier=_correspondingDataSourceIdentifier - In the implementation block
-(id)progressForIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)initWithProgressByIndexPath:(id)arg1 dataSourceIdenfitier:(unsigned long long)arg2 ;
-(BOOL)hasProgressForIndexPath:(PXSimpleIndexPath)arg1 ;
-(unsigned long long)correspondingDataSourceIdentifier;
-(NSDictionary *)_progressByIndexPath;
-(PXIndexPathSet *)_pathsWithProgress;
@end

