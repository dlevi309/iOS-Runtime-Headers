/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)type;
-(NSString *)reason;
-(unsigned long long)state;
-(BOOL)isAcquired;
-(void)invalidateWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithType:(unsigned long long)arg1 reason:(id)arg2 ;
-(id)_errorWithUnderlyingError:(id)arg1 ;
-(void)acquireWithCompletion:(/*^block*/id)arg1 ;
@end

