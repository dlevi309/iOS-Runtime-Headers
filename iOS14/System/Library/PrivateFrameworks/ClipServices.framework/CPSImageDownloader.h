/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface CPSImageDownloader : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _requests;

}
-(id)init;
-(void)_downloadImageWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)downloadImageWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

