/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface WFPBContentItem : PBCodable <NSCopying> {

	int _encodingType;
	NSData* _item;

}

@property (nonatomic,retain) NSData * item;                 //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) int encodingType;              //@synthesize encodingType=_encodingType - In the implementation block
-(id)dictionaryRepresentation;
-(NSData *)item;
-(void)mergeFrom:(id)arg1 ;
-(void)setItem:(NSData *)arg1 ;
-(id)description;
-(int)encodingType;
-(void)setEncodingType:(int)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)encodingTypeAsString:(int)arg1 ;
-(int)StringAsEncodingType:(id)arg1 ;
@end

