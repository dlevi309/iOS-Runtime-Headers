/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)succinctDescription;
-(id)publicDescription;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 type:(long long)arg2 withController:(id)arg3 ;
-(void)activate;
-(NSString *)description;
-(BOOL)isValid;
-(long long)type;
-(void)invalidate;
-(NSString *)identifier;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(SBFUserAuthenticationController *)controller;
-(id)succinctDescriptionBuilder;
-(void)dealloc;
@end

