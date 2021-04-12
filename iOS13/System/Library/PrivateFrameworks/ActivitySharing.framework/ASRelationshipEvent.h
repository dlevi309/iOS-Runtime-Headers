/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(unsigned short)type;
-(NSDate *)timestamp;
-(unsigned short)anchor;
-(id)_codableRelationshipEvent;
-(id)initWithType:(unsigned short)arg1 anchor:(unsigned short)arg2 timestamp:(id)arg3 ;
-(BOOL)isEqualToRelationshipEvent:(id)arg1 ;
@end

