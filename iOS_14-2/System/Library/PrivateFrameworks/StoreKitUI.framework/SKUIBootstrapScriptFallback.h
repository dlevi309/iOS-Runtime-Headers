/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFilename:(id)arg1 ;
-(long long)state;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
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
-(BOOL)canFallbackForError:(id)arg1 ;
-(id)retrieveScript:(id*)arg1 ;
-(void)scriptEvaluated:(id)arg1 ;
-(void)_runWhenBackgroundWorkFinished:(/*^block*/id)arg1 ;
-(BOOL)_setCacheAge:(id)arg1 error:(id*)arg2 ;
@end

