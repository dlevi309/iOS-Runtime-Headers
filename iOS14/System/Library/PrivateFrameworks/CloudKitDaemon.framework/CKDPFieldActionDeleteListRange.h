/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPListRange;

@interface CKDPFieldActionDeleteListRange : PBCodable <NSCopying> {

	CKDPListRange* _range;

}

@property (nonatomic,readonly) BOOL hasRange; 
@property (nonatomic,retain) CKDPListRange * range;              //@synthesize range=_range - In the implementation block
-(id)dictionaryRepresentation;
-(void)setRange:(CKDPListRange *)arg1 ;
-(CKDPListRange *)range;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasRange;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

