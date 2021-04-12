/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addVersionedAttributionDetails:(id)arg1 ;
-(unsigned long long)versionedAttributionDetailsCount;
-(void)clearVersionedAttributionDetails;
-(id)versionedAttributionDetailsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)versionedAttributionDetails;
-(void)setVersionedAttributionDetails:(NSMutableArray *)arg1 ;
@end

