/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@class PKTransitPassProperties, PKTransitAppletState, NSArray;

@interface NPKPassAssociatedInfo : NSObject {

	PKTransitPassProperties* _transitProperties;
	PKTransitAppletState* _transitAppletState;
	NSArray* _balanceFields;
	NSArray* _commutePlanFields;

}

@property (nonatomic,readonly) PKTransitPassProperties * transitProperties;              //@synthesize transitProperties=_transitProperties - In the implementation block
@property (nonatomic,readonly) PKTransitAppletState * transitAppletState;                //@synthesize transitAppletState=_transitAppletState - In the implementation block
@property (nonatomic,readonly) NSArray * balanceFields;                                  //@synthesize balanceFields=_balanceFields - In the implementation block
@property (nonatomic,readonly) NSArray * commutePlanFields;                              //@synthesize commutePlanFields=_commutePlanFields - In the implementation block
-(id)description;
-(PKTransitPassProperties *)transitProperties;
-(NSArray *)balanceFields;
-(PKTransitAppletState *)transitAppletState;
-(id)initWithTransitProperties:(id)arg1 appletState:(id)arg2 balanceFields:(id)arg3 commutePlanFields:(id)arg4 ;
-(NSArray *)commutePlanFields;
@end

