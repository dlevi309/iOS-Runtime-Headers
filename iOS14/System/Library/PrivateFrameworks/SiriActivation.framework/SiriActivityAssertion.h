/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/

#import <SiriActivation/SiriAssertion.h>

@class NSString;

@interface SiriActivityAssertion : NSObject <SiriAssertion> {

	NSString* _identifier;
	NSString* _reason;
	NSString* _reference;
	double _timestamp;
	/*^block*/id _invalidationBlock;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                  //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy,readonly) NSString * reference;               //@synthesize reference=_reference - In the implementation block
@property (nonatomic,readonly) double timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)reference;
-(id)initWithIdentifier:(id)arg1 reference:(id)arg2 reason:(id)arg3 timestamp:(double)arg4 invalidationBlock:(/*^block*/id)arg5 ;
-(double)timestamp;
-(BOOL)isValid;
-(NSString *)reason;
-(void)invalidatedAtTimestamp:(double)arg1 ;
-(void)invalidate;
-(NSString *)identifier;
-(void)dealloc;
@end

