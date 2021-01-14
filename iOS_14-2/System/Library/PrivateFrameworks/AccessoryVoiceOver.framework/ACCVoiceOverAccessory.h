/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessoryVoiceOver.framework/AccessoryVoiceOver
*/


@class NSString;

@interface ACCVoiceOverAccessory : NSObject {

	BOOL _desiredVoiceOverState;
	NSString* _accessoryUID;

}

@property (nonatomic,retain) NSString * accessoryUID;                 //@synthesize accessoryUID=_accessoryUID - In the implementation block
@property (assign,nonatomic) BOOL desiredVoiceOverState;              //@synthesize desiredVoiceOverState=_desiredVoiceOverState - In the implementation block
-(id)initWithAccessoryUID:(id)arg1 ;
-(NSString *)accessoryUID;
-(void)setAccessoryUID:(NSString *)arg1 ;
-(BOOL)desiredVoiceOverState;
-(void)setDesiredVoiceOverState:(BOOL)arg1 ;
@end

