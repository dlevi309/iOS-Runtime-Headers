/*
* Generated on Monday, March 1, 2021 at 2:35:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/


@class TMLMethodDescriptor, NSInvocation, NSArray, NSString;

@interface TMLMethodCall : NSObject {

	TMLMethodDescriptor* _methodDescriptor;
	SEL _selector;
	BOOL _classSelector;
	/*^block*/id _block;
	NSInvocation* _invocation;
	NSArray* _argTypes;

}

@property (nonatomic,readonly) NSString * methodName; 
@property (nonatomic,readonly) BOOL classMethod;                   //@synthesize classSelector=_classSelector - In the implementation block
-(id)callWithArguments:(id)arg1 ;
-(NSString *)methodName;
-(id)_callWithArguments:(id)arg1 ;
-(id)initWithMethodDescriptor:(id)arg1 forClass:(Class)arg2 ;
-(BOOL)classMethod;
@end

