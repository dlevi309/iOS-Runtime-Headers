/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@class NSString;

@interface NPKAssertion : NSObject {

	unsigned long long _type;
	unsigned long long _state;
	NSString* _reason;

}

@property (nonatomic,copy,readonly) NSString * reason;                       //@synthesize reason=_reason - In the implementation block
@property (getter=isAcquired,nonatomic,readonly) BOOL acquired; 
@property (nonatomic,readonly) unsigned long long type;                      //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long state;                               //@synthesize state=_state - In the implementation block
-(BOOL)isAcquired;
-(NSString *)reason;
-(unsigned long long)type;
-(unsigned long long)state;
-(void)invalidateWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithType:(unsigned long long)arg1 reason:(id)arg2 ;
-(id)_errorWithUnderlyingError:(id)arg1 ;
-(void)acquireWithCompletion:(/*^block*/id)arg1 ;
@end

