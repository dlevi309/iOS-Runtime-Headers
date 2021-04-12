/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isLowPriority;
-(BOOL)removeOverride;
-(opaque_pthread_t*)pthread;
-(unsigned)desiredQoS;
-(id)initWithPthread:(opaque_pthread_t*)arg1 desiredQoS:(unsigned)arg2 lowPriority:(BOOL)arg3 ;
-(void)applyOverrideWhileForeground:(BOOL)arg1 ;
@end

