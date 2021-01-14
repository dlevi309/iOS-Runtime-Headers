/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSArray;

@interface PLVideoPlaybackResourceChoiceOptimizer : NSObject {

	NSArray* _videoResources;
	NSArray* _playableVideos;
	BOOL _masterVideoIsPresent;
	BOOL _masterVideoIsPlayable;

}

@property (nonatomic,readonly) NSArray * preferredVideoResources; 
-(id)initWithVideoResources:(id)arg1 ;
-(NSArray *)preferredVideoResources;
@end

