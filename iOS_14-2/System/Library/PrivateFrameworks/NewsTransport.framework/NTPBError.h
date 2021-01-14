/*
* Generated on Thursday, January 14, 2021 at 2:23:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBError : PBCodable <NSCopying> {

	NSString* _errorCode;
	NSString* _errorMessage;

}

@property (nonatomic,readonly) BOOL hasErrorCode; 
@property (nonatomic,retain) NSString * errorCode;                 //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorMessage; 
@property (nonatomic,retain) NSString * errorMessage;              //@synthesize errorMessage=_errorMessage - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)errorCode;
-(NSString *)errorMessage;
-(BOOL)hasErrorCode;
-(BOOL)hasErrorMessage;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setErrorCode:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setErrorMessage:(NSString *)arg1 ;
@end

