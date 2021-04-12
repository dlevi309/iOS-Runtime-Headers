/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSData *)context;
-(void)setContext:(NSData *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasContext;
-(void)setContextNulls:(NSData *)arg1 ;
-(BOOL)hasContextNulls;
-(NSData *)contextNulls;
@end

