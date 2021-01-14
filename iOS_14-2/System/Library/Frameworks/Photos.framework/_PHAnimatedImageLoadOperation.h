/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Foundation/NSOperation.h>

@class NSURL, PHAnimatedImage;

@interface _PHAnimatedImageLoadOperation : NSOperation {

	long long _cacheStrategy;
	BOOL _useSharedImageDecoding;
	NSURL* _animatedImageURL;
	PHAnimatedImage* _animatedImage;

}

@property (retain) PHAnimatedImage * animatedImage;              //@synthesize animatedImage=_animatedImage - In the implementation block
+(id)_removeOperation:(long long)arg1 ;
+(void)_registerOperation:(id)arg1 forRequestID:(long long)arg2 ;
+(id)_animatedImageSharedLoadingQueue;
+(id)_inq_animatedImageLoadingOperations;
+(id)_requestIsolationQueue;
+(long long)nextRequestID;
-(PHAnimatedImage *)animatedImage;
-(void)main;
-(void)setAnimatedImage:(PHAnimatedImage *)arg1 ;
-(id)initWithURL:(id)arg1 cachingStrategy:(long long)arg2 useSharedDecoding:(BOOL)arg3 ;
@end

