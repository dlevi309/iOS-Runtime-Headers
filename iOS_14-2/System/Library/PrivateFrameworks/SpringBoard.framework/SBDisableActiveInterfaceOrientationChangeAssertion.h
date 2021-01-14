/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)description;
-(id)initWithReason:(id)arg1 nudgeOrientationOnInvalidate:(BOOL)arg2 ;
-(void)invalidate;
-(void)dealloc;
@end

