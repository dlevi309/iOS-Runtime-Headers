/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/BRCItem.h>

@class BRCAccountSession, BRCServerZone, BRCPQLConnection, BRFieldCKInfo, NSString, BRCUserRowID, BRCItemID, BRCServerStatInfo, BRCVersion, BRCServerMetrics, BRCClientZone, BRCSharedServerItem;

@interface BRCServerItem : NSObject <BRCItem> {

	BRCAccountSession* _session;
	BRCServerZone* _zone;
	unsigned long long _sharingOptions;
	BRCPQLConnection* _db;
	BRFieldCKInfo* _sideCarCKInfo;
	BOOL _needsInsert;
	unsigned _pcsChainState;
	NSString* _symlinkTarget;
	BRCUserRowID* _ownerKey;
	BRCItemID* _itemID;
	NSString* _originalName;
	long long _rank;
	BRCServerStatInfo* _st;
	BRCVersion* _latestVersion;
	BRCServerMetrics* _serverMetrics;
	BRCServerZone* _serverZone;
	BRCClientZone* _clientZone;
	long long _directoryMtime;

}

@property (nonatomic,readonly) BOOL isSharedItem; 
@property (nonatomic,readonly) BOOL isSharedToMeTopLevelItem; 
@property (nonatomic,readonly) BOOL isSharedToMeChildItem; 
@property (nonatomic,readonly) BRCSharedServerItem * asSharedItem; 
@property (nonatomic,readonly) long long rank;                                  //@synthesize rank=_rank - In the implementation block
@property (nonatomic,readonly) NSString * originalName;                         //@synthesize originalName=_originalName - In the implementation block
@property (nonatomic,readonly) BRCServerStatInfo * st;                          //@synthesize st=_st - In the implementation block
@property (nonatomic,readonly) BRCVersion * latestVersion;                      //@synthesize latestVersion=_latestVersion - In the implementation block
@property (nonatomic,readonly) BRCServerMetrics * serverMetrics;                //@synthesize serverMetrics=_serverMetrics - In the implementation block
@property (nonatomic,readonly) NSString * symlinkTarget;                        //@synthesize symlinkTarget=_symlinkTarget - In the implementation block
@property (nonatomic,readonly) long long directoryMtime;                        //@synthesize directoryMtime=_directoryMtime - In the implementation block
@property (nonatomic,readonly) BOOL isDead; 
@property (nonatomic,readonly) BOOL isLive; 
@property (nonatomic,readonly) BOOL isBRAlias; 
@property (nonatomic,readonly) BOOL isPackage; 
@property (nonatomic,readonly) BOOL isDocument; 
@property (nonatomic,readonly) BOOL isDirectory; 
@property (nonatomic,readonly) BOOL isFSRoot; 
@property (nonatomic,readonly) BOOL isZoneRoot; 
@property (nonatomic,readonly) BOOL isSymLink; 
@property (nonatomic,readonly) BOOL isFinderBookmark; 
@property (nonatomic,readonly) BRCItemID * itemID;                              //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,readonly) BRCUserRowID * ownerKey;                         //@synthesize ownerKey=_ownerKey - In the implementation block
@property (nonatomic,readonly) BRCAccountSession * session;                     //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) BRCServerZone * serverZone;                      //@synthesize serverZone=_serverZone - In the implementation block
@property (nonatomic,readonly) BRCClientZone * clientZone;                      //@synthesize clientZone=_clientZone - In the implementation block
@property (assign,nonatomic) unsigned long long sharingOptions;                 //@synthesize sharingOptions=_sharingOptions - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isDirectory;
-(BOOL)isPackage;
-(BRCItemID *)itemID;
-(BRCAccountSession *)session;
-(long long)rank;
-(BOOL)isDead;
-(BOOL)isBRAlias;
-(BOOL)isLive;
-(BOOL)isFinderBookmark;
-(BOOL)isDocument;
-(BOOL)isSymLink;
-(NSString *)originalName;
-(BRCVersion *)latestVersion;
-(BRCClientZone *)clientZone;
-(BRCServerZone *)serverZone;
-(BRCUserRowID *)ownerKey;
-(id)descriptionWithContext:(id)arg1 ;
-(unsigned long long)diffAgainstServerItem:(id)arg1 ;
-(BRCServerStatInfo *)st;
-(BOOL)isFSRoot;
-(unsigned long long)sharingOptions;
-(BOOL)isZoneRoot;
-(BOOL)isSharedToMeTopLevelItem;
-(id)newLocalItemWithServerZone:(id)arg1 dbRowID:(unsigned long long)arg2 ;
-(BOOL)isSharedToMeChildItem;
-(id)sideCarInfo;
-(id)parentItemOnFS;
-(id)parentItemIDOnFS;
-(id)parentZoneOnFS;
-(BOOL)validateLoggingToFile:(_sFILE*)arg1 ;
-(void)setSharingOptions:(unsigned long long)arg1 ;
-(id)aliasTargetClientZone;
-(NSString *)symlinkTarget;
-(id)initWithServerItem:(id)arg1 ;
-(BRCSharedServerItem *)asSharedItem;
-(BOOL)isSharedItem;
-(id)initFromPQLResultSet:(id)arg1 serverZone:(id)arg2 error:(id*)arg3 ;
-(id)appLibraryForRootItem;
-(unsigned)pcsChainState;
-(id)parentLocalItemOnFS;
-(id)parentItemIDOnServer;
-(id)aliasTargetAppLibrary;
-(id)aliasTargetItemID;
-(BRCServerMetrics *)serverMetrics;
-(long long)directoryMtime;
@end

