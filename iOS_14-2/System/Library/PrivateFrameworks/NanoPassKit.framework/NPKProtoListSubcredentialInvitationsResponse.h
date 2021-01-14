/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NPKProtoListSubcredentialInvitationsResponse : PBCodable <NSCopying> {

	NSMutableArray* _subcredentialInvitationsDatas;

}

@property (nonatomic,retain) NSMutableArray * subcredentialInvitationsDatas;              //@synthesize subcredentialInvitationsDatas=_subcredentialInvitationsDatas - In the implementation block
+(Class)subcredentialInvitationsDataType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addSubcredentialInvitationsData:(id)arg1 ;
-(unsigned long long)subcredentialInvitationsDatasCount;
-(void)clearSubcredentialInvitationsDatas;
-(id)subcredentialInvitationsDataAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)subcredentialInvitationsDatas;
-(void)setSubcredentialInvitationsDatas:(NSMutableArray *)arg1 ;
@end

