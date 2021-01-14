/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/TVImageLoader.h>

@class NSOperationQueue, NSString;

@interface _TVAppIconImageLoader : NSObject <TVImageLoader> {

	NSOperationQueue* _imageLoaderQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(id)URLForObject:(id)arg1 ;
-(id)imageKeyForObject:(id)arg1 ;
-(id)loadImageForObject:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 imageDirection:(long long)arg4 requestLoader:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)cancelLoad:(id)arg1 ;
-(id)loadImageForObject:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)loadImageForObject:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 imageDirection:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)_createApplicationIconForIdentifier:(id)arg1 ;
@end

