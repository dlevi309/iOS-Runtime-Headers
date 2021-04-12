/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSInvalidatable.h>

@class NSString;

@interface SBDisableActiveInterfaceOrientationChangeAssertion : NSObject <BSInvalidatable> {

	NSString* _reason;
	BOOL _invalidated;
	BOOL _nudge;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(id)initWithReason:(id)arg1 nudgeOrientationOnInvalidate:(BOOL)arg2 ;
@end

