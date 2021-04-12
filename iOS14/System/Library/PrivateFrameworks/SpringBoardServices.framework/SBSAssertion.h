/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <libobjc.A.dylib/BSInvalidatable.h>

@class NSString, BSMachPortReceiveRight;

@interface SBSAssertion : NSObject <BSInvalidatable> {

	NSString* _assertionName;
	NSString* _reason;
	BSMachPortReceiveRight* _receiveRight;

}

@property (nonatomic,copy,readonly) NSString * assertionName;              //@synthesize assertionName=_assertionName - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                     //@synthesize reason=_reason - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)assertionName;
-(id)init;
-(id)initWithAssertionName:(id)arg1 reason:(id)arg2 receiveRight:(id)arg3 ;
-(id)initWithAssertionName:(id)arg1 reason:(id)arg2 port:(unsigned)arg3 ;
-(NSString *)reason;
-(void)invalidate;
-(void)dealloc;
@end

