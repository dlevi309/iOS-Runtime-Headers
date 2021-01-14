/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@protocol PHMediaRequestLiveRenderingOptions <NSObject>
@property (nonatomic,copy,readonly) id progressHandler; 
@required
-(BOOL)isCurrentVersion;
-(BOOL)liveRenderVideoIfNeeded;
-(BOOL)liveRenderAndOnDemandRenderVideoConcurrently;
-(id)renderResultHandlerQueue;
-(BOOL)isNetworkAccessAllowed;
-(id)progressHandler;

@end

