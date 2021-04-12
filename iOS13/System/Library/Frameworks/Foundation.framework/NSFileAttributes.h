/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSDictionary.h>

@class NSMutableDictionary, NSDictionary;

@interface NSFileAttributes : NSDictionary {

	NSMutableDictionary* dict;
	stat statInfo;
	SCD_Struct_NS20 catInfo;
	NSDictionary* extendedAttrs;
	int fileProtectionClass;

}
+(id)_attributesAtPath:(id)arg1 partialReturn:(BOOL)arg2 filterResourceFork:(BOOL)arg3 error:(id*)arg4 ;
+(id)attributesWithStat:(stat*)arg1 ;
+(BOOL)_populateCatInfo:(SCD_Struct_NS21*)arg1 forURL:(id)arg2 statInfo:(stat*)arg3 error:(id*)arg4 ;
+(id)attributesAtPath:(id)arg1 traverseLink:(BOOL)arg2 ;
+(id)_attributesAtURL:(id)arg1 partialReturn:(BOOL)arg2 filterResourceFork:(BOOL)arg3 error:(id*)arg4 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)count;
-(id)objectForKey:(id)arg1 ;
-(id)keyEnumerator;
-(unsigned long long)fileSize;
-(id)fileModificationDate;
-(id)fileType;
-(unsigned long long)filePosixPermissions;
-(id)fileOwnerAccountName;
-(unsigned long long)fileOwnerAccountNumber;
-(id)fileGroupOwnerAccountName;
-(unsigned long long)fileGroupOwnerAccountNumber;
-(long long)fileSystemNumber;
-(unsigned long long)fileSystemFileNumber;
-(BOOL)isDirectory;
@end

