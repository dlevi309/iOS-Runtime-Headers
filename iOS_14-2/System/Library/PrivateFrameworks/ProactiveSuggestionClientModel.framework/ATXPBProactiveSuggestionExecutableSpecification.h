/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSuggestionClientModel.framework/ProactiveSuggestionClientModel
*/

#import <ProactiveSuggestionClientModel/ProactiveSuggestionClientModel-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface ATXPBProactiveSuggestionExecutableSpecification : PBCodable <NSCopying> {

	unsigned long long _executableObjectHash;
	NSData* _executable;
	NSString* _executableClassString;
	NSString* _executableDescription;
	NSString* _executableIdentifier;
	int _executableType;
	SCD_Struct_AT3 _has;

}

@property (nonatomic,readonly) BOOL hasExecutable; 
@property (nonatomic,retain) NSData * executable;                                  //@synthesize executable=_executable - In the implementation block
@property (assign,nonatomic) BOOL hasExecutableObjectHash; 
@property (assign,nonatomic) unsigned long long executableObjectHash;              //@synthesize executableObjectHash=_executableObjectHash - In the implementation block
@property (nonatomic,readonly) BOOL hasExecutableClassString; 
@property (nonatomic,retain) NSString * executableClassString;                     //@synthesize executableClassString=_executableClassString - In the implementation block
@property (nonatomic,readonly) BOOL hasExecutableDescription; 
@property (nonatomic,retain) NSString * executableDescription;                     //@synthesize executableDescription=_executableDescription - In the implementation block
@property (nonatomic,readonly) BOOL hasExecutableIdentifier; 
@property (nonatomic,retain) NSString * executableIdentifier;                      //@synthesize executableIdentifier=_executableIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasExecutableType; 
@property (assign,nonatomic) int executableType;                                   //@synthesize executableType=_executableType - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(NSData *)executable;
-(int)executableType;
-(id)description;
-(unsigned long long)hash;
-(NSString *)executableIdentifier;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)executableObjectHash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setExecutable:(NSData *)arg1 ;
-(void)setExecutableClassString:(NSString *)arg1 ;
-(void)setExecutableDescription:(NSString *)arg1 ;
-(void)setExecutableIdentifier:(NSString *)arg1 ;
-(BOOL)hasExecutable;
-(void)setExecutableObjectHash:(unsigned long long)arg1 ;
-(void)setHasExecutableObjectHash:(BOOL)arg1 ;
-(BOOL)hasExecutableObjectHash;
-(BOOL)hasExecutableClassString;
-(BOOL)hasExecutableDescription;
-(BOOL)hasExecutableIdentifier;
-(void)setExecutableType:(int)arg1 ;
-(void)setHasExecutableType:(BOOL)arg1 ;
-(BOOL)hasExecutableType;
-(id)executableTypeAsString:(int)arg1 ;
-(NSString *)executableDescription;
-(int)StringAsExecutableType:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)executableClassString;
@end

