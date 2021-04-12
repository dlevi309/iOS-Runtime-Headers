/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXMovieProvider.h>

@class MiroMovie, NSSet;

@interface PXMiroMovieProvider : PXMovieProvider {

	MiroMovie* __miroMovie;

}

@property (setter=_setMiroMovie:,nonatomic,retain) MiroMovie * _miroMovie;              //@synthesize _miroMovie=__miroMovie - In the implementation block
@property (nonatomic,readonly) NSSet * defaultAssets; 
+(void)initialize;
+(void*)_loadMiroFrameworkIfNeeded;
+(void)preloadMiroFrameworkIfNeeded;
-(id)movieViewController;
-(BOOL)canPlayMovie;
-(id)diagnosticsItemProvider;
-(BOOL)ppt_runTest:(id)arg1 options:(id)arg2 ;
-(Class)_miroMovieClass;
-(MiroMovie *)_miroMovie;
-(NSSet *)defaultAssets;
-(id)miroMovie:(id)arg1 createAndNavigateToMemoryFromCollection:(id)arg2 ;
-(void)_navigateToMemory:(id)arg1 ;
-(void)_setMiroMovie:(id)arg1 ;
@end

