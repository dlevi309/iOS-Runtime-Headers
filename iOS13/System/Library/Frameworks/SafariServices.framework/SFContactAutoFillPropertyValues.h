/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSArray *)values;
-(long long)selectedIndex;
-(void)setSelectedIndex:(long long)arg1 ;
-(NSString *)property;
-(id)initWithValues:(id)arg1 property:(id)arg2 ;
-(SFContactAutoFillValue *)selectedValue;
@end

