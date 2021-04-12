/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessoryVoiceOver.framework/AccessoryVoiceOver
*/


@class NSString;

@interface ACCVoiceOverAccessory : NSObject {

	BOOL _desiredVoiceOverState;
	NSString* _accessoryUID;

}

@property (nonatomic,retain) NSString * accessoryUID;                 //@synthesize accessoryUID=_accessoryUID - In the implementation block
@property (assign,nonatomic) BOOL desiredVoiceOverState;              //@synthesize desiredVoiceOverState=_desiredVoiceOverState - In the implementation block
-(NSString *)accessoryUID;
-(id)initWithAccessoryUID:(id)arg1 ;
-(void)setAccessoryUID:(NSString *)arg1 ;
-(BOOL)desiredVoiceOverState;
-(void)setDesiredVoiceOverState:(BOOL)arg1 ;
@end

