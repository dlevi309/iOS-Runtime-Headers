/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NPKProtoStandaloneError, NPKProtoStandaloneResponseHeader;

@interface NPKProtoStandaloneInitializationResponse : PBCodable <NSCopying> {

	SCD_Struct_NP10* _supportedServerVersions;
	NSString* _clientInfoHTTPHeader;
	NPKProtoStandaloneError* _error;
	NPKProtoStandaloneResponseHeader* _responseHeader;

}

@property (nonatomic,retain) NPKProtoStandaloneResponseHeader * responseHeader;              //@synthesize responseHeader=_responseHeader - In the implementation block
@property (nonatomic,readonly) unsigned long long supportedServerVersionsCount; 
@property (nonatomic,readonly) int* supportedServerVersions; 
@property (nonatomic,readonly) BOOL hasClientInfoHTTPHeader; 
@property (nonatomic,retain) NSString * clientInfoHTTPHeader;                                //@synthesize clientInfoHTTPHeader=_clientInfoHTTPHeader - In the implementation block
@property (nonatomic,readonly) BOOL hasError; 
@property (nonatomic,retain) NPKProtoStandaloneError * error;                                //@synthesize error=_error - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)clientInfoHTTPHeader;
-(void)mergeFrom:(id)arg1 ;
-(void)setError:(NPKProtoStandaloneError *)arg1 ;
-(NPKProtoStandaloneError *)error;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasError;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setResponseHeader:(NPKProtoStandaloneResponseHeader *)arg1 ;
-(NPKProtoStandaloneResponseHeader *)responseHeader;
-(unsigned long long)supportedServerVersionsCount;
-(void)clearSupportedServerVersions;
-(int)supportedServerVersionsAtIndex:(unsigned long long)arg1 ;
-(void)addSupportedServerVersions:(int)arg1 ;
-(void)setClientInfoHTTPHeader:(NSString *)arg1 ;
-(int*)supportedServerVersions;
-(void)setSupportedServerVersions:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)supportedServerVersionsAsString:(int)arg1 ;
-(int)StringAsSupportedServerVersions:(id)arg1 ;
-(BOOL)hasClientInfoHTTPHeader;
@end

