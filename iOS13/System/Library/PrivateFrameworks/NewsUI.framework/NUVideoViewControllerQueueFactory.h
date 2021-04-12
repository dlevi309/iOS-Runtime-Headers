/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUVideoViewControllerQueueFactory.h>

@protocol NUVideoViewControllerQueueFactory
@required
-(id)createQueueWithVideoItems:(id)arg1;

@end


@protocol NUVideoProviderFactory, NUVideoAdProviderFactory;
@class NUVideoViewControllerAdConfiguration;

@interface NUVideoViewControllerQueueFactory : NSObject <NUVideoViewControllerQueueFactory> {

	NUVideoViewControllerAdConfiguration* _adConfiguration;
	id<NUVideoProviderFactory> _videoProviderFactory;
	id<NUVideoAdProviderFactory> _videoAdProviderFactory;

}

@property (nonatomic,readonly) NUVideoViewControllerAdConfiguration * adConfiguration;              //@synthesize adConfiguration=_adConfiguration - In the implementation block
@property (nonatomic,readonly) id<NUVideoProviderFactory> videoProviderFactory;                     //@synthesize videoProviderFactory=_videoProviderFactory - In the implementation block
@property (nonatomic,readonly) id<NUVideoAdProviderFactory> videoAdProviderFactory;                 //@synthesize videoAdProviderFactory=_videoAdProviderFactory - In the implementation block
-(id)init;
-(id<NUVideoProviderFactory>)videoProviderFactory;
-(id<NUVideoAdProviderFactory>)videoAdProviderFactory;
-(NUVideoViewControllerAdConfiguration *)adConfiguration;
-(id)createQueueWithVideoItems:(id)arg1 ;
-(id)initWithAdConfiguration:(id)arg1 videoProviderFactory:(id)arg2 videoAdProviderFactory:(id)arg3 ;
@end

