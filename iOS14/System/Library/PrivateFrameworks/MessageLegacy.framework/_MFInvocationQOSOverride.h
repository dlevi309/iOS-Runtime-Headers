/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/


#import <MessageLegacy/MessageLegacy-Structs.h>
@interface _MFInvocationQOSOverride : NSObject {

	pthread_override_sRef _override;
	BOOL _lowPriority;
	unsigned _desiredQoS;
	opaque_pthread_t* _pthread;

}

@property (getter=isLowPriority,nonatomic,readonly) BOOL lowPriority;              //@synthesize lowPriority=_lowPriority - In the implementation block
@property (nonatomic,readonly) unsigned desiredQoS;                                //@synthesize desiredQoS=_desiredQoS - In the implementation block
@property (nonatomic,readonly) opaque_pthread_t* pthread;                          //@synthesize pthread=_pthread - In the implementation block
-(unsigned long long)hash;
-(opaque_pthread_t*)pthread;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(unsigned)desiredQoS;
-(BOOL)removeOverride;
-(BOOL)isLowPriority;
-(id)initWithPthread:(opaque_pthread_t*)arg1 desiredQoS:(unsigned)arg2 lowPriority:(BOOL)arg3 ;
-(void)applyOverrideWhileForeground:(BOOL)arg1 ;
@end

