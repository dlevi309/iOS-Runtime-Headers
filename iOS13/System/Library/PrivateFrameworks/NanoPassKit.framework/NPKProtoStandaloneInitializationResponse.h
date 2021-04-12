/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NPKProtoStandaloneError, NPKProtoStandaloneResponseHeader;

@interface NPKProtoStandaloneInitializationResponse : PBCodable <NSCopying> {

	SCD_Struct_NP11* _supportedServerVersions;
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NPKProtoStandaloneError *)error;
-(void)setError:(NPKProtoStandaloneError *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasError;
-(NSString *)clientInfoHTTPHeader;
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

