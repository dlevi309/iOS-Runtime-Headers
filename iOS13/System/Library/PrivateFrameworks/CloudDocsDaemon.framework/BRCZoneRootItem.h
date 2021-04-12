/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/BRCDirectoryItem.h>
#import <libobjc.A.dylib/BRCFSRooted.h>

@interface BRCZoneRootItem : BRCDirectoryItem <BRCFSRooted>
-(id)fileID;
-(id)parentItemID;
-(id)st;
-(BOOL)isFSRoot;
-(BOOL)isZoneRoot;
-(BOOL)saveToDB;
-(BOOL)isShareableItem;
-(id)initWithZoneRootItemID:(id)arg1 session:(id)arg2 ;
-(id)parentItemOnFS;
-(id)asFSRoot;
@end

