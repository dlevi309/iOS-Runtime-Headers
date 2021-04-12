/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)value;
-(void)setValue:(NSNumber *)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
@end

