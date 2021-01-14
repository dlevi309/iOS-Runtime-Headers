/*
* Generated on Thursday, January 14, 2021 at 2:23:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBBackgroundSubscriptionValidation : PBCodable <NSCopying> {

	NSString* _errorCode;
	NSString* _errorMessage;
	int _resultType;
	NSString* _sourceChannelId;
	SCD_Struct_NT3 _has;

}

@property (assign,nonatomic) BOOL hasResultType; 
@property (assign,nonatomic) int resultType;                          //@synthesize resultType=_resultType - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorMessage; 
@property (nonatomic,retain) NSString * errorMessage;                 //@synthesize errorMessage=_errorMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorCode; 
@property (nonatomic,retain) NSString * errorCode;                    //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;              //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasSourceChannelId;
-(void)setResultType:(int)arg1 ;
-(NSString *)sourceChannelId;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)resultType;
-(NSString *)errorCode;
-(NSString *)errorMessage;
-(void)setHasResultType:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(BOOL)hasErrorMessage;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setErrorCode:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasResultType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setErrorMessage:(NSString *)arg1 ;
@end

