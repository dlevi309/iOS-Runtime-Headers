/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
*/

#import <AdCore/AdCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface ADAttributionResponse : PBCodable <NSCopying> {

	NSMutableArray* _versionedAttributionDetails;

}

@property (nonatomic,retain) NSMutableArray * versionedAttributionDetails;              //@synthesize versionedAttributionDetails=_versionedAttributionDetails - In the implementation block
+(id)options;
+(Class)versionedAttributionDetailsType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addVersionedAttributionDetails:(id)arg1 ;
-(unsigned long long)versionedAttributionDetailsCount;
-(void)clearVersionedAttributionDetails;
-(id)versionedAttributionDetailsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)versionedAttributionDetails;
-(void)setVersionedAttributionDetails:(NSMutableArray *)arg1 ;
@end

