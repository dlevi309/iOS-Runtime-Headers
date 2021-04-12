/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@class NSOperationQueue, NSMutableDictionary;

@interface TSWPLoadableFonts : NSObject {

	NSOperationQueue* _fontQueue;
	NSMutableDictionary* _loadableFonts;
	NSMutableDictionary* _loadableFontFamilies;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedInstance;
+(id)_singletonAlloc;
-(id)init;
-(unsigned long long)retainCount;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)backgroundLoadAll;
-(void)loadFontWithName:(id)arg1 ;
-(void)loadAll;
-(void)p_loadFontWithInfo:(id)arg1 ;
-(void)pauseBackgroundLoading;
-(void)resumeBackgroundLoading;
-(void)loadFontsForGroup:(id)arg1 ;
-(void)registerFontName:(id)arg1 forPath:(id)arg2 forGroup:(id)arg3 isObfuscated:(BOOL)arg4 backgroundLoad:(BOOL)arg5 ;
-(void)unregisterFontsForGroup:(id)arg1 ;
@end

