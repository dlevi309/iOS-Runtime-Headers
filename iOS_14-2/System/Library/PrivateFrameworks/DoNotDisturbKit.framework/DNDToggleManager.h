/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbKit.framework/DoNotDisturbKit
*/


@class DNDModeAssertionService, DNDStateService, NSString;

@interface DNDToggleManager : NSObject {

	DNDModeAssertionService* _modeAssertionService;
	DNDStateService* _stateService;
	NSString* _toggleAssertionIdentifier;

}

@property (nonatomic,copy) NSString * toggleAssertionIdentifier;              //@synthesize toggleAssertionIdentifier=_toggleAssertionIdentifier - In the implementation block
+(void)initialize;
+(id)managerForClientIdentifier:(id)arg1 ;
-(id)initWithModeAssertionService:(id)arg1 stateService:(id)arg2 ;
-(BOOL)_toggleDNDOffReturningError:(id*)arg1 ;
-(BOOL)_toggleDNDOnReturningError:(id*)arg1 ;
-(NSString *)toggleAssertionIdentifier;
-(void)setToggleAssertionIdentifier:(NSString *)arg1 ;
-(BOOL)toggleToTargetState:(unsigned long long)arg1 error:(id*)arg2 ;
@end

