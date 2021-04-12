/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
*/


@class NSString;

@interface CHHapticEventParameter : NSObject {

	NSString* _param;
	float _value;

}

@property (readonly) NSString * parameterID;              //@synthesize param=_param - In the implementation block
@property (assign) float value;                           //@synthesize value=_value - In the implementation block
-(id)init;
-(float)value;
-(void)setValue:(float)arg1 ;
-(id)initWithParameterID:(id)arg1 value:(float)arg2 ;
-(NSString *)parameterID;
@end

