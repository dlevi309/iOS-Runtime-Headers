/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface _PFSQLiteSnapshotWrapper : NSObject <NSCopying> {

	sqlite3_snapshot* _s;
	int _externalReferences;
	int _flags;

}

@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) const void* bytes; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(const void*)bytes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopy;
-(long long)compare:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSData *)data;
-(id)initWithSnapshot:(sqlite3_snapshot*)arg1 ;
-(int)externalReferenceCount;
-(int)incrementExternalReferenceCount;
-(int)decrementExternalReferenceCount;
@end

