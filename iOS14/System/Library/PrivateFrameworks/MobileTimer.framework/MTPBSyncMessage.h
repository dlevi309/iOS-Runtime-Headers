/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MTPBDismissAction, MTPBSnoozeAction, NSString;

@interface MTPBSyncMessage : PBCodable <NSCopying> {

	double _syncDate;
	double _syncVersion;
	MTPBDismissAction* _dismissAction;
	MTPBSnoozeAction* _snoozeAction;
	NSString* _syncID;

}

@property (nonatomic,readonly) BOOL hasSnoozeAction; 
@property (nonatomic,retain) MTPBSnoozeAction * snoozeAction;                //@synthesize snoozeAction=_snoozeAction - In the implementation block
@property (nonatomic,readonly) BOOL hasDismissAction; 
@property (nonatomic,retain) MTPBDismissAction * dismissAction;              //@synthesize dismissAction=_dismissAction - In the implementation block
@property (assign,nonatomic) double syncDate;                                //@synthesize syncDate=_syncDate - In the implementation block
@property (nonatomic,retain) NSString * syncID;                              //@synthesize syncID=_syncID - In the implementation block
@property (assign,nonatomic) double syncVersion;                             //@synthesize syncVersion=_syncVersion - In the implementation block
-(id)dictionaryRepresentation;
-(MTPBSnoozeAction *)snoozeAction;
-(NSString *)syncID;
-(BOOL)hasDismissAction;
-(void)mergeFrom:(id)arg1 ;
-(double)syncDate;
-(id)description;
-(void)setDismissAction:(MTPBDismissAction *)arg1 ;
-(MTPBDismissAction *)dismissAction;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSyncDate:(double)arg1 ;
-(double)syncVersion;
-(void)setSyncVersion:(double)arg1 ;
-(BOOL)hasSnoozeAction;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSyncID:(NSString *)arg1 ;
-(void)setSnoozeAction:(MTPBSnoozeAction *)arg1 ;
@end

