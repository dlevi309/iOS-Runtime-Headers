/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
*/

#import <Accounts/Accounts-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface ACProtobufDataclassAction : PBCodable <NSCopying> {

	NSMutableArray* _affectedContainers;
	int _type;
	NSString* _undoAlertMessage;
	NSString* _undoAlertTitle;
	BOOL _destructive;

}

@property (assign,nonatomic) int type;                                         //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL destructive;                                 //@synthesize destructive=_destructive - In the implementation block
@property (nonatomic,retain) NSMutableArray * affectedContainers;              //@synthesize affectedContainers=_affectedContainers - In the implementation block
@property (nonatomic,readonly) BOOL hasUndoAlertTitle; 
@property (nonatomic,retain) NSString * undoAlertTitle;                        //@synthesize undoAlertTitle=_undoAlertTitle - In the implementation block
@property (nonatomic,readonly) BOOL hasUndoAlertMessage; 
@property (nonatomic,retain) NSString * undoAlertMessage;                      //@synthesize undoAlertMessage=_undoAlertMessage - In the implementation block
+(Class)affectedContainersType;
-(id)dictionaryRepresentation;
-(BOOL)destructive;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(BOOL)hasUndoAlertTitle;
-(NSString *)undoAlertTitle;
-(void)setUndoAlertMessage:(NSString *)arg1 ;
-(id)affectedContainersAtIndex:(unsigned long long)arg1 ;
-(NSString *)undoAlertMessage;
-(void)addAffectedContainers:(id)arg1 ;
-(void)setAffectedContainers:(NSMutableArray *)arg1 ;
-(BOOL)hasUndoAlertMessage;
-(id)description;
-(void)setUndoAlertTitle:(NSString *)arg1 ;
-(NSMutableArray *)affectedContainers;
-(unsigned long long)affectedContainersCount;
-(void)clearAffectedContainers;
-(int)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setDestructive:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

