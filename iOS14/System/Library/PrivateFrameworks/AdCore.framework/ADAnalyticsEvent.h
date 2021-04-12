/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
*/

#import <AdCore/AdCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ADAnalyticsEvent : PBCodable <NSCopying> {

	double _timestamp;
	int _event;

}

@property (assign,nonatomic) int event;                     //@synthesize event=_event - In the implementation block
@property (assign,nonatomic) double timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
+(id)options;
-(id)dictionaryRepresentation;
-(double)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(id)eventAsString:(int)arg1 ;
-(int)StringAsEvent:(id)arg1 ;
-(int)event;
-(void)setEvent:(int)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

