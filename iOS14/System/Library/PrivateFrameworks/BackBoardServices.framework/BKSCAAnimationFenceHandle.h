/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <BackBoardServices/BKSAnimationFenceHandle.h>

@class CAFenceHandle;

@interface BKSCAAnimationFenceHandle : BKSAnimationFenceHandle {

	CAFenceHandle* _caFence;

}
+(BOOL)supportsSecureCoding;
-(id)trigger;
-(BOOL)isUsable;
-(id)CAFenceHandle;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(void)invalidate;
-(BOOL)shouldIgnoreTrigger;
-(unsigned long long)fenceName;
-(id)_initWithCAFenceHandle:(id)arg1 ;
-(unsigned)CAPort;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

