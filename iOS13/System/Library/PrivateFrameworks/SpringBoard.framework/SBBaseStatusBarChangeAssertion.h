/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSString;

@interface SBBaseStatusBarChangeAssertion : NSObject {

	NSString* _reason;

}

@property (nonatomic,copy,readonly) NSString * reason;              //@synthesize reason=_reason - In the implementation block
-(id)init;
-(id)description;
-(void)invalidate;
-(NSString *)reason;
-(id)_initWithReason:(id)arg1 ;
@end

