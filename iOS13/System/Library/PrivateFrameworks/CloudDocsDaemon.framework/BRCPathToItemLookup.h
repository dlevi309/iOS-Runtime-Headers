/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
@class BRCRelativePath, BRCLocalItem, BRCDocumentItem, BRCServerItem, BRCPackageItem, BRCClientZone, BRCPQLConnection;

@interface BRCPathToItemLookup : NSObject {

	BRCRelativePath* _pathOfItem;
	BRCRelativePath* _relpathOfFSEvent;
	BRCLocalItem* _matchByFileID;
	BRCDocumentItem* _matchByDocumentID;
	BRCLocalItem* _matchByPath;
	BRCServerItem* _serverByPath;
	BRCPackageItem* _packageItem;
	BRCLocalItem* _parentItem;
	BRCLocalItem* _matchByFileIDGlobally;
	BRCDocumentItem* _matchByDocumentIDGlobally;
	BRCClientZone* _clientZone;
	SCD_Struct_BR19 _fetched;
	BRCPQLConnection* _db;

}

@property (nonatomic,readonly) BRCRelativePath * relpathOfItem;                  //@synthesize pathOfItem=_pathOfItem - In the implementation block
@property (nonatomic,readonly) BRCRelativePath * relpathOfFSEvent;               //@synthesize relpathOfFSEvent=_relpathOfFSEvent - In the implementation block
@property (nonatomic,readonly) BRCLocalItem * byPath; 
@property (nonatomic,retain) BRCLocalItem * byFileID; 
@property (retain,readonly) BRCLocalItem * byFileIDGlobally; 
@property (nonatomic,retain) BRCDocumentItem * byDocumentID; 
@property (retain,readonly) BRCDocumentItem * byDocumentIDGlobally; 
@property (nonatomic,readonly) BRCServerItem * serverByPath; 
@property (nonatomic,readonly) BRCLocalItem * parentItem; 
@property (nonatomic,readonly) BRCClientZone * clientZone; 
@property (nonatomic,readonly) BRCPQLConnection * db;                            //@synthesize db=_db - In the implementation block
+(id)lookupForRelativePath:(id)arg1 ;
-(id)description;
-(BRCPQLConnection *)db;
-(BRCLocalItem *)parentItem;
-(BRCClientZone *)clientZone;
-(id)initWithRelativePath:(id)arg1 db:(id)arg2 ;
-(id)initWithRelativePath:(id)arg1 ;
-(BRCLocalItem *)byPath;
-(BOOL)_fetchByFileID:(BOOL)arg1 ;
-(BOOL)_fetchByDocumentID:(BOOL)arg1 ;
-(id)_byPathWithLastPathComponent:(id)arg1 ;
-(BOOL)_fetchByPath;
-(id)_resolveClientZoneWhileFetchingFileID:(BOOL)arg1 fetchindDocID:(BOOL)arg2 ;
-(BOOL)_shareIDMatchesParent:(id)arg1 ;
-(BOOL)_fetchClientZone;
-(BRCDocumentItem *)byDocumentIDGlobally;
-(BRCLocalItem *)byFileIDGlobally;
-(void)setByFileID:(BRCLocalItem *)arg1 ;
-(void)setByDocumentID:(BRCDocumentItem *)arg1 ;
-(BRCLocalItem *)byFileID;
-(BRCDocumentItem *)byDocumentID;
-(BRCServerItem *)serverByPath;
-(id)byPathWithLastPathComponent:(id)arg1 ;
-(BRCRelativePath *)relpathOfItem;
-(BRCRelativePath *)relpathOfFSEvent;
@end

