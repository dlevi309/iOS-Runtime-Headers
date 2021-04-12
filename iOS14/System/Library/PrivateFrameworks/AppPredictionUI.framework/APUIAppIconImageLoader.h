/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_loadImageWithBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_getImageForArtwork:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_blankIconImage;
-(void)registerImageLoader;
@end

