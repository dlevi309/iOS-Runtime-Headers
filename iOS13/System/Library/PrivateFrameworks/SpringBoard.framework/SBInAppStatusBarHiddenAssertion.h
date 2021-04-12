/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSInvalidatable.h>

@class NSString;

@interface SBInAppStatusBarHiddenAssertion : NSObject <BSInvalidatable> {

	NSString* _identifier;
	NSString* _reason;
	/*^block*/id _invalidationBlock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(id)initWithIdentifier:(id)arg1 forReason:(id)arg2 invalidationBlock:(/*^block*/id)arg3 ;
-(void)invalidateWithAnimation:(BOOL)arg1 ;
@end

