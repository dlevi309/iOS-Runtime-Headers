/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSString, NSValue;

@interface _UIPrototypingValue : NSObject {

	NSString* _name;
	long long _type;
	NSValue* _defaultValue;
	NSValue* _minimumValue;
	NSValue* _maximumValue;
	NSValue* _currentValue;
	double _stepSize;

}

@property (nonatomic,copy) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) long long type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSValue * defaultValue;              //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,retain) NSValue * minimumValue;              //@synthesize minimumValue=_minimumValue - In the implementation block
@property (nonatomic,retain) NSValue * maximumValue;              //@synthesize maximumValue=_maximumValue - In the implementation block
@property (nonatomic,retain) NSValue * currentValue;              //@synthesize currentValue=_currentValue - In the implementation block
@property (assign,nonatomic) double stepSize;                     //@synthesize stepSize=_stepSize - In the implementation block
-(NSString *)name;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSValue *)defaultValue;
-(void)setDefaultValue:(NSValue *)arg1 ;
-(double)stepSize;
-(void)setMinimumValue:(NSValue *)arg1 ;
-(void)setMaximumValue:(NSValue *)arg1 ;
-(NSValue *)minimumValue;
-(NSValue *)maximumValue;
-(NSValue *)currentValue;
-(void)setCurrentValue:(NSValue *)arg1 ;
-(void)setStepSize:(double)arg1 ;
@end

