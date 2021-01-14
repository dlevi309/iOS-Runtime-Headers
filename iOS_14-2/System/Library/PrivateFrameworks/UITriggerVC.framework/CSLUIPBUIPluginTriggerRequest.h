/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(BOOL)hasReason;
-(BOOL)hasName;
-(void)mergeFrom:(id)arg1 ;
-(id)dictionaryAtIndex:(unsigned long long)arg1 ;
-(void)setHasReason:(BOOL)arg1 ;
-(NSString *)name;
-(id)description;
-(int)reason;
-(void)addDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setReason:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)dictionarysCount;
-(void)clearDictionarys;
-(NSMutableArray *)dictionarys;
-(void)setDictionarys:(NSMutableArray *)arg1 ;
@end

