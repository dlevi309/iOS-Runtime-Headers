/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/


#import <CompanionSync/CompanionSync-Structs.h>
@interface SYStateProvider : NSObject {

	unsigned _type;
	unsigned long long _handle;
	id _state;
	os_unfair_lock_s _lock;
	/*^block*/id _encoder;

}

@property (nonatomic,copy) id encoder;              //@synthesize encoder=_encoder - In the implementation block
+(id)stateProviderWithName:(id)arg1 type:(unsigned)arg2 typeName:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(void)updateState:(id)arg1 ;
-(void)setEncoder:(id)arg1 ;
-(id)encoder;
-(id)initWithName:(id)arg1 type:(unsigned)arg2 typeName:(id)arg3 ;
-(id)_encodedState;
@end

