/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <BackBoardServices/BKSAnimationFenceHandle.h>

@class CAFenceHandle, BSMachPortSendRight, NSString;

@interface BKSSystemAnimationFenceHandle : BKSAnimationFenceHandle {

	unsigned long long _fenceName;
	CAFenceHandle* _caFence;
	BSMachPortSendRight* _preFence;
	BSMachPortSendRight* _preFenceTrigger;
	unsigned long long _handleName;
	int _valid;
	BOOL _shouldTrace;
	BOOL _skipSync;

}

@property (nonatomic,copy,readonly) NSString * _trace; 
+(BOOL)supportsSecureCoding;
-(id)trigger;
-(BOOL)isUsable;
-(id)CAFenceHandle;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)_initWithFenceName:(unsigned long long)arg1 fence:(id)arg2 preFence:(id)arg3 preFenceTrigger:(id)arg4 skipSync:(BOOL)arg5 shouldTrace:(BOOL)arg6 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(void)invalidate;
-(NSString *)_trace;
-(BOOL)shouldIgnoreTrigger;
-(unsigned long long)fenceName;
-(unsigned)CAPort;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

