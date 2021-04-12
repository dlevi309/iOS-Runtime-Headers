/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CloudDocsDaemon/BRCServerZone.h>

@class NSString, BRCSharedClientZone;

@interface BRCSharedServerZone : BRCServerZone {

	NSString* _ownerName;

}

@property (nonatomic,readonly) BOOL isSharedZone; 
@property (nonatomic,readonly) BOOL isPrivateZone; 
@property (nonatomic,readonly) BRCSharedClientZone * clientZone; 
-(BRCSharedClientZone *)clientZone;
-(id)ownerName;
-(BOOL)isSharedZone;
-(id)asSharedZone;
-(BOOL)allocateRanksWhenCaughtUp:(BOOL)arg1 ;
-(BOOL)isPrivateZone;
-(id)initWithMangledID:(id)arg1 dbRowID:(id)arg2 plist:(id)arg3 session:(id)arg4 ;
-(BOOL)validateItemsLoggingToFile:(_sFILE*)arg1 db:(id)arg2 ;
-(BOOL)validateStructureLoggingToFile:(_sFILE*)arg1 db:(id)arg2 ;
-(void)sideCarZoneWasReset;
-(long long)_propagateDeleteToChildrenOfItemID:(id)arg1 ;
-(BOOL)_propagateFolderDeletesToTheirChildren;
@end

