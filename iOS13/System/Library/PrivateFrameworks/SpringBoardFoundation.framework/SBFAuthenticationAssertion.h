/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, SBFUserAuthenticationController;

@interface SBFAuthenticationAssertion : NSObject <BSDescriptionProviding> {

	BOOL _activated;
	BOOL _invalidated;
	long long _type;
	NSString* _identifier;
	SBFUserAuthenticationController* _controller;

}

@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,readonly) long long type;                                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,__weak,readonly) SBFUserAuthenticationController * controller;              //@synthesize controller=_controller - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(long long)type;
-(BOOL)isValid;
-(NSString *)identifier;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)activate;
-(SBFUserAuthenticationController *)controller;
-(id)publicDescription;
-(id)initWithIdentifier:(id)arg1 type:(long long)arg2 withController:(id)arg3 ;
@end

