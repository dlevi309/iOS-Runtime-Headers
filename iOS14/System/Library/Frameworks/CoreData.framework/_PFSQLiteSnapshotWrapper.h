/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _PFSQLiteSnapshotWrapper : NSObject <NSCopying> {

	sqlite3_snapshot* _s;
	int _externalReferences;
	int _flags;

}

@property (nonatomic,readonly) const void* bytes; 
-(long long)compare:(id)arg1 ;
-(id)mutableCopy;
-(const void*)bytes;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

