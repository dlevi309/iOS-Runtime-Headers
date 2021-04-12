/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFeedbackGeneratorConfiguration.h>

@class NSDictionary, NSString;

@interface _UIStatesFeedbackGeneratorConfiguration : _UIFeedbackGeneratorConfiguration {

	NSDictionary* _stateChangeConfigurations;
	NSString* _initialState;

}

@property (nonatomic,retain) NSString * initialState;                               //@synthesize initialState=_initialState - In the implementation block
@property (nonatomic,retain) NSDictionary * stateChangeConfigurations;              //@synthesize stateChangeConfigurations=_stateChangeConfigurations - In the implementation block
+(id)keyFromState:(id)arg1 toState:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)feedbackKeyPaths;
-(NSString *)initialState;
-(NSDictionary *)stateChangeConfigurations;
-(void)setStateChangeConfigurations:(NSDictionary *)arg1 ;
-(void)setInitialState:(NSString *)arg1 ;
@end

