/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <libobjc.A.dylib/IKAppScriptFallbackHandler.h>

@protocol OS_dispatch_queue;
@class NSURL, NSString, NSObject;

@interface SKUIBootstrapScriptFallback : NSObject <IKAppScriptFallbackHandler> {

	NSURL* _cacheFolder;
	NSString* _cacheFilename;
	double _maximumAge;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy,readonly) NSURL * cachedFileLocation; 
@property (nonatomic,readonly) long long _unsynchronizedState; 
@property (nonatomic,readonly) NSURL * cacheFolder;                             //@synthesize cacheFolder=_cacheFolder - In the implementation block
@property (nonatomic,copy,readonly) NSString * cacheFilename;                   //@synthesize cacheFilename=_cacheFilename - In the implementation block
@property (assign) double maximumAge;                                           //@synthesize maximumAge=_maximumAge - In the implementation block
@property (readonly) long long state; 
@property (readonly) BOOL isBagAvailable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cacheFilenameForStoreFrontIdentifier:(id)arg1 ;
+(id)defaultCacheFolder;
-(id)init;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(long long)state;
-(BOOL)canFallbackForError:(id)arg1 ;
-(id)retrieveScript:(id*)arg1 ;
-(void)scriptEvaluated:(id)arg1 ;
-(id)initWithFilename:(id)arg1 ;
-(void)setMaximumAge:(double)arg1 ;
-(void)_createCacheDirectoriesIfNeeded;
-(id)initWithCacheFolder:(id)arg1 filename:(id)arg2 ;
-(long long)_unsynchronizedState;
-(NSURL *)cacheFolder;
-(NSString *)cacheFilename;
-(BOOL)isBagAvailable;
-(NSURL *)cachedFileLocation;
-(void)_logError:(id)arg1 forOperation:(id)arg2 ;
-(double)maximumAge;
-(void)_runWhenBackgroundWorkFinished:(/*^block*/id)arg1 ;
-(BOOL)_setCacheAge:(id)arg1 error:(id*)arg2 ;
@end

