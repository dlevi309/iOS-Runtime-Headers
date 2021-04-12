/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/


@class NSNumber;

@interface CSEvent : NSObject {

	BOOL _consumable;
	long long _type;
	NSNumber* _value;

}

@property (assign,nonatomic) long long type;                                   //@synthesize type=_type - In the implementation block
@property (assign,getter=isConsumable,nonatomic) BOOL consumable;              //@synthesize consumable=_consumable - In the implementation block
@property (nonatomic,retain) NSNumber * value;                                 //@synthesize value=_value - In the implementation block
+(id)eventWithType:(long long)arg1 ;
-(id)description;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(NSNumber *)value;
-(void)setValue:(NSNumber *)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)isConsumable;
-(void)setConsumable:(BOOL)arg1 ;
@end

