/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@class NSString;

@interface MTPowerAssertion : NSObject {

	unsigned _assertionID;
	NSString* _name;
	double _assertionTimeout;

}

@property (nonatomic,readonly) double assertionTimeout;              //@synthesize assertionTimeout=_assertionTimeout - In the implementation block
@property (assign,nonatomic) unsigned assertionID;                   //@synthesize assertionID=_assertionID - In the implementation block
@property (nonatomic,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
-(void)dealloc;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(void)setAssertionID:(unsigned)arg1 ;
-(unsigned)assertionID;
-(void)releaseAssertion;
-(id)initWithName:(id)arg1 assertionTimeout:(double)arg2 ;
-(void)takeAssertion;
-(double)assertionTimeout;
@end

