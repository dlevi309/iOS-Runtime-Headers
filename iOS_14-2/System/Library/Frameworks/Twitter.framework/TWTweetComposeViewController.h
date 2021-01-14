/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Twitter.framework/Twitter
*/

#import <UIKitCore/UIViewController.h>

@interface TWTweetComposeViewController : UIViewController

@property (nonatomic,copy) id completionHandler; 
+(BOOL)canSendTweet;
-(id)init;
-(void)setCompletionHandler:(id)arg1 ;
-(BOOL)setInitialText:(id)arg1 ;
-(id)completionHandler;
-(BOOL)addURL:(id)arg1 ;
-(BOOL)addImage:(id)arg1 ;
-(BOOL)removeAllImages;
-(BOOL)removeAllURLs;
-(/*^block*/id)addDownSampledImageDataByProxyWithPreviewImage:(id)arg1 ;
-(void)setLongitude:(double)arg1 latitude:(double)arg2 name:(id)arg3 ;
-(/*^block*/id)addURLWithProxyPreviewImage:(id)arg1 ;
@end

