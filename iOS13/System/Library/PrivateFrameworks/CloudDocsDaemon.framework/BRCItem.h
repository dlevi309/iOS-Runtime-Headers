/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

@class BRCItemID, BRCStatInfo, BRCUserRowID, BRCAccountSession, BRCServerZone, BRCClientZone;


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
@property (nonatomic,readonly) BRCItemID * itemID; 
@property (nonatomic,readonly) BRCStatInfo * st; 
@property (nonatomic,readonly) BRCUserRowID * ownerKey; 
@property (nonatomic,readonly) BRCAccountSession * session; 
@property (nonatomic,readonly) BRCServerZone * serverZone; 
@property (nonatomic,readonly) BRCClientZone * clientZone; 
@property (assign,nonatomic) unsigned long long sharingOptions; 
@required
-(BOOL)isDirectory;
-(BOOL)isPackage;
-(BRCItemID *)itemID;
-(BRCAccountSession *)session;
-(BOOL)isDead;
-(BOOL)isBRAlias;
-(BOOL)isLive;
-(BOOL)isFinderBookmark;
-(BOOL)isDocument;
-(BOOL)isSymLink;
-(BRCClientZone *)clientZone;
-(BRCServerZone *)serverZone;
-(BRCUserRowID *)ownerKey;
-(BRCStatInfo *)st;
-(BOOL)isFSRoot;
-(unsigned long long)sharingOptions;
-(BOOL)isZoneRoot;
-(BOOL)validateLoggingToFile:(_sFILE*)arg1;
-(void)setSharingOptions:(unsigned long long)arg1;

@end

