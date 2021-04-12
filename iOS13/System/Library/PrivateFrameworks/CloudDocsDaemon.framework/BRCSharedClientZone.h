/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/BRCClientZone.h>

@class NSMutableDictionary, NSString, BRCSharedServerZone;

@interface BRCSharedClientZone : BRCClientZone {

	NSMutableDictionary* _shareAcceptationByItemID;

}

@property (nonatomic,readonly) NSString * ownerName; 
@property (nonatomic,readonly) BOOL isSharedZone; 
@property (nonatomic,readonly) BOOL isPrivateZone; 
@property (nonatomic,readonly) BRCSharedServerZone * sharedZone; 
-(NSString *)ownerName;
-(BRCSharedServerZone *)sharedZone;
-(BOOL)isSharedZone;
-(id)asSharedClientZone;
-(id)rootItemID;
-(void)setServerZone:(id)arg1 ;
-(void)addAcceptOperation:(id)arg1 forItemID:(id)arg2 ;
-(id)shareAcceptOperationForItemID:(id)arg1 ;
-(void)removeAllShareAcceptationSidefaults;
-(id)shareAcceptationSidefaultEnumerator;
@end

