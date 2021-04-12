/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/PHMediaRequestLiveRenderingOptions.h>
#import <libobjc.A.dylib/PHMediaRequestThreadingOptions.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface PHVideoRequestOptions : NSObject <PHMediaRequestLiveRenderingOptions, PHMediaRequestThreadingOptions> {

	BOOL _networkAccessAllowed;
	BOOL _streamingAllowed;
	BOOL _videoComplementAllowed;
	BOOL _allowMediumHighQuality;
	BOOL _restrictToPlayableOnCurrentDevice;
	BOOL _liveRenderVideoIfNeeded;
	BOOL _liveRenderAndOnDemandRenderVideoConcurrently;
	long long _version;
	long long _deliveryMode;
	/*^block*/id _progressHandler;
	long long _streamingVideoIntent;
	long long _contentMode;
	NSObject*<OS_dispatch_queue> _resultHandlerQueue;
	CGSize _targetSize;

}

@property (nonatomic,copy,readonly) id progressHandler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isStreamingAllowed,nonatomic) BOOL streamingAllowed;                            //@synthesize streamingAllowed=_streamingAllowed - In the implementation block
@property (assign,nonatomic) long long streamingVideoIntent;                                             //@synthesize streamingVideoIntent=_streamingVideoIntent - In the implementation block
@property (assign,getter=isVideoComplementAllowed,nonatomic) BOOL videoComplementAllowed;                //@synthesize videoComplementAllowed=_videoComplementAllowed - In the implementation block
@property (assign,getter=isMediumHighQualityAllowed,nonatomic) BOOL allowMediumHighQuality;              //@synthesize allowMediumHighQuality=_allowMediumHighQuality - In the implementation block
@property (assign,nonatomic) CGSize targetSize;                                                          //@synthesize targetSize=_targetSize - In the implementation block
@property (assign,nonatomic) long long contentMode;                                                      //@synthesize contentMode=_contentMode - In the implementation block
@property (assign,nonatomic) BOOL restrictToPlayableOnCurrentDevice;                                     //@synthesize restrictToPlayableOnCurrentDevice=_restrictToPlayableOnCurrentDevice - In the implementation block
@property (assign,nonatomic) BOOL liveRenderVideoIfNeeded;                                               //@synthesize liveRenderVideoIfNeeded=_liveRenderVideoIfNeeded - In the implementation block
@property (assign,nonatomic) BOOL liveRenderAndOnDemandRenderVideoConcurrently;                          //@synthesize liveRenderAndOnDemandRenderVideoConcurrently=_liveRenderAndOnDemandRenderVideoConcurrently - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> resultHandlerQueue;                            //@synthesize resultHandlerQueue=_resultHandlerQueue - In the implementation block
@property (assign,getter=isNetworkAccessAllowed,nonatomic) BOOL networkAccessAllowed;                    //@synthesize networkAccessAllowed=_networkAccessAllowed - In the implementation block
@property (assign,nonatomic) long long version;                                                          //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) long long deliveryMode;                                                     //@synthesize deliveryMode=_deliveryMode - In the implementation block
@property (nonatomic,copy) id progressHandler;                                                           //@synthesize progressHandler=_progressHandler - In the implementation block
-(CGSize)targetSize;
-(long long)contentMode;
-(void)setTargetSize:(CGSize)arg1 ;
-(void)setAllowMediumHighQuality:(BOOL)arg1 ;
-(void)setLiveRenderVideoIfNeeded:(BOOL)arg1 ;
-(void)setLiveRenderAndOnDemandRenderVideoConcurrently:(BOOL)arg1 ;
-(id)init;
-(void)setResultHandlerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)isSynchronous;
-(NSObject*<OS_dispatch_queue>)resultHandlerQueue;
-(BOOL)isCurrentVersion;
-(BOOL)liveRenderVideoIfNeeded;
-(BOOL)liveRenderAndOnDemandRenderVideoConcurrently;
-(id)renderResultHandlerQueue;
-(NSString *)description;
-(void)setProgressHandler:(id)arg1 ;
-(void)setNetworkAccessAllowed:(BOOL)arg1 ;
-(BOOL)restrictToPlayableOnCurrentDevice;
-(BOOL)isMediumHighQualityAllowed;
-(BOOL)isStreamingAllowed;
-(void)setStreamingAllowed:(BOOL)arg1 ;
-(long long)streamingVideoIntent;
-(void)setStreamingVideoIntent:(long long)arg1 ;
-(BOOL)isVideoComplementAllowed;
-(void)setVideoComplementAllowed:(BOOL)arg1 ;
-(void)setRestrictToPlayableOnCurrentDevice:(BOOL)arg1 ;
-(BOOL)isNetworkAccessAllowed;
-(void)setVersion:(long long)arg1 ;
-(id)progressHandler;
-(long long)deliveryMode;
-(void)setContentMode:(long long)arg1 ;
-(long long)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDeliveryMode:(long long)arg1 ;
@end

