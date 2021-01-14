/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSManagedObject, NSDictionary;

@interface NSMergeConflict : NSObject <NSSecureCoding> {

	id _source;
	id _snapshot1;
	id _snapshot2;
	id _snapshot3;
	unsigned long long _newVersion;
	unsigned long long _oldVersion;

}

@property (retain,readonly) NSManagedObject * sourceObject;                //@synthesize source=_source - In the implementation block
@property (retain,readonly) NSDictionary * objectSnapshot;                 //@synthesize snapshot1=_snapshot1 - In the implementation block
@property (retain,readonly) NSDictionary * cachedSnapshot;                 //@synthesize snapshot2=_snapshot2 - In the implementation block
@property (retain,readonly) NSDictionary * persistedSnapshot;              //@synthesize snapshot3=_snapshot3 - In the implementation block
@property (readonly) unsigned long long newVersionNumber;                  //@synthesize newVersion=_newVersion - In the implementation block
@property (readonly) unsigned long long oldVersionNumber;                  //@synthesize oldVersion=_oldVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)_doCleanupForXPCStore:(id)arg1 context:(id)arg2 ;
-(id)init;
-(id)valueForKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)objectForKey:(id)arg1 ;
-(NSManagedObject *)sourceObject;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)objectSnapshot;
-(id)ancestorSnapshot;
-(NSDictionary *)cachedSnapshot;
-(unsigned long long)oldVersionNumber;
-(id)initWithSource:(id)arg1 newVersion:(unsigned long long)arg2 oldVersion:(unsigned long long)arg3 snapshot1:(id)arg4 snapshot2:(id)arg5 snapshot3:(id)arg6 ;
-(unsigned long long)newVersionNumber;
-(id)initWithSource:(id)arg1 newVersion:(unsigned long long)arg2 oldVersion:(unsigned long long)arg3 cachedSnapshot:(id)arg4 persistedSnapshot:(id)arg5 ;
-(NSDictionary *)persistedSnapshot;
-(void)dealloc;
@end

