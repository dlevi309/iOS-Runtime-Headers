/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NPKProtoStandaloneImageSize : PBCodable <NSCopying> {

	int _height;
	int _width;

}

@property (assign,nonatomic) int width;               //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) int height;              //@synthesize height=_height - In the implementation block
-(void)setHeight:(int)arg1 ;
-(id)dictionaryRepresentation;
-(int)width;
-(void)setWidth:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)height;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

