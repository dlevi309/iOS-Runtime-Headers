/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSDictionary.h>

@class NSMutableDictionary, NSDictionary;

@interface NSFileAttributes : NSDictionary {

	NSMutableDictionary* dict;
	stat statInfo;
	SCD_Struct_NS21 catInfo;
	NSDictionary* extendedAttrs;
	int fileProtectionClass;

}
+(id)attributesWithStat:(stat*)arg1 ;
+(id)_attributesAtPath:(id)arg1 partialReturn:(BOOL)arg2 filterResourceFork:(BOOL)arg3 error:(id*)arg4 ;
+(BOOL)_populateCatInfo:(SCD_Struct_NS22*)arg1 forURL:(id)arg2 statInfo:(stat*)arg3 error:(id*)arg4 ;
+(id)_attributesAtURL:(id)arg1 partialReturn:(BOOL)arg2 filterResourceFork:(BOOL)arg3 error:(id*)arg4 ;
+(id)attributesAtPath:(id)arg1 traverseLink:(BOOL)arg2 ;
-(id)fileOwnerAccountName;
-(id)fileGroupOwnerAccountName;
-(unsigned long long)fileSize;
-(unsigned long long)count;
-(unsigned long long)fileGroupOwnerAccountNumber;
-(unsigned long long)fileOwnerAccountNumber;
-(id)keyEnumerator;
-(id)objectForKey:(id)arg1 ;
-(unsigned long long)filePosixPermissions;
-(unsigned long long)hash;
-(BOOL)isDirectory;
-(id)fileModificationDate;
-(unsigned long long)fileSystemFileNumber;
-(long long)fileSystemNumber;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)fileType;
@end

