/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/STSiriModelObject.h>

@interface STSetting : STSiriModelObject {

	long long _type;
	id _value;

}

@property (assign,nonatomic) long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) id value;                    //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)value;
-(void)setValue:(id)arg1 ;
@end

