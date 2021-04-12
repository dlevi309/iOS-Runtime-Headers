/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class NSString, NSNumber;

@interface HKAccessibilityValue : NSObject {

	NSString* _valueTitle;
	NSString* _valueType;
	NSString* _valueDescription;
	NSNumber* _valueAsNumber;

}

@property (nonatomic,readonly) NSString * valueTitle;                    //@synthesize valueTitle=_valueTitle - In the implementation block
@property (nonatomic,readonly) NSString * valueType;                     //@synthesize valueType=_valueType - In the implementation block
@property (nonatomic,readonly) NSString * valueDescription;              //@synthesize valueDescription=_valueDescription - In the implementation block
@property (nonatomic,readonly) NSNumber * valueAsNumber;                 //@synthesize valueAsNumber=_valueAsNumber - In the implementation block
-(id)description;
-(NSString *)valueType;
-(NSString *)valueDescription;
-(NSNumber *)valueAsNumber;
-(NSString *)valueTitle;
-(id)initWithValueTitle:(id)arg1 valueType:(id)arg2 valueDescription:(id)arg3 valueAsNumber:(id)arg4 ;
@end

