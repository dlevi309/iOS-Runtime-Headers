/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
@class BRCLocalItem, BRCServerItem, BRCServerZone, BRCRelativePath, NSURL, BRCAppLibrary;

@interface BRCItemToPathLookup : NSObject {

	BRCLocalItem* _item;
	BRCServerItem* _serverItem;
	BRCServerZone* _serverZone;
	BRCRelativePath* _parentPath;
	BRCRelativePath* _matchByFileID;
	BRCRelativePath* _matchByDocumentID;
	BRCRelativePath* _matchByPath;
	unsigned long long _parentFileID;
	BOOL _fileSystemIDMayStillExist;
	BOOL _cleanupFaults;
	SCD_Struct_BR9 _fetched;

}

@property (nonatomic,readonly) BRCRelativePath * byFileSystemID; 
@property (nonatomic,readonly) BOOL fileSystemIDMayStillExist; 
@property (nonatomic,readonly) BRCRelativePath * parentPath; 
@property (nonatomic,readonly) BRCRelativePath * byPath; 
@property (nonatomic,readonly) NSURL * coordinatedWriteURL; 
@property (nonatomic,readonly) NSURL * coordinatedReadURL; 
@property (nonatomic,readonly) BRCAppLibrary * coordinatedURLAppLibrary; 
+(id)lookupForItem:(id)arg1 ;
+(id)lookupForServerItem:(id)arg1 cleanupFaults:(BOOL)arg2 ;
-(void)dealloc;
-(id)description;
-(id)initWithItem:(id)arg1 ;
-(BRCRelativePath *)parentPath;
-(void)closePaths;
-(NSURL *)coordinatedWriteURL;
-(BRCRelativePath *)byFileSystemID;
-(NSURL *)coordinatedReadURL;
-(BRCRelativePath *)byPath;
-(BOOL)_fetchByPath;
-(BOOL)fileSystemIDMayStillExist;
-(id)initWithServerItem:(id)arg1 cleanupFaults:(BOOL)arg2 ;
-(void)_fetchParent;
-(BOOL)computeLogicalPath:(id*)arg1 physicalPath:(id*)arg2 isDirectory:(BOOL*)arg3 ;
-(BOOL)_fetchByDocumentID;
-(BOOL)_fetchByFileID;
-(BRCAppLibrary *)coordinatedURLAppLibrary;
@end

