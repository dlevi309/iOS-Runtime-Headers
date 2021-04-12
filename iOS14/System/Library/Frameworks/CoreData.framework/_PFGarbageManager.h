/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


#import <CoreData/CoreData-Structs.h>
@class NSMutableDictionary;

@interface _PFGarbageManager : NSObject {

	NSMutableDictionary* _storeLinksDirs;
	NSMutableDictionary* _filesToCleanUp;

}
+(void)initialize;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)defaultInstance;
-(oneway void)release;
-(BOOL)_tryRetain;
-(id)retain;
-(BOOL)_isDeallocating;
-(id)autorelease;
-(unsigned long long)retainCount;
@end

