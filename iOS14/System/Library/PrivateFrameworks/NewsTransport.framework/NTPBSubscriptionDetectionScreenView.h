/*
* Generated on Thursday, January 14, 2021 at 2:23:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBSubscriptionDetectionScreenView : PBCodable <NSCopying> {

	int _countOfSubscriptionsDetected;
	SCD_Struct_NT3 _has;

}

@property (assign,nonatomic) BOOL hasCountOfSubscriptionsDetected; 
@property (assign,nonatomic) int countOfSubscriptionsDetected;                  //@synthesize countOfSubscriptionsDetected=_countOfSubscriptionsDetected - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(void)setCountOfSubscriptionsDetected:(int)arg1 ;
-(void)setHasCountOfSubscriptionsDetected:(BOOL)arg1 ;
-(BOOL)hasCountOfSubscriptionsDetected;
-(int)countOfSubscriptionsDetected;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

