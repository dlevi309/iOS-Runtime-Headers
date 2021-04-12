/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/PQLValuable.h>

@class BRCALRowID, NSString;

@interface BRCItemID_v9 : NSObject <PQLValuable> {

	BRCALRowID* _appLibraryRowID;
	unsigned char _kind;
	unsigned char _uuid[16];

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newFromSqliteValue:(sqlite3_valueRef)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithUUID:(const char*)arg1 ;
-(void)sqliteBind:(sqlite3_stmtRef)arg1 index:(int)arg2 ;
-(id)initWithRootObject:(RootItemObject*)arg1 ;
-(id)itemIDString;
-(id)initWithUUIDObject:(UUIDItemObject_OLD*)arg1 ;
-(id)_initAsLibraryRootWithAppLibraryRowID:(id)arg1 enclosureUUID:(id)arg2 ;
@end

