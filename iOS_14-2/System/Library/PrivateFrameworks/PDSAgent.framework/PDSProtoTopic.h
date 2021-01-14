/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/PDSAgent
*/

#import <PDSAgent/PDSAgent-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface PDSProtoTopic : PBCodable <NSCopying> {

	NSMutableArray* _appInfos;
	NSString* _name;
	NSString* _qualifier;

}

@property (nonatomic,retain) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * qualifier;                   //@synthesize qualifier=_qualifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * appInfos;              //@synthesize appInfos=_appInfos - In the implementation block
+(Class)appInfoType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)name;
-(NSString *)qualifier;
-(void)setQualifier:(NSString *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSMutableArray *)appInfos;
-(void)addAppInfo:(id)arg1 ;
-(unsigned long long)appInfosCount;
-(void)clearAppInfos;
-(id)appInfoAtIndex:(unsigned long long)arg1 ;
-(void)setAppInfos:(NSMutableArray *)arg1 ;
@end

