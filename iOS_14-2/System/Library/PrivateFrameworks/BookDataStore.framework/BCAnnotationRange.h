/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
*/

#import <BookDataStore/BookDataStore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface BCAnnotationRange : PBCodable <NSCopying> {

	unsigned long long _length;
	unsigned long long _location;

}

@property (assign,nonatomic) unsigned long long location;              //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) unsigned long long length;                //@synthesize length=_length - In the implementation block
-(void)setLength:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)location;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)length;
-(void)setLocation:(unsigned long long)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

