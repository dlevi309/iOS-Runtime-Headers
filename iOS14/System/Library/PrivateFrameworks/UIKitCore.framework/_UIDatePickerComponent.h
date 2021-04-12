/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSString;

@interface _UIDatePickerComponent : NSObject {

	unsigned long long _equivalentUnit;
	NSString* _formatString;
	unsigned long long _calendarUnit;
	double _width;
	NSRange _unitRange;

}

@property (nonatomic,readonly) NSString * formatString;                        //@synthesize formatString=_formatString - In the implementation block
@property (nonatomic,readonly) unsigned long long calendarUnit;                //@synthesize calendarUnit=_calendarUnit - In the implementation block
@property (nonatomic,readonly) unsigned long long equivalentUnit; 
@property (assign,nonatomic) NSRange unitRange;                                //@synthesize unitRange=_unitRange - In the implementation block
@property (assign,nonatomic) double width;                                     //@synthesize width=_width - In the implementation block
+(id)componentsFromDateFormatString:(id)arg1 locale:(id)arg2 desiredUnits:(long long)arg3 ;
+(id)componentsFromDateFormatString:(id)arg1 locale:(id)arg2 ;
-(NSString *)formatString;
-(double)width;
-(NSRange)unitRange;
-(void)setWidth:(double)arg1 ;
-(void)setUnitRange:(NSRange)arg1 ;
-(unsigned long long)calendarUnit;
-(id)description;
-(unsigned long long)equivalentUnit;
-(id)_initWithFormatString:(id)arg1 calendarUnit:(unsigned long long)arg2 ;
@end

