/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/


@class NSDictionary, NSString, NSArray;

@interface TIAnalyticsEventSpec : NSObject {

	BOOL _isInputModeRequired;
	NSDictionary* _fieldSpecsByName;
	NSString* _name;
	NSArray* _fieldSpecs;

}

@property (nonatomic,readonly) NSDictionary * fieldSpecsByName;              //@synthesize fieldSpecsByName=_fieldSpecsByName - In the implementation block
@property (nonatomic,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL isInputModeRequired;                     //@synthesize isInputModeRequired=_isInputModeRequired - In the implementation block
@property (nonatomic,readonly) NSArray * fieldSpecs;                         //@synthesize fieldSpecs=_fieldSpecs - In the implementation block
+(id)eventSpecWithName:(id)arg1 inputModeRequired:(BOOL)arg2 fieldSpecs:(id)arg3 ;
+(id)eventSpecWithName:(id)arg1 inputModeRequired:(BOOL)arg2 ;
-(NSArray *)fieldSpecs;
-(BOOL)isInputModeRequired;
-(id)initWithName:(id)arg1 inputModeRequired:(BOOL)arg2 fieldSpecs:(id)arg3 ;
-(NSDictionary *)fieldSpecsByName;
-(NSString *)name;
-(id)fieldSpecWithName:(id)arg1 ;
@end

