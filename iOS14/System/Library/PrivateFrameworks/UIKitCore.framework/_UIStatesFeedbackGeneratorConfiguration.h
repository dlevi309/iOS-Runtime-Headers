/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)feedbackKeyPaths;
-(void)setInitialState:(NSString *)arg1 ;
-(NSString *)initialState;
-(void)setStateChangeConfigurations:(NSDictionary *)arg1 ;
-(NSDictionary *)stateChangeConfigurations;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

