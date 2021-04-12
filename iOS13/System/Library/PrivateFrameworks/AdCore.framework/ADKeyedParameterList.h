/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)key;
-(id)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addParameterList:(id)arg1 ;
-(unsigned long long)parameterListsCount;
-(void)clearParameterLists;
-(id)parameterListAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)parameterLists;
-(void)setParameterLists:(NSMutableArray *)arg1 ;
@end

