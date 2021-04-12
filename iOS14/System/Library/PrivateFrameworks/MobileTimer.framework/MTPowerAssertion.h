/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)releaseAssertion;
-(id)initWithName:(id)arg1 assertionTimeout:(double)arg2 ;
-(void)takeAssertion;
-(double)assertionTimeout;
-(void)setAssertionID:(unsigned)arg1 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(unsigned)assertionID;
-(void)dealloc;
@end

