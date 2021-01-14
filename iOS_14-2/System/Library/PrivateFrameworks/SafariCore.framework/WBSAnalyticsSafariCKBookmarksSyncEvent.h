/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/

#import <SafariCore/SafariCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WBSAnalyticsSafariCKBookmarksSyncEvent : PBCodable <NSCopying> {

	long long _result;
	unsigned long long _timestamp;
	NSString* _errorCode;
	NSString* _errorDomain;
	SCD_Struct_WB1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasResult; 
@property (assign,nonatomic) long long result;                          //@synthesize result=_result - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorDomain; 
@property (nonatomic,retain) NSString * errorDomain;                    //@synthesize errorDomain=_errorDomain - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorCode; 
@property (nonatomic,retain) NSString * errorCode;                      //@synthesize errorCode=_errorCode - In the implementation block
-(void)setResult:(long long)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasResult;
-(NSString *)errorDomain;
-(BOOL)hasErrorDomain;
-(unsigned long long)timestamp;
-(void)setHasResult:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)errorCode;
-(BOOL)hasErrorCode;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(long long)result;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)setErrorCode:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setErrorDomain:(NSString *)arg1 ;
@end

