/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/BRCDirectoryItem.h>
#import <libobjc.A.dylib/BRCFSRooted.h>

@interface BRCZoneRootItem : BRCDirectoryItem <BRCFSRooted>
-(id)st;
-(id)fileID;
-(id)parentItemID;
-(BOOL)isFSRoot;
-(BOOL)isZoneRoot;
-(BOOL)saveToDB;
-(BOOL)isShareableItem;
-(id)initWithZoneRootItemID:(id)arg1 session:(id)arg2 ;
-(id)parentItemOnFS;
-(id)asFSRoot;
@end

