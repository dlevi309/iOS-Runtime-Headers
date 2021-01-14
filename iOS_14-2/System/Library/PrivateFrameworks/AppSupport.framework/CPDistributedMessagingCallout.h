/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
*/


@interface CPDistributedMessagingCallout : NSObject {

	id _target;
	SEL _selector;
	BOOL _returnsVoid;
	BOOL _returnsVoidIsValid;

}

@property (nonatomic,retain,readonly) id target;              //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL selector;                  //@synthesize selector=_selector - In the implementation block
@property (nonatomic,readonly) BOOL returnsVoid;              //@synthesize returnsVoid=_returnsVoid - In the implementation block
-(SEL)selector;
-(BOOL)returnsVoid;
-(id)target;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)dealloc;
@end

