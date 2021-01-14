/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BRCSharedServerZone *)sharedZone;
-(NSString *)ownerName;
-(BOOL)isSharedZone;
-(id)asSharedClientZone;
-(id)rootItemID;
-(void)setServerZone:(id)arg1 ;
-(void)addAcceptOperation:(id)arg1 forItemID:(id)arg2 ;
-(id)shareAcceptOperationForItemID:(id)arg1 ;
-(void)removeAllShareAcceptationSidefaults;
-(id)shareAcceptationSidefaultEnumerator;
@end

