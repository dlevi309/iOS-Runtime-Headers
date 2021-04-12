/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UITriggerVC.framework/UITriggerVC
*/

#import <UITriggerVC/UITriggerVC-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface CSLUIPBUIPluginTriggerRequest : PBRequest <NSCopying> {

	NSMutableArray* _dictionarys;
	NSString* _name;
	int _reason;
	SCD_Struct_CS2 _has;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSMutableArray * dictionarys;              //@synthesize dictionarys=_dictionarys - In the implementation block
@property (assign,nonatomic) BOOL hasReason; 
@property (assign,nonatomic) int reason;                                //@synthesize reason=_reason - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)reason;
-(void)setName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasName;
-(void)setReason:(int)arg1 ;
-(BOOL)hasReason;
-(void)setHasReason:(BOOL)arg1 ;
-(id)dictionaryAtIndex:(unsigned long long)arg1 ;
-(void)addDictionary:(id)arg1 ;
-(unsigned long long)dictionarysCount;
-(void)clearDictionarys;
-(NSMutableArray *)dictionarys;
-(void)setDictionarys:(NSMutableArray *)arg1 ;
@end

