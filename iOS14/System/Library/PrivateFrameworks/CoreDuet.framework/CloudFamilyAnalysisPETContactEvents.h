/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CloudFamilyAnalysisPETContactEvents : PBCodable <NSCopying> {

	NSMutableArray* _contactEvents;

}

@property (nonatomic,retain) NSMutableArray * contactEvents;              //@synthesize contactEvents=_contactEvents - In the implementation block
+(Class)contactEventType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setContactEvents:(NSMutableArray *)arg1 ;
-(NSMutableArray *)contactEvents;
-(id)description;
-(void)addContactEvent:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)contactEventsCount;
-(void)clearContactEvents;
-(id)contactEventAtIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

