/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDSymptomsSignificantOperationalEvent : PBCodable <NSCopying> {

	long long _errorCode;
	unsigned long long _timestamp;
	NSString* _alternateName;
	int _error;
	NSString* _errorDomain;
	int _name;
	int _status;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasName; 
@property (assign,nonatomic) int name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasAlternateName; 
@property (nonatomic,retain) NSString * alternateName;                  //@synthesize alternateName=_alternateName - In the implementation block
@property (assign,nonatomic) BOOL hasError; 
@property (assign,nonatomic) int error;                                 //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorDomain; 
@property (nonatomic,retain) NSString * errorDomain;                    //@synthesize errorDomain=_errorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) long long errorCode;                       //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                                //@synthesize status=_status - In the implementation block
-(id)dictionaryRepresentation;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasName;
-(NSString *)errorDomain;
-(NSString *)alternateName;
-(void)setAlternateName:(NSString *)arg1 ;
-(BOOL)hasErrorDomain;
-(unsigned long long)timestamp;
-(void)setHasError:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(long long)errorCode;
-(void)setError:(int)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(int)error;
-(BOOL)hasErrorCode;
-(BOOL)hasStatus;
-(int)name;
-(int)StringAsStatus:(id)arg1 ;
-(id)description;
-(void)setHasName:(BOOL)arg1 ;
-(id)nameAsString:(int)arg1 ;
-(int)StringAsName:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)setErrorCode:(long long)arg1 ;
-(void)setName:(int)arg1 ;
-(void)setStatus:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasError;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)status;
-(void)setErrorDomain:(NSString *)arg1 ;
-(id)errorAsString:(int)arg1 ;
-(int)StringAsError:(id)arg1 ;
-(BOOL)hasAlternateName;
@end

