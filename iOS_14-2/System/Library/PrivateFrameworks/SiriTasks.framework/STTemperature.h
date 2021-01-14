/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
*/

#import <AssistantServices/STSiriModelObject.h>

@interface STTemperature : STSiriModelObject {

	double _value;
	long long _units;

}
+(BOOL)supportsSecureCoding;
-(long long)units;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)value;
-(id)_initWithValue:(double)arg1 units:(long long)arg2 ;
@end

