/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class SBIdleTimerRequestConfiguration, NSString;

@interface _SBIdleTimerConfigurationInfo : NSObject <BSDescriptionProviding> {

	SBIdleTimerRequestConfiguration* _configuration;
	NSString* _reason;

}

@property (nonatomic,readonly) SBIdleTimerRequestConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                                       //@synthesize reason=_reason - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSString *)reason;
-(SBIdleTimerRequestConfiguration *)configuration;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 reason:(id)arg2 ;
@end

