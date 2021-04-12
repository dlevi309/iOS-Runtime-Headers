/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface HDCodableAuthorizationRequestMessage : PBCodable <NSCopying> {

	SCD_Struct_HD59* _typesToReads;
	SCD_Struct_HD59* _typesToWrites;
	NSString* _appBundleIdentifier;
	NSData* _requestIdentifier;

}

@property (nonatomic,readonly) BOOL hasAppBundleIdentifier; 
@property (nonatomic,retain) NSString * appBundleIdentifier;                       //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestIdentifier; 
@property (nonatomic,retain) NSData * requestIdentifier;                           //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long typesToReadsCount; 
@property (nonatomic,readonly) long long* typesToReads; 
@property (nonatomic,readonly) unsigned long long typesToWritesCount; 
@property (nonatomic,readonly) long long* typesToWrites; 
+(id)codableAuthorizationRequestWithRecord:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)appBundleIdentifier;
-(void)setRequestIdentifier:(NSData *)arg1 ;
-(NSData *)requestIdentifier;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(BOOL)hasRequestIdentifier;
-(BOOL)hasAppBundleIdentifier;
-(id)decodedWriteTypes;
-(id)decodedReadTypes;
-(unsigned long long)typesToReadsCount;
-(long long)typesToReadAtIndex:(unsigned long long)arg1 ;
-(id)_objectTypeForCode:(long long)arg1 ;
-(unsigned long long)typesToWritesCount;
-(long long)typesToWriteAtIndex:(unsigned long long)arg1 ;
-(void)addTypesToRead:(long long)arg1 ;
-(void)addTypesToWrite:(long long)arg1 ;
-(void)clearTypesToReads;
-(void)clearTypesToWrites;
-(long long*)typesToReads;
-(void)setTypesToReads:(long long*)arg1 count:(unsigned long long)arg2 ;
-(long long*)typesToWrites;
-(void)setTypesToWrites:(long long*)arg1 count:(unsigned long long)arg2 ;
@end

