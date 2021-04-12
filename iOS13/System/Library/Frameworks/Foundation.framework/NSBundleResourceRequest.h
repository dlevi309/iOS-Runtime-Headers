/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <libobjc.A.dylib/NSProgressReporting.h>

@class NSSet, NSBundle, NSProgress, NSString;

@interface NSBundleResourceRequest : NSObject <NSProgressReporting> {

	NSSet* _tags;
	double _priority;
	NSBundle* _bundle;
	NSProgress* _progress;
	long long _fetchState;

}

@property (assign) double loadingPriority; 
@property (copy,readonly) NSSet * tags; 
@property (readonly) NSBundle * bundle; 
@property (readonly) NSProgress * progress; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_connection;
+(void)_flushCacheForBundle:(id)arg1 ;
+(void)_setConnection:(id)arg1 ;
+(id)_assetPackBundleForBundle:(id)arg1 withAssetPackID:(id)arg2 ;
+(id)_manifestWithBundle:(id)arg1 error:(id*)arg2 ;
+(id)_extensionEndpoint;
+(id)_extensionEndpointForMainBundleOfHostApplication:(id)arg1 ;
+(void)_addExtensionEndpoint:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSProgress *)progress;
-(id)initWithTags:(id)arg1 bundle:(id)arg2 ;
-(void)endAccessingResources;
-(id)initWithTag:(id)arg1 ;
-(id)initWithTags:(id)arg1 ;
-(double)loadingPriority;
-(void)setLoadingPriority:(double)arg1 ;
-(NSSet *)tags;
-(NSBundle *)bundle;
-(void)beginAccessingResourcesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)conditionallyBeginAccessingResourcesWithCompletionHandler:(/*^block*/id)arg1 ;
@end

