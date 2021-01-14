/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BRCPQLConnection *)db;
-(NSMutableDictionary *)plist;
-(BOOL)needsSave;
-(BRCZoneRowID *)dbRowID;
-(void)setNeedsSave:(BOOL)arg1;
-(BOOL)isSharedZone;
-(BOOL)isPrivateZone;
-(void)setDbRowID:(id)arg1;
-(BOOL)dumpStatusToContext:(id)arg1 error:(id*)arg2;
-(BOOL)dumpTablesToContext:(id)arg1 includeAllItems:(BOOL)arg2 error:(id*)arg3;
-(BOOL)validateItemsLoggingToFile:(_sFILE*)arg1 db:(id)arg2;
-(BOOL)validateStructureLoggingToFile:(_sFILE*)arg1 db:(id)arg2;

@end

