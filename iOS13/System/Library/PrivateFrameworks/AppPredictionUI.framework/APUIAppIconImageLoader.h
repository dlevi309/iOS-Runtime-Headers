/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI
*/

#import <libobjc.A.dylib/SFResourceLoader.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSString;

@interface APUIAppIconImageLoader : NSObject <SFResourceLoader> {

	NSMutableDictionary* _cache;
	NSMutableDictionary* _completionHandlers;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(BOOL)loadImage:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)registerImageLoader;
-(void)_loadImageWithBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_getImageForArtwork:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_blankIconImage;
@end

