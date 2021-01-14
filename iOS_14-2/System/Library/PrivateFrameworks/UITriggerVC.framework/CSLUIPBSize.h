/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UITriggerVC.framework/UITriggerVC
*/

#import <UITriggerVC/UITriggerVC-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CSLUIPBSize : PBCodable <NSCopying> {

	float _height;
	float _width;

}

@property (assign,nonatomic) float width;               //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) float height;              //@synthesize height=_height - In the implementation block
-(void)setHeight:(float)arg1 ;
-(id)dictionaryRepresentation;
-(float)width;
-(void)setWidth:(float)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(float)height;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

