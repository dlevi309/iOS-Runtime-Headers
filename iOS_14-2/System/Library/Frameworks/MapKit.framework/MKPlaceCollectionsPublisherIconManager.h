/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/NSCacheDelegate.h>
#import <libobjc.A.dylib/MKPublisherIconProvider.h>

@protocol OS_dispatch_queue;
@class NSObject, NSCache, NSString;

@interface MKPlaceCollectionsPublisherIconManager : NSObject <NSCacheDelegate, MKPublisherIconProvider> {

	NSObject*<OS_dispatch_queue> _publisherLogoImageQueue;
	NSCache* _publisherIconCache;

}

@property (nonatomic,retain) NSCache * publisherIconCache;              //@synthesize publisherIconCache=_publisherIconCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)cache:(id)arg1 willEvictObject:(id)arg2 ;
-(NSCache *)publisherIconCache;
-(void)setPublisherIconCache:(NSCache *)arg1 ;
-(void)iconForPublisherNamed:(id)arg1 usingId:(unsigned)arg2 contentScale:(double)arg3 onCompletion:(/*^block*/id)arg4 ;
@end

