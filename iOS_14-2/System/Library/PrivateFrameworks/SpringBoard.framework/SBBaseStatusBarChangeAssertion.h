/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSString;

@interface SBBaseStatusBarChangeAssertion : NSObject {

	NSString* _reason;

}

@property (nonatomic,copy,readonly) NSString * reason;              //@synthesize reason=_reason - In the implementation block
-(id)init;
-(id)description;
-(NSString *)reason;
-(void)invalidate;
-(id)_initWithReason:(id)arg1 ;
@end

