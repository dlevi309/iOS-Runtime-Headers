/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class SBFWindow, NSMutableOrderedSet, NSString;

@interface _SBFKeyWindowStack : NSObject <BSDescriptionProviding> {

	SBFWindow* _expectedKeyWindow;
	NSMutableOrderedSet* _windowStack;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)succinctDescription;
-(void)popKeyWindow:(id)arg1 reason:(id)arg2 ;
-(id)init;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)_evaluateForNewKeyWindowWithReason:(id)arg1 ;
-(BOOL)_isWindowEligibleForKeyness:(id)arg1 ;
-(void)popKeyWindow:(id)arg1 ;
-(NSString *)description;
-(BOOL)pushKeyWindow:(id)arg1 ;
-(void)noteWindowUnhidden:(id)arg1 ;
-(void)noteWindowHidden:(id)arg1 ;
-(id)expectedKeyWindow;
-(void)_keyWindowDidChangeNotification:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)dealloc;
-(void)noteWindowDeallocated:(id)arg1 ;
@end

