/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SBChainableModifierEvent : NSObject <BSDescriptionProviding, NSCopying> {

	BOOL _handled;
	NSString* _handledReason;

}

@property (getter=isHandled,nonatomic,readonly) BOOL handled;              //@synthesize handled=_handled - In the implementation block
@property (nonatomic,copy,readonly) NSString * handledReason;              //@synthesize handledReason=_handledReason - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(id)loggingCategory;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)unhandledCopy;
-(BOOL)isHandled;
-(NSString *)handledReason;
-(void)handleWithReason:(id)arg1 ;
@end

