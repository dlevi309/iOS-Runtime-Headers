/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface BLTPBActionInformation : PBCodable <NSCopying> {

	NSData* _context;
	NSData* _contextNulls;

}

@property (nonatomic,readonly) BOOL hasContext; 
@property (nonatomic,retain) NSData * context;                    //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) BOOL hasContextNulls; 
@property (nonatomic,retain) NSData * contextNulls;               //@synthesize contextNulls=_contextNulls - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(NSData *)context;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasContext;
-(BOOL)isEqual:(id)arg1 ;
-(void)setContext:(NSData *)arg1 ;
-(void)setContextNulls:(NSData *)arg1 ;
-(BOOL)hasContextNulls;
-(NSData *)contextNulls;
@end

