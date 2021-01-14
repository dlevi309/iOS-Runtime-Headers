/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
*/


@class NSString, NSArray;

@interface _CPPowerAssertion : NSObject {

	unsigned _assertion;
	double _timeout;
	NSString* _identifier;
	NSArray* _stack;

}

@property (assign,nonatomic) double timeout;              //@synthesize timeout=_timeout - In the implementation block
-(void)setTimeout:(double)arg1 ;
-(double)timeout;
-(void)timedout;
-(id)initWithIdentifier:(id)arg1 timeout:(double)arg2 ;
-(void)dealloc;
@end

