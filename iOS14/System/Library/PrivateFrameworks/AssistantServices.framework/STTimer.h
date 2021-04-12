/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/STSiriModelObject.h>

@class NSNumber;

@interface STTimer : STSiriModelObject {

	long long _state;
	NSNumber* _value;

}

@property (assign,nonatomic) long long state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSNumber * value;               //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setValue:(NSNumber *)arg1 ;
-(void)setState:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(NSNumber *)value;
@end

