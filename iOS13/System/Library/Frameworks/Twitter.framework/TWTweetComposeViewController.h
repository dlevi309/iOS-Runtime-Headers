/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Twitter.framework/Twitter
*/

#import <UIKitCore/UIViewController.h>

@interface TWTweetComposeViewController : UIViewController

@property (nonatomic,copy) id completionHandler; 
+(BOOL)canSendTweet;
-(id)init;
-(BOOL)addImage:(id)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(BOOL)addURL:(id)arg1 ;
-(BOOL)setInitialText:(id)arg1 ;
-(BOOL)removeAllImages;
-(BOOL)removeAllURLs;
-(/*^block*/id)addDownSampledImageDataByProxyWithPreviewImage:(id)arg1 ;
-(void)setLongitude:(double)arg1 latitude:(double)arg2 name:(id)arg3 ;
-(/*^block*/id)addURLWithProxyPreviewImage:(id)arg1 ;
@end

