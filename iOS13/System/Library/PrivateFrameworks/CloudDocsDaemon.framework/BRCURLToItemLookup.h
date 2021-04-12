/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class BRCAccountSession, BRCRelativePath, BRCPQLConnection, NSURL, BRCLocalItem, NSString, BRCServerItem, BRCDocumentItem;

@interface BRCURLToItemLookup : NSObject <NSSecureCoding> {

	BRCAccountSession* _session;
	SCD_Union_BR7 _hasFetched;
	BRCRelativePath* __relpath;
	BRCPQLConnection* _db;
	BOOL _allowAppLibraryRoot;
	NSURL* _url;
	BRCRelativePath* _parentRelpath;
	BRCLocalItem* _parentItem;
	NSString* _filename;
	NSString* _parentPath;
	BRCLocalItem* _byIDLocalItem;
	BRCServerItem* _byIDServerItem;
	unsigned long long _byIDDiffs;
	BRCLocalItem* _byPathLocalItem;
	BRCServerItem* _byPathServerItem;
	unsigned long long _byPathDiffs;
	BRCDocumentItem* _faultedLocalItem;
	BRCServerItem* _faultedServerItem;
	BRCRelativePath* _faultedRelpath;
	unsigned long long _faultedDiffs;
	BRCLocalItem* _reservedLocalItem;
	BRCServerItem* _reservedServerItem;

}

