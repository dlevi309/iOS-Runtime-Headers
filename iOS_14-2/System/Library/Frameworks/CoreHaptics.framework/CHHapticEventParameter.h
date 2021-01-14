/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithParameterID:(id)arg1 value:(float)arg2 ;
-(void)setValue:(float)arg1 ;
-(NSString *)parameterID;
-(float)value;
@end

