/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSPersistentStoreCache.h>

@class NSSQLCore;

@interface NSSQLRowCache : NSPersistentStoreCache {

	NSSQLCore* _sqlCore;
	int _debug;

}
+(void)initialize;
-(id)sqlCore;
-(id)initWithPersistentStore:(id)arg1 ;
-(void)dealloc;
@end

