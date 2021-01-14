/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/NSCacheDelegate.h>

@class NSMapTable, NSString;

@interface PHSafeNSCacheDelegateReflector : NSObject <NSCacheDelegate> {

	os_unfair_lock_s _lock;
	NSMapTable* _delegegatesByCache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)removeDelegateForCache:(id)arg1 ;
+(void)setDelegate:(id)arg1 forCache:(id)arg2 ;
-(id)init;
-(void)cache:(id)arg1 willEvictObject:(id)arg2 ;
-(void)removeDelegateForCache:(id)arg1 ;
-(void)setDelegate:(id)arg1 forCache:(id)arg2 ;
@end

