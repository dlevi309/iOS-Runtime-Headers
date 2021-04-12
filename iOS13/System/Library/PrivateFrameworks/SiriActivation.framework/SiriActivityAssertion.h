/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)invalidate;
-(BOOL)isValid;
-(NSString *)reason;
-(NSString *)identifier;
-(double)timestamp;
-(NSString *)reference;
-(id)initWithIdentifier:(id)arg1 reference:(id)arg2 reason:(id)arg3 timestamp:(double)arg4 invalidationBlock:(/*^block*/id)arg5 ;
-(void)invalidatedAtTimestamp:(double)arg1 ;
@end

