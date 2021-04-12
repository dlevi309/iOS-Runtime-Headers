/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/


@interface TMLUIControlState : NSObject {

	unsigned long long _state;

}

@property (assign,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
+(BOOL)isControlStateClass:(id)arg1 ;
+(void)registerControlState:(id)arg1 forClass:(Class)arg2 ;
+(void)verifyStateProperty:(id)arg1 withClass:(Class)arg2 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
@end

