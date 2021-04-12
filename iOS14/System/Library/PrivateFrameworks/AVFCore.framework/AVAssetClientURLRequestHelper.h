/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


#import <AVFCore/AVFCore-Structs.h>
@class AVWeakReference, AVAssetResourceLoader;

@interface AVAssetClientURLRequestHelper : NSObject {

	AVWeakReference* _weakReferenceToSelf;
	AVWeakReference* _weakReferenceToAsset;
	/*^block*/id _figAssetProvider;
	AVWeakReference* _weakReferenceToResourceLoader;

}

@property (nonatomic,copy) id figAssetProvider;                                          //@synthesize figAssetProvider=_figAssetProvider - In the implementation block
@property (assign,nonatomic,__weak) AVAssetResourceLoader * resourceLoader; 
@property (nonatomic,readonly) const OpaqueFigAssetRef figAsset; 
-(id)URLAsset;
-(const OpaqueFigAssetRef)figAsset;
-(id)figAssetProvider;
-(id)initWithAsset:(id)arg1 ;
-(void)setResourceLoader:(AVAssetResourceLoader *)arg1 ;
-(AVAssetResourceLoader *)resourceLoader;
-(void)setFigAssetProvider:(id)arg1 ;
-(void)dealloc;
@end

