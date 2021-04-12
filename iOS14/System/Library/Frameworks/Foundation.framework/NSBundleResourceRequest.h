/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)_extensionEndpointForMainBundleOfHostApplication:(id)arg1 ;
+(id)_assetPackBundleForBundle:(id)arg1 withAssetPackID:(id)arg2 ;
+(id)_manifestWithBundle:(id)arg1 error:(id*)arg2 ;
+(void)_flushCacheForBundle:(id)arg1 ;
+(void)_addExtensionEndpoint:(id)arg1 ;
+(id)_extensionEndpoint;
+(void)_setConnection:(id)arg1 ;
+(id)_connection;
-(NSBundle *)bundle;
-(NSSet *)tags;
-(void)conditionallyBeginAccessingResourcesWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSProgress *)progress;
-(id)init;
-(void)beginAccessingResourcesWithCompletionHandler:(/*^block*/id)arg1 ;
-(double)loadingPriority;
-(id)initWithTags:(id)arg1 ;
-(void)setLoadingPriority:(double)arg1 ;
-(id)initWithTag:(id)arg1 ;
-(id)initWithTags:(id)arg1 bundle:(id)arg2 ;
-(void)endAccessingResources;
-(void)dealloc;
@end

