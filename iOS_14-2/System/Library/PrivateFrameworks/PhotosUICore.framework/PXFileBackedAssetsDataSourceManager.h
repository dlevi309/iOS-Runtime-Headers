/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXAssetsDataSourceManager.h>

@class NSMutableDictionary, NSDictionary;

@interface PXFileBackedAssetsDataSourceManager : PXAssetsDataSourceManager {

	NSMutableDictionary* _fileURLsBySection;

}

@property (nonatomic,readonly) NSDictionary * fileURLsBySection;              //@synthesize fileURLsBySection=_fileURLsBySection - In the implementation block
-(id)initWithFileURLsBySection:(id)arg1 ;
-(void)removeFileURLsAtIndexes:(id)arg1 inSection:(long long)arg2 ;
-(void)insertFileURL:(id)arg1 atIndex:(long long)arg2 inSection:(long long)arg3 ;
-(NSDictionary *)fileURLsBySection;
-(void)_createDataSource;
@end

