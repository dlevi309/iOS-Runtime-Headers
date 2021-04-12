/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NPKProtoRegisterSubcredentialsRequest : PBRequest <NSCopying> {

	NSMutableArray* _identifiers;

}

@property (nonatomic,retain) NSMutableArray * identifiers;              //@synthesize identifiers=_identifiers - In the implementation block
+(Class)identifiersType;
-(id)dictionaryRepresentation;
-(NSMutableArray *)identifiers;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setIdentifiers:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(void)addIdentifiers:(id)arg1 ;
-(id)identifiersAtIndex:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)identifiersCount;
-(void)clearIdentifiers;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

