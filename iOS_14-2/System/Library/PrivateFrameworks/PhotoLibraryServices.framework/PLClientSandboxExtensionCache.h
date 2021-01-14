/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSMutableOrderedSet;

@interface PLClientSandboxExtensionCache : NSObject {

	os_unfair_lock_s _lock;
	unsigned long long _cacheLimit;
	NSMutableOrderedSet* _sandboxExtensionURLs;

}

@property (nonatomic,retain) NSMutableOrderedSet * sandboxExtensionURLs;              //@synthesize sandboxExtensionURLs=_sandboxExtensionURLs - In the implementation block
@property (nonatomic,readonly) unsigned long long cacheLimit;                         //@synthesize cacheLimit=_cacheLimit - In the implementation block
-(unsigned long long)cacheLimit;
-(void)insertSandboxedURL:(id)arg1 ;
-(BOOL)containsPath:(id)arg1 ;
-(BOOL)containsURL:(id)arg1 ;
-(NSMutableOrderedSet *)sandboxExtensionURLs;
-(void)setSandboxExtensionURLs:(NSMutableOrderedSet *)arg1 ;
-(id)initWithCacheLimit:(unsigned long long)arg1 ;
@end