@property (nonatomic,readonly) BRCPQLConnection * db;                           //@synthesize db=_db - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                     //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BR8 byIDMatch; 
@property (nonatomic,readonly) BRCLocalItem * byIDLocalItem;                    //@synthesize byIDLocalItem=_byIDLocalItem - In the implementation block
@property (nonatomic,readonly) BRCServerItem * byIDServerItem;                  //@synthesize byIDServerItem=_byIDServerItem - In the implementation block
@property (nonatomic,readonly) BRCRelativePath * relpath; 
@property (nonatomic,readonly) unsigned long long byIDDiffs;                    //@synthesize byIDDiffs=_byIDDiffs - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BR8 byPathMatch; 
@property (nonatomic,readonly) BRCLocalItem * byPathLocalItem;                  //@synthesize byPathLocalItem=_byPathLocalItem - In the implementation block
@property (nonatomic,readonly) BRCServerItem * byPathServerItem;                //@synthesize byPathServerItem=_byPathServerItem - In the implementation block
@property (nonatomic,readonly) BRCRelativePath * byPathRelpath; 
@property (nonatomic,readonly) unsigned long long byPathDiffs;                  //@synthesize byPathDiffs=_byPathDiffs - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BR8 faultedMatch; 
@property (nonatomic,readonly) BRCDocumentItem * faultedLocalItem;              //@synthesize faultedLocalItem=_faultedLocalItem - In the implementation block
@property (nonatomic,readonly) BRCServerItem * faultedServerItem;               //@synthesize faultedServerItem=_faultedServerItem - In the implementation block
@property (nonatomic,readonly) BRCRelativePath * faultedRelpath;                //@synthesize faultedRelpath=_faultedRelpath - In the implementation block
@property (nonatomic,readonly) unsigned long long faultedDiffs;                 //@synthesize faultedDiffs=_faultedDiffs - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BR8 reservedMatch; 
@property (nonatomic,readonly) BRCLocalItem * reservedLocalItem;                //@synthesize reservedLocalItem=_reservedLocalItem - In the implementation block
@property (nonatomic,readonly) BRCServerItem * reservedServerItem;              //@synthesize reservedServerItem=_reservedServerItem - In the implementation block
@property (nonatomic,readonly) BRCRelativePath * parentRelpath;                 //@synthesize parentRelpath=_parentRelpath - In the implementation block
@property (nonatomic,readonly) BRCLocalItem * parentItem;                       //@synthesize parentItem=_parentItem - In the implementation block
@property (nonatomic,readonly) NSString * filename;                             //@synthesize filename=_filename - In the implementation block
@property (nonatomic,readonly) NSString * parentPath;                           //@synthesize parentPath=_parentPath - In the implementation block
@property (nonatomic,readonly) unsigned short pathType; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)url;
-(NSString *)filename;
-(BRCPQLConnection *)db;
-(NSString *)parentPath;
-(unsigned short)pathType;
-(BRCLocalItem *)parentItem;
-(id)initWithURL:(id)arg1 allowAppLibraryRoot:(BOOL)arg2 session:(id)arg3 db:(id)arg4 ;
-(id)initWithURL:(id)arg1 allowAppLibraryRoot:(BOOL)arg2 session:(id)arg3 ;
-(BOOL)resolveParentAndKeepOpenMustExist:(BOOL)arg1 errcode:(int*)arg2 ;
-(BRCRelativePath *)relpath;
-(void)refreshByPathDiffs;
-(void)_fetchPathMatch;
-(void)refreshByIDDiffs;
-(void)_fetchIDMatch;
-(void)_fetchRelPath;
-(void)_fetchFaultedMatch;
-(void)refreshFaultedDiffs;
-(void)_fetchReservedPathMatch;
-(id)initWithURL:(id)arg1 session:(id)arg2 ;
-(BOOL)resolveAndKeepOpenWithError:(id*)arg1 ;
-(void)closePaths;
-(SCD_Struct_BR8)byPathMatch;
-(BRCLocalItem *)byPathLocalItem;
-(BRCRelativePath *)byPathRelpath;
-(BRCServerItem *)byPathServerItem;
-(unsigned long long)byPathDiffs;
-(void)clearByPathItem;
-(SCD_Struct_BR8)byIDMatch;
-(BRCLocalItem *)byIDLocalItem;
-(BRCServerItem *)byIDServerItem;
-(unsigned long long)byIDDiffs;
-(void)clearByIDItem;
-(SCD_Struct_BR8)faultedMatch;
-(BRCRelativePath *)faultedRelpath;
-(BRCServerItem *)faultedServerItem;
-(BRCDocumentItem *)faultedLocalItem;
-(unsigned long long)faultedDiffs;
-(void)clearFaultedItem;
-(SCD_Struct_BR8)reservedMatch;
-(BRCLocalItem *)reservedLocalItem;
-(BRCServerItem *)reservedServerItem;
-(void)clearReservedItem;
-(BRCRelativePath *)parentRelpath;
-(void)markPathMatchLostIfLocationDoesntMatch:(SCD_Struct_BR8*)arg1 ;
-(void)handleReservedPathMatchesIfNeeded;
-(void)matchLookupItemsWithDisk;
-(void)_clearNamespace:(unsigned char)arg1 ;
-(BOOL)tryToDeleteItemInNamespace:(unsigned char)arg1 ;
-(void)_moveMissingItemAsideInNamespace:(unsigned char)arg1 ;
-(int)_computeURLMatchWithLookup:(id)arg1 localItem:(id)arg2 serverItem:(id)arg3 bounceNamespace:(unsigned char)arg4 applyNamespace:(unsigned char)arg5 urlMatch:(SCD_Struct_BR8*)arg6 ;
-(SCD_Struct_BR8)_pathMatchInNamespace:(unsigned char)arg1 ;
-(BOOL)_canUpdatePathMatch:(const SCD_Struct_BR8*)arg1 hasAdditionsToApply:(BOOL)arg2 ;
-(void)didApplyChangesAtPath:(id)arg1 filename:(id)arg2 li:(id)arg3 si:(id)arg4 ;
-(BOOL)_bounceBouncesHiddenByFault:(id)arg1 ;
-(BOOL)_shouldBounceSourceItemWithLookup:(id)arg1 localItem:(id)arg2 serverItem:(id)arg3 bounceNamespace:(unsigned char)arg4 applyNamespace:(unsigned char)arg5 urlMatch:(SCD_Struct_BR8*)arg6 ;
-(BOOL)_bouncePathMatchIfNecessaryWithLookup:(id)arg1 localItem:(id)arg2 serverItem:(id)arg3 bounceNamespace:(unsigned char)arg4 applyNamespace:(unsigned char)arg5 ;
-(BOOL)copyItemAtURLToGenstore:(id)arg1 forItem:(id)arg2 error:(id*)arg3 ;
-(BOOL)trashItemIfNecessary:(id)arg1 atURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)_removeDirectory:(id)arg1 atPath:(id)arg2 error:(id*)arg3 ;
-(BOOL)_applyOrDownloadThumbnailIfNecessary:(id)arg1 si:(id)arg2 url:(id)arg3 updatedAddition:(BOOL*)arg4 applySchedulerState:(int*)arg5 ;
-(BOOL)_appliedOrDownloadContentIfNecessary:(id)arg1 si:(id)arg2 applySchedulerState:(int*)arg3 ;
-(BOOL)_applyOrEvictLosersIfNecessary:(id)arg1 si:(id)arg2 url:(id)arg3 addedLosers:(id)arg4 removedLosers:(id)arg5 updatedAddition:(BOOL*)arg6 applySchedulerState:(int*)arg7 ;
-(void)tryToUpdateItemInNamespace:(unsigned char)arg1 withDstLookup:(id)arg2 ;
@end

