/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)removeObjectsForKeys:(id)arg1 ;
-(NSMutableDictionary *)cache;
-(id)init;
-(void)setCache:(NSMutableDictionary *)arg1 ;
-(BOOL)removeObjectForKey:(id)arg1 ;
-(void)reload;
-(id)objectForKey:(id)arg1 ;
-(BOOL)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)populateCache;
-(void)raiseInvalidPropertyListObjectExceptionForObject:(id)arg1 ;
-(BOOL)saveCache;
@end

