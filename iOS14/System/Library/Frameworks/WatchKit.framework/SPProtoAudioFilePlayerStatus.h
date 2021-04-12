/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
*/

#import <WatchKit/WatchKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface SPProtoAudioFilePlayerStatus : PBCodable <NSCopying> {

	long long _errorCode;
	NSData* _errorDict;
	NSString* _errorDomain;
	NSString* _identifier;
	int _status;
	SCD_Struct_SP6 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                          //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorDomain; 
@property (nonatomic,retain) NSString * errorDomain;              //@synthesize errorDomain=_errorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) long long errorCode;                 //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorDict; 
@property (nonatomic,retain) NSData * errorDict;                  //@synthesize errorDict=_errorDict - In the implementation block
-(id)dictionaryRepresentation;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasIdentifier;
-(NSString *)errorDomain;
-(BOOL)hasErrorDomain;
-(void)mergeFrom:(id)arg1 ;
-(long long)errorCode;
-(BOOL)hasErrorCode;
-(BOOL)hasStatus;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setErrorCode:(long long)arg1 ;
-(void)setStatus:(int)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)status;
-(void)setErrorDomain:(NSString *)arg1 ;
-(void)setErrorDict:(NSData *)arg1 ;
-(BOOL)hasErrorDict;
-(NSData *)errorDict;
-(id)sockPuppetMessageForPlayerItemSetStatus;
-(id)sockPuppetMessageForQueuePlayerSetStatus;
@end

