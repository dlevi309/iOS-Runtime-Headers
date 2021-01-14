/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)index;
-(id)init;
-(id)description;
-(id)initWithIndex:(long long)arg1 label:(id)arg2 ;
-(NSDictionary *)incomingTransitions;
-(void)setIncomingTransitions:(NSDictionary *)arg1 ;
-(NSDictionary *)outgoingTransitions;
-(void)setOutgoingTransitions:(NSDictionary *)arg1 ;
-(NSString *)label;
-(BOOL)isEqual:(id)arg1 ;
@end

