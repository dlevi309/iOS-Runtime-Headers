/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)version;
-(id)dictionaryRepresentation;
-(void)setVersion:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(double*)vectors;
-(void)addVector:(double)arg1 ;
-(double)vectorAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasVersion;
-(unsigned long long)vectorsCount;
-(void)clearVectors;
-(void)setVectors:(double*)arg1 count:(unsigned long long)arg2 ;
@end

