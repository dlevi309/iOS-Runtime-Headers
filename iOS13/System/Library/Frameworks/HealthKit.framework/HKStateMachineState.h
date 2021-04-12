/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@class NSString, NSDictionary;

@interface HKStateMachineState : NSObject {

	long long _index;
	NSString* _label;
	NSDictionary* _incomingTransitions;
	NSDictionary* _outgoingTransitions;

}

@property (nonatomic,copy) NSDictionary * incomingTransitions;              //@synthesize incomingTransitions=_incomingTransitions - In the implementation block
@property (nonatomic,copy) NSDictionary * outgoingTransitions;              //@synthesize outgoingTransitions=_outgoingTransitions - In the implementation block
@property (nonatomic,readonly) long long index;                             //@synthesize index=_index - In the implementation block
@property (nonatomic,copy,readonly) NSString * label;                       //@synthesize label=_label - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(long long)index;
-(NSString *)label;
-(id)initWithIndex:(long long)arg1 label:(id)arg2 ;
-(NSDictionary *)incomingTransitions;
-(void)setIncomingTransitions:(NSDictionary *)arg1 ;
-(NSDictionary *)outgoingTransitions;
-(void)setOutgoingTransitions:(NSDictionary *)arg1 ;
@end

