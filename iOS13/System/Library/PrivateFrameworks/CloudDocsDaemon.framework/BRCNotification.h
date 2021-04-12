/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CloudDocs/BRQueryItem.h>

@class BRCItemGlobalID, NSSet, NSMutableSet, BRCAppLibrary, NSString, BRFileObjectID, NSURL;

@interface BRCNotification : BRQueryItem {

	BOOL _isInDocumentScope;
	BOOL _isInDataScope;
	BOOL _isInTrashScope;
	BRCItemGlobalID* _itemGlobalID;
	BRCItemGlobalID* _parentGlobalID;
	unsigned long long _oldParentFileID;
	NSSet* _parentGlobalIDs;
	NSMutableSet* _appLibraryIDsWithReverseAliases;
	BRCAppLibrary* _appLibrary;
	NSString* _oldAppLibraryID;
	NSString* _aliasSourceAppLibraryID;
	NSString* _unsaltedBookmarkData;

}

@property (nonatomic,readonly) BRCAppLibrary * appLibrary;                                //@synthesize appLibrary=_appLibrary - In the implementation block
@property (nonatomic,readonly) NSString * aliasSourceAppLibraryID;                        //@synthesize aliasSourceAppLibraryID=_aliasSourceAppLibraryID - In the implementation block
@property (nonatomic,readonly) BRCItemGlobalID * itemGlobalID;                            //@synthesize itemGlobalID=_itemGlobalID - In the implementation block
@property (nonatomic,readonly) BRCItemGlobalID * parentGlobalID;                          //@synthesize parentGlobalID=_parentGlobalID - In the implementation block
@property (nonatomic,readonly) unsigned long long oldParentFileID;                        //@synthesize oldParentFileID=_oldParentFileID - In the implementation block
@property (nonatomic,readonly) BRFileObjectID * oldParentFileObjectID; 
@property (nonatomic,readonly) NSString * oldAppLibraryID;                                //@synthesize oldAppLibraryID=_oldAppLibraryID - In the implementation block
@property (nonatomic,readonly) BRFileObjectID * parentFileObjectID; 
@property (nonatomic,retain) NSSet * parentGlobalIDs;                                     //@synthesize parentGlobalIDs=_parentGlobalIDs - In the implementation block
@property (nonatomic,retain) NSMutableSet * appLibraryIDsWithReverseAliases;              //@synthesize appLibraryIDsWithReverseAliases=_appLibraryIDsWithReverseAliases - In the implementation block
@property (nonatomic,retain) NSString * unsaltedBookmarkData;                             //@synthesize unsaltedBookmarkData=_unsaltedBookmarkData - In the implementation block
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) BOOL isInDocumentScope;                                    //@synthesize isInDocumentScope=_isInDocumentScope - In the implementation block
@property (nonatomic,readonly) BOOL isInDataScope;                                        //@synthesize isInDataScope=_isInDataScope - In the implementation block
@property (nonatomic,readonly) BOOL isInTrashScope;                                       //@synthesize isInTrashScope=_isInTrashScope - In the implementation block
@property (nonatomic,readonly) BOOL isDocumentsFolder; 
+(BOOL)supportsSecureCoding;
+(id)notificationFromItem:(id)arg1 relpath:(id)arg2 ;
+(id)notificationGatheredFromItem:(id)arg1 ;
+(id)notificationWithAliasItem:(id)arg1 targetItemNotification:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(void)merge:(id)arg1 ;
-(BOOL)canMerge:(id)arg1 ;
-(id)subclassDescription;
-(BRCAppLibrary *)appLibrary;
-(BRFileObjectID *)parentFileObjectID;
-(BRCItemGlobalID *)itemGlobalID;
-(BOOL)isInDocumentScope;
-(BOOL)isInDataScope;
-(BOOL)isInTrashScope;
-(id)initWithAliasItem:(id)arg1 itemDiffs:(unsigned long long)arg2 ;
-(id)initWithLocalItem:(id)arg1 itemDiffs:(unsigned long long)arg2 ;
-(void)_addAliasDecoration:(id)arg1 ;
-(BOOL)isDocumentsFolder;
-(BRFileObjectID *)oldParentFileObjectID;
-(void)setNumberAttribute:(id)arg1 forKey:(id)arg2 ;
-(id)notificationByStrippingSharingInfoIfNeeded;
-(void)generateLogicalExtension:(id)arg1 physicalExtension:(id)arg2 ;
-(BRCItemGlobalID *)parentGlobalID;
-(unsigned long long)oldParentFileID;
-(NSSet *)parentGlobalIDs;
-(void)setParentGlobalIDs:(NSSet *)arg1 ;
-(NSMutableSet *)appLibraryIDsWithReverseAliases;
-(void)setAppLibraryIDsWithReverseAliases:(NSMutableSet *)arg1 ;
-(NSString *)oldAppLibraryID;
-(NSString *)aliasSourceAppLibraryID;
-(NSString *)unsaltedBookmarkData;
-(void)setUnsaltedBookmarkData:(NSString *)arg1 ;
@end
