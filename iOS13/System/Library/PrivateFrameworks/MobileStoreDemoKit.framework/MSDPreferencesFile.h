/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileStoreDemoKit.framework/MobileStoreDemoKit
*/


@class NSMutableDictionary;

@interface MSDPreferencesFile : NSObject {

	NSMutableDictionary* _cache;

}

@property (retain) NSMutableDictionary * cache;              //@synthesize cache=_cache - In the implementation block
+(id)sharedInstance;
+(id)preferencesFileUrl;
+(id)preferencesFilePath;
+(BOOL)preferencesFileExists;
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(BOOL)removeObjectForKey:(id)arg1 ;
-(BOOL)setObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)removeObjectsForKeys:(id)arg1 ;
-(void)setCache:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)cache;
-(void)populateCache;
-(void)raiseInvalidPropertyListObjectExceptionForObject:(id)arg1 ;
-(BOOL)saveCache;
@end

