/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CloudDocsDaemon/BRCServerZone.h>

@class BRCZonePurgeOperation, NSError, BRCPrivateClientZone;

@interface BRCPrivateServerZone : BRCServerZone {

	BRCZonePurgeOperation* _deleteAllContentsOperation;
	NSError* _deleteAllContentsOperationLastError;

}

@property (nonatomic,readonly) BOOL isSharedZone; 
@property (nonatomic,readonly) BOOL isPrivateZone; 
@property (nonatomic,readonly) BRCZonePurgeOperation * deleteAllContentsOperation; 
@property (nonatomic,readonly) NSError * deleteAllContentsOperationLastError; 
@property (nonatomic,readonly) BRCPrivateClientZone * clientZone; 
-(BRCPrivateClientZone *)clientZone;
-(BOOL)isSharedZone;
-(BOOL)isPrivateZone;
-(BOOL)validateItemsLoggingToFile:(_sFILE*)arg1 db:(id)arg2 ;
-(BOOL)validateStructureLoggingToFile:(_sFILE*)arg1 db:(id)arg2 ;
-(void)deleteAllContentsOnServerWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)asPrivateZone;
-(BRCZonePurgeOperation *)deleteAllContentsOperation;
-(NSError *)deleteAllContentsOperationLastError;
-(void)_checkResultSetIsEmpty:(id)arg1 logToFile:(_sFILE*)arg2 reason:(id)arg3 result:(BOOL*)arg4 ;
-(id)itemByParentID:(id)arg1 andName:(id)arg2 ;
@end

