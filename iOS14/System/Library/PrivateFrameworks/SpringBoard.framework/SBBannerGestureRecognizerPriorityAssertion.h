/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSInvalidatable.h>

@class NSString;

@interface SBBannerGestureRecognizerPriorityAssertion : NSObject <BSInvalidatable> {

	/*^block*/id _invalidationHandler;
	/*^block*/id _enablementChangeHandler;
	BOOL _enabled;
	long long _priority;
	NSString* _reason;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) long long priority;                       //@synthesize priority=_priority - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                   //@synthesize reason=_reason - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isValidBannerGestureRecognizerPriority:(long long)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)description;
-(NSString *)reason;
-(void)invalidate;
-(BOOL)isEnabled;
-(long long)priority;
-(id)initWithPriority:(long long)arg1 reason:(id)arg2 invalidationHandler:(/*^block*/id)arg3 enablementChangeHandler:(/*^block*/id)arg4 ;
@end

