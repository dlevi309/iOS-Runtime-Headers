/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFPBRemoteExecutionErrorEvent : PBCodable <NSCopying> {

	NSString* _destinationType;
	NSString* _errorCode;
	NSString* _errorDomain;
	NSString* _key;
	NSString* _source;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                          //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasSource; 
@property (nonatomic,retain) NSString * source;                       //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) BOOL hasDestinationType; 
@property (nonatomic,retain) NSString * destinationType;              //@synthesize destinationType=_destinationType - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorDomain; 
@property (nonatomic,retain) NSString * errorDomain;                  //@synthesize errorDomain=_errorDomain - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorCode; 
@property (nonatomic,retain) NSString * errorCode;                    //@synthesize errorCode=_errorCode - In the implementation block
-(BOOL)hasKey;
-(id)dictionaryRepresentation;
-(BOOL)hasSource;
-(NSString *)errorDomain;
-(BOOL)hasErrorDomain;
-(NSString *)destinationType;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)errorCode;
-(void)setDestinationType:(NSString *)arg1 ;
-(BOOL)hasErrorCode;
-(void)setSource:(NSString *)arg1 ;
-(id)description;
-(NSString *)key;
-(unsigned long long)hash;
-(BOOL)hasDestinationType;
-(BOOL)readFrom:(id)arg1 ;
-(void)setErrorCode:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)source;
-(void)setErrorDomain:(NSString *)arg1 ;
@end

