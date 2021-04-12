/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

@class BRCItemID, BRCItemGlobalID, BRCStatInfo, BRCUserRowID, BRCAccountSession, BRCServerZone, BRCClientZone;


@protocol BRCItem <NSCopying,NSSecureCoding>
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
@property (nonatomic,readonly) BOOL isOwnedByMe; 
@property (nonatomic,readonly) BOOL isSharedByMe; 
@property (nonatomic,readonly) BOOL hasShareIDAndIsOwnedByMe; 
@property (nonatomic,readonly) BOOL isShared; 
@property (nonatomic,readonly) BOOL isSharedToMe; 
@property (nonatomic,readonly) BOOL isSharedToMeTopLevelItem; 
@property (nonatomic,readonly) BOOL isSharedToMeChildItem; 
@property (nonatomic,readonly) BOOL isTopLevelSharedItem; 
@property (nonatomic,readonly) BOOL isChildSharedItem; 
@property (nonatomic,readonly) BRCItemID * itemID; 
@property (nonatomic,readonly) BRCItemGlobalID * itemGlobalID; 
@property (nonatomic,readonly) BRCStatInfo * st; 
@property (nonatomic,readonly) BRCUserRowID * ownerKey; 
@property (nonatomic,readonly) BRCAccountSession * session; 
@property (nonatomic,readonly) BRCServerZone * serverZone; 
@property (nonatomic,readonly) BRCClientZone * clientZone; 
@property (assign,nonatomic) unsigned long long sharingOptions; 
@required
-(BRCStatInfo *)st;
-(BOOL)isOwnedByMe;
-(BOOL)isPackage;
-(BOOL)isSharedToMe;
-(BOOL)isBRAlias;
-(BRCAccountSession *)session;
-(BOOL)isTopLevelSharedItem;
-(BOOL)isFinderBookmark;
-(BOOL)isDocument;
-(BRCItemID *)itemID;
-(BOOL)isDead;
-(BRCClientZone *)clientZone;
-(BRCServerZone *)serverZone;
-(BRCUserRowID *)ownerKey;
-(BOOL)isShared;
-(BOOL)isDirectory;
-(BOOL)isLive;
-(BOOL)isSymLink;
-(BRCItemGlobalID *)itemGlobalID;
-(BOOL)isFSRoot;
-(unsigned long long)sharingOptions;
-(BOOL)isZoneRoot;
-(BOOL)isSharedToMeTopLevelItem;
-(BOOL)isSharedToMeChildItem;
-(BOOL)isSharedByMe;
-(BOOL)hasShareIDAndIsOwnedByMe;
-(BOOL)validateLoggingToFile:(_sFILE*)arg1;
-(BOOL)isChildSharedItem;
-(void)setSharingOptions:(unsigned long long)arg1;

@end

