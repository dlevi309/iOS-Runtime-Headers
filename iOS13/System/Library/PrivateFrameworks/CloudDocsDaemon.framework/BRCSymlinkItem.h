/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/BRCLocalItem.h>

@class NSString, BRCAliasItem, BRCDirectoryItem, BRCDocumentItem;

@interface BRCSymlinkItem : BRCLocalItem {

	NSString* _symlinkTarget;

}

@property (nonatomic,readonly) BRCAliasItem * asBRAlias; 
@property (nonatomic,readonly) BRCDirectoryItem * asDirectory; 
@property (nonatomic,readonly) BRCDocumentItem * asDocument; 
@property (nonatomic,readonly) BRCDirectoryItem*<BRCFSRooted> asFSRoot; 
@property (nonatomic,readonly) NSString * symlinkTarget;                             //@synthesize symlinkTarget=_symlinkTarget - In the implementation block
-(BOOL)isSymLink;
-(id)descriptionWithContext:(id)arg1 ;
-(unsigned long long)diffAgainstServerItem:(id)arg1 ;
-(BOOL)_insertInDB:(id)arg1 dbRowID:(unsigned long long)arg2 ;
-(BOOL)_updateInDB:(id)arg1 diffs:(unsigned long long)arg2 ;
-(id)_initWithLocalItem:(id)arg1 ;
-(id)_initFromPQLResultSet:(id)arg1 session:(id)arg2 db:(id)arg3 error:(id*)arg4 ;
-(unsigned long long)diffAgainstLocalItem:(id)arg1 ;
-(id)asSymlink;
-(id)_initWithServerItem:(id)arg1 dbRowID:(unsigned long long)arg2 ;
-(NSString *)symlinkTarget;
-(void)readTargetFromRelativePathAndSyncUp:(id)arg1 ;
@end

