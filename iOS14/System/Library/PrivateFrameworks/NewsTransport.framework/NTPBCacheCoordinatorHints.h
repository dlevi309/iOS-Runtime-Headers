/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/FCKeyValueStoreCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface NTPBCacheCoordinatorHints : PBCodable <FCKeyValueStoreCoding, NSCopying> {

	long long _version;
	NSMutableArray* _cacheHints;
	SCD_Struct_NT3 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) long long version;                        //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSMutableArray * cacheHints;              //@synthesize cacheHints=_cacheHints - In the implementation block
+(int)keyValuePairType;
+(id)readValueFromKeyValuePair:(id)arg1 ;
+(Class)cacheHintsType;
-(void)writeToKeyValuePair:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHasVersion:(BOOL)arg1 ;
-(BOOL)hasVersion;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)description;
-(void)addCacheHints:(id)arg1 ;
-(void)clearCacheHints;
-(unsigned long long)cacheHintsCount;
-(id)cacheHintsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)cacheHints;
-(void)setVersion:(long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setCacheHints:(NSMutableArray *)arg1 ;
-(long long)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

