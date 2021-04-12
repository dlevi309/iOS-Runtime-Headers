/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)succinctDescription;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
-(SBIdleTimerRequestConfiguration *)configuration;
-(NSString *)reason;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)initWithConfiguration:(id)arg1 reason:(id)arg2 ;
@end

