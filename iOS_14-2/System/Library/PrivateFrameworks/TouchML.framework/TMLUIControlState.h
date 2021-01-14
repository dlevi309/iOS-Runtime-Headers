/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/


@interface TMLUIControlState : NSObject {

	unsigned long long _state;

}

@property (assign,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
+(BOOL)isControlStateClass:(id)arg1 ;
+(void)registerControlState:(id)arg1 forClass:(Class)arg2 ;
+(void)verifyStateProperty:(id)arg1 withClass:(Class)arg2 ;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)state;
@end

