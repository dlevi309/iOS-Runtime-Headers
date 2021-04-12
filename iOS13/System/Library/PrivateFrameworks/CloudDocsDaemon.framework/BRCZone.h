/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

@class BRCZoneRowID, BRCPQLConnection, NSMutableDictionary;


@protocol BRCZone
@property (assign,nonatomic) BOOL needsSave; 
@property (nonatomic,retain) BRCZoneRowID * dbRowID; 
@property (nonatomic,readonly) BOOL isSharedZone; 
@property (nonatomic,readonly) BOOL isPrivateZone; 
@property (nonatomic,readonly) BRCPQLConnection * db; 
@property (nonatomic,readonly) NSMutableDictionary * plist; 
@required
-(BOOL)needsSave;
-(void)setNeedsSave:(BOOL)arg1;
-(BRCPQLConnection *)db;
-(NSMutableDictionary *)plist;
-(BRCZoneRowID *)dbRowID;
-(BOOL)isSharedZone;
-(BOOL)isPrivateZone;
-(void)setDbRowID:(id)arg1;
-(BOOL)dumpStatusToContext:(id)arg1 error:(id*)arg2;
-(BOOL)dumpTablesToContext:(id)arg1 includeAllItems:(BOOL)arg2 error:(id*)arg3;
-(BOOL)validateItemsLoggingToFile:(_sFILE*)arg1 db:(id)arg2;
-(BOOL)validateStructureLoggingToFile:(_sFILE*)arg1 db:(id)arg2;

@end

