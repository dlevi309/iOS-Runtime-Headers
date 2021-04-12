/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@interface SSProtocolCondition : NSObject {

	long long _operator;
	id _value;

}
+(id)newConditionWithDictionary:(id)arg1 ;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)evaluateWithContext:(id)arg1 ;
@end

