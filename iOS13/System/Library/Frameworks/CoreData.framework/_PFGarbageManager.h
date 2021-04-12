/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


#import <CoreData/CoreData-Structs.h>
@class NSMutableDictionary;

@interface _PFGarbageManager : NSObject {

	NSMutableDictionary* _storeLinksDirs;
	NSMutableDictionary* _filesToCleanUp;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(id)defaultInstance;
-(unsigned long long)retainCount;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(id)_init__;
-(void)_deleteIfNecessary:(id)arg1 ;
-(void)_doCleanupForDir:(id)arg1 exceptURLs:(id)arg2 ;
-(BOOL)registerURLForCleanup:(id)arg1 ;
-(id)temporaryLinksDirectoryForStore:(id)arg1 ;
-(void)doCleanupForURL:(id)arg1 ;
@end

