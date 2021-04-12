/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/


@class NSNumber;

@interface CSEvent : NSObject {

	BOOL _consumable;
	BOOL _stateless;
	long long _type;
	NSNumber* _value;

}

@property (assign,nonatomic) long long type;                                   //@synthesize type=_type - In the implementation block
@property (assign,getter=isConsumable,nonatomic) BOOL consumable;              //@synthesize consumable=_consumable - In the implementation block
@property (assign,getter=isStateless,nonatomic) BOOL stateless;                //@synthesize stateless=_stateless - In the implementation block
@property (nonatomic,retain) NSNumber * value;                                 //@synthesize value=_value - In the implementation block
+(id)eventWithType:(long long)arg1 ;
-(id)succinctDescription;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setStateless:(BOOL)arg1 ;
-(void)setType:(long long)arg1 ;
-(void)setConsumable:(BOOL)arg1 ;
-(void)setValue:(NSNumber *)arg1 ;
-(id)description;
-(BOOL)isConsumable;
-(long long)type;
-(BOOL)isStateless;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(NSNumber *)value;
@end

