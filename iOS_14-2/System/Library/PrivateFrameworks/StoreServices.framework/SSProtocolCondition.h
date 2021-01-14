/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@interface SSProtocolCondition : NSObject {

	long long _operator;
	id _value;

}
+(id)newConditionWithDictionary:(id)arg1 ;
-(BOOL)evaluateWithContext:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)dealloc;
@end

