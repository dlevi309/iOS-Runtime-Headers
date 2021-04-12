/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
*/

#import <AdCore/AdCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ADAdVector : PBCodable <NSCopying> {

	SCD_Struct_AD9* _vectors;
	NSString* _version;

}

@property (nonatomic,readonly) BOOL hasVersion; 
@property (nonatomic,retain) NSString * version;                             //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) unsigned long long vectorsCount; 
@property (nonatomic,readonly) double* vectors; 
-(id)dictionaryRepresentation;
-(BOOL)hasVersion;
-(double*)vectors;
-(double)vectorAtIndex:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)addVector:(double)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)vectorsCount;
-(void)clearVectors;
-(void)setVectors:(double*)arg1 count:(unsigned long long)arg2 ;
@end

