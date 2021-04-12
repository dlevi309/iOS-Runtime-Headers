/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/


@class NSString, NSArray;

@interface TIAnalyticsEventSpec : NSObject {

	BOOL _isInputModeRequired;
	NSString* _name;
	NSArray* _fieldSpecs;

}

@property (nonatomic,readonly) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL isInputModeRequired;              //@synthesize isInputModeRequired=_isInputModeRequired - In the implementation block
@property (nonatomic,readonly) NSArray * fieldSpecs;                  //@synthesize fieldSpecs=_fieldSpecs - In the implementation block
+(id)eventSpecWithName:(id)arg1 inputModeRequired:(BOOL)arg2 fieldSpecs:(id)arg3 ;
+(id)eventSpecWithName:(id)arg1 inputModeRequired:(BOOL)arg2 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 inputModeRequired:(BOOL)arg2 fieldSpecs:(id)arg3 ;
-(BOOL)isInputModeRequired;
-(NSArray *)fieldSpecs;
@end

