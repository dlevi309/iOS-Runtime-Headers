/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class BSMachPortSendRight, NSString;

@interface BKSAnimationFenceHandle : NSObject <BSXPCCoding, NSSecureCoding, NSCopying, BSInvalidatable> {

	unsigned long long _fenceName;
	BSMachPortSendRight* _caFence;
	BSMachPortSendRight* _preFence;
	BSMachPortSendRight* _preFenceTrigger;
	unsigned long long _handleName;
	int _valid;
	BOOL _shouldTrace;

}

@property (nonatomic,copy,readonly) NSString * _trace; 
@property (nonatomic,readonly) BSMachPortSendRight * trigger;              //@synthesize preFenceTrigger=_preFenceTrigger - In the implementation block
@property (nonatomic,readonly) unsigned long long fenceName; 
@property (getter=isUsable,nonatomic,readonly) BOOL usable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)newSystemFenceHandle;
+(id)newFenceHandleForContext:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isUsable;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(NSString *)_trace;
-(unsigned)CAPort;
-(BSMachPortSendRight *)trigger;
-(unsigned long long)fenceName;
-(id)_initWithFenceName:(unsigned long long)arg1 fence:(id)arg2 preFence:(id)arg3 preFenceTrigger:(id)arg4 shouldTrace:(BOOL)arg5 ;
@end

