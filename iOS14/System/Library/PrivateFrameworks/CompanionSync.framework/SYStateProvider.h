/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)updateState:(id)arg1 ;
-(id)init;
-(void)setEncoder:(id)arg1 ;
-(id)encoder;
-(void)dealloc;
-(id)initWithName:(id)arg1 type:(unsigned)arg2 typeName:(id)arg3 ;
-(id)_encodedState;
@end

