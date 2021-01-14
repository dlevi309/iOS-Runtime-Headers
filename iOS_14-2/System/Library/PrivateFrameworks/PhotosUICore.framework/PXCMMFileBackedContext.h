/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXCMMContext.h>

@class PXCMMFileBackedActionManager;

@interface PXCMMFileBackedContext : PXCMMContext {

	PXCMMFileBackedActionManager* _fileBackedActionManager;

}
+(id)fileBackedContextWithDirectoryURL:(id)arg1 activityType:(unsigned long long)arg2 title:(id)arg3 ;
-(id)actionManager;
-(id)initWithAssetsDataSourceManager:(id)arg1 mediaProvider:(id)arg2 activityType:(unsigned long long)arg3 ;
@end

