/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface HDCodableAuthorizationRequestMessage : PBCodable <NSCopying> {

	SCD_Struct_HD58* _typesToReads;
	SCD_Struct_HD58* _typesToWrites;
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
-(void)setRequestIdentifier:(NSData *)arg1 ;
-(id)dictionaryRepresentation;
-(NSData *)requestIdentifier;
-(NSString *)appBundleIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasAppBundleIdentifier;
-(void)dealloc;
-(BOOL)hasRequestIdentifier;
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

