/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessoryAssistiveTouch.framework/AccessoryAssistiveTouch
*/


@class NSString;

@interface ACCAssistiveTouchAccessory : NSObject {

	BOOL _desiredAssistiveTouchState;
	NSString* _accessoryUID;

}

@property (nonatomic,retain) NSString * accessoryUID;                      //@synthesize accessoryUID=_accessoryUID - In the implementation block
@property (assign,nonatomic) BOOL desiredAssistiveTouchState;              //@synthesize desiredAssistiveTouchState=_desiredAssistiveTouchState - In the implementation block
-(id)initWithAccessoryUID:(id)arg1 ;
-(NSString *)accessoryUID;
-(void)setAccessoryUID:(NSString *)arg1 ;
-(BOOL)desiredAssistiveTouchState;
-(void)setDesiredAssistiveTouchState:(BOOL)arg1 ;
@end

