/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
*/

#import <AdCore/AdCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface ADKeyedParameterList : PBCodable <NSCopying> {

	NSString* _key;
	NSMutableArray* _parameterLists;

}

@property (nonatomic,retain) NSString * key;                               //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSMutableArray * parameterLists;              //@synthesize parameterLists=_parameterLists - In the implementation block
+(id)options;
+(Class)parameterListType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(NSString *)key;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addParameterList:(id)arg1 ;
-(unsigned long long)parameterListsCount;
-(void)clearParameterLists;
-(id)parameterListAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)parameterLists;
-(void)setParameterLists:(NSMutableArray *)arg1 ;
@end

