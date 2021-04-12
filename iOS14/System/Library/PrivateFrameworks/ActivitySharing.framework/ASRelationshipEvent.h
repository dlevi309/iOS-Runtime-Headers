/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
*/


@class NSDate;

@interface ASRelationshipEvent : NSObject {

	unsigned short _type;
	unsigned short _anchor;
	NSDate* _timestamp;

}

@property (nonatomic,readonly) unsigned short type;                //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned short anchor;              //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,readonly) NSDate * timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
+(id)relationshipEventWithRecord:(id)arg1 ;
+(id)_relationshipEventWithCodable:(id)arg1 ;
-(NSDate *)timestamp;
-(id)description;
-(unsigned short)type;
-(unsigned short)anchor;
-(BOOL)isEqual:(id)arg1 ;
-(id)_codableRelationshipEvent;
-(id)initWithType:(unsigned short)arg1 anchor:(unsigned short)arg2 timestamp:(id)arg3 ;
-(BOOL)isEqualToRelationshipEvent:(id)arg1 ;
@end

