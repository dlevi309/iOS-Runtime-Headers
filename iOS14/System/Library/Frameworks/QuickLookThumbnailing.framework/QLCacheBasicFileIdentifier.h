/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
*/

#import <QuickLookThumbnailing/QuickLookThumbnailing-Structs.h>
#import <QuickLookThumbnailing/QLCacheFileIdentifier.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface QLCacheBasicFileIdentifier : QLCacheFileIdentifier <NSSecureCoding> {

	unsigned long long _fileId;
	fsid _fsid;

}

@property (readonly) unsigned long long fileId;              //@synthesize fileId=_fileId - In the implementation block
@property (readonly) fsid fsid;                              //@synthesize fsid=_fsid - In the implementation block
+(id)tableName;
+(unsigned long long)cacheIdFromRowId:(unsigned long long)arg1 ;
+(unsigned long long)rowIdFromCacheId:(unsigned long long)arg1 ;
+(id)queryStringToFindCacheIds;
+(id)whereClauseToFindCacheId;
+(BOOL)removeFromDatabase:(id)arg1 fileWithCacheId:(unsigned long long)arg2 ;
+(BOOL)supportsSecureCoding;
+(Class)versionedFileIdentifierClass;
-(void)bindInFindCacheIdStatement:(sqlite3_stmtRef)arg1 database:(id)arg2 startingAtIndex:(unsigned)arg3 gettingNextIndex:(unsigned*)arg4 ;
-(sqlite3_stmtRef)statementToFindCacheIdInDatabase:(id)arg1 ;
-(fsid)fsid;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)fileId;
-(id)description;
-(id)initWithFileURL:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithFileId:(unsigned long long)arg1 fsid:(fsid)arg2 ;
@end

