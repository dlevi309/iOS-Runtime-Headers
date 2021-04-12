/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@protocol VUIImageLoadingOperation;
@class NSOperation;

@interface VUIImageLoadContext : NSObject {

	NSOperation*<VUIImageLoadingOperation> _imageLoadOperation;
	unsigned long long _requestCount;

}

@property (nonatomic,retain) NSOperation*<VUIImageLoadingOperation> imageLoadOperation;              //@synthesize imageLoadOperation=_imageLoadOperation - In the implementation block
@property (assign,nonatomic) unsigned long long requestCount;                                        //@synthesize requestCount=_requestCount - In the implementation block
-(unsigned long long)requestCount;
-(void)setRequestCount:(unsigned long long)arg1 ;
-(NSOperation*<VUIImageLoadingOperation>)imageLoadOperation;
-(void)setImageLoadOperation:(NSOperation*<VUIImageLoadingOperation>)arg1 ;
@end

