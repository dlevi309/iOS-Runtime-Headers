/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface WFPBKeyValuePair : PBCodable <NSCopying> {

	NSString* _key;
	NSData* _value;

}

@property (nonatomic,retain) NSString * key;              //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSData * value;              //@synthesize value=_value - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setValue:(NSData *)arg1 ;
-(id)description;
-(NSString *)key;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(NSData *)value;
-(BOOL)isEqual:(id)arg1 ;
@end

