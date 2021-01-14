/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class NSArray, NSString, SFContactAutoFillValue;

@interface SFContactAutoFillPropertyValues : NSObject {

	long long _selectedIndex;
	NSArray* _values;
	NSString* _property;

}

@property (assign,nonatomic) long long selectedIndex;                               //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (nonatomic,readonly) SFContactAutoFillValue * selectedValue; 
@property (nonatomic,copy,readonly) NSArray * values;                               //@synthesize values=_values - In the implementation block
@property (nonatomic,copy,readonly) NSString * property;                            //@synthesize property=_property - In the implementation block
-(NSString *)property;
-(NSArray *)values;
-(void)setSelectedIndex:(long long)arg1 ;
-(long long)selectedIndex;
-(id)initWithValues:(id)arg1 property:(id)arg2 ;
-(SFContactAutoFillValue *)selectedValue;
@end

