/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSInvalidatable.h>

@class NSString;

@interface SBMedusaHostedKeyboardWindowLevelAssertion : NSObject <BSInvalidatable> {

	/*^block*/id _invalidationHandler;
	unsigned long long _priority;
	double _windowLevel;

}

@property (nonatomic,readonly) unsigned long long priority;              //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) double windowLevel;                       //@synthesize windowLevel=_windowLevel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)windowLevel;
-(void)invalidate;
-(unsigned long long)priority;
-(void)dealloc;
-(id)initWithMedusaHostedKeyboardWindow:(id)arg1 priority:(unsigned long long)arg2 windowLevel:(double)arg3 ;
@end

