/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@class PKTransitPassProperties, NSArray;

@interface NPKTransitPassInfo : NSObject {

	PKTransitPassProperties* _transitProperties;
	NSArray* _balanceFields;
	NSArray* _commutePlanFields;

}

@property (nonatomic,readonly) PKTransitPassProperties * transitProperties;              //@synthesize transitProperties=_transitProperties - In the implementation block
@property (nonatomic,readonly) NSArray * balanceFields;                                  //@synthesize balanceFields=_balanceFields - In the implementation block
@property (nonatomic,readonly) NSArray * commutePlanFields;                              //@synthesize commutePlanFields=_commutePlanFields - In the implementation block
-(id)description;
-(PKTransitPassProperties *)transitProperties;
-(NSArray *)balanceFields;
-(id)initWithTransitProperties:(id)arg1 balanceFields:(id)arg2 commutePlanFields:(id)arg3 ;
-(NSArray *)commutePlanFields;
@end

