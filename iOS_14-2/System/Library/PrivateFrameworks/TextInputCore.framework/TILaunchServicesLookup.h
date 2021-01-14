/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <libobjc.A.dylib/TIKeyboardActivityObserving.h>

@class NSArray, NSDate, NSString;

@interface TILaunchServicesLookup : NSObject <TIKeyboardActivityObserving> {

	NSArray* _cache;
	NSDate* _lastCacheUpdate;

}

@property (nonatomic,retain) NSArray * cache;                       //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) NSDate * lastCacheUpdate;              //@synthesize lastCacheUpdate=_lastCacheUpdate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)enumerateInstalledApplicationNames:(/*^block*/id)arg1 ;
+(id)sharedInstance;
+(id)lookupAppNames;
+(id)genreIDsForApplicationIdentifier:(id)arg1 ;
+(void)disableForTesting:(BOOL)arg1 ;
-(void)resetCache;
-(NSArray *)cache;
-(id)init;
-(void)setCache:(NSArray *)arg1 ;
-(void)keyboardActivityDidTransition:(id)arg1 ;
-(void)enumerateAppNames:(/*^block*/id)arg1 ;
-(id)tryCache;
-(void)cacheNames:(id)arg1 ;
-(NSDate *)lastCacheUpdate;
-(void)setLastCacheUpdate:(NSDate *)arg1 ;
-(void)dealloc;
-(void)handleMemoryPressureLevel:(unsigned long long)arg1 excessMemoryInBytes:(unsigned long long)arg2 ;
-(id)appNames;
@end

